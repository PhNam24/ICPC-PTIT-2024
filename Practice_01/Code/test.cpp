#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, k, a[1000000];

int check()
{
    int cnt = 0;
    for ( int i = 1; i <= n; i++ )
    {
        if ( a[i] ) cnt++;
    }
    if ( cnt == k ) return 1;
    return 0;
}

void in()
{
    for ( int i = 1; i <= n; i++ )
    {
        cout << a[i];
    }
    cout << endl;
}

void Try(int i)
{
    for ( int j = 0; j < 2; j++ )
    {
        a[i] = j;
        if ( i == n )
        {
            in();
        }
        else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        cin >> n >> k;
        Try(1);
    }
    return 0;
}