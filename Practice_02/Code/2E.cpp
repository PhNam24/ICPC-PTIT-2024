#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int check(vector<long long> a) {
    long long max_chan = 0;
    for(int i = 0; i < a.size(); i++) {
        if (a[i] % 2 == 0) {
            max_chan = max(max_chan, a[i]);
        }
    }   
    return max_chan;
}


int main() {
    int n;
    cin >> n;
    vector<long long> a;
    long long x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x % 2 == 0) {
            a.push_back(x);
        }
    }
    int cnt = 0;
    for(int i: a) {
        while(i % 2 == 0) {
            i /= 2;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}