#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[m];
    int d[n + 5] = {};
    for(int i = 0; i < m; i++) {
        cin >> a[i];
        d[a[i]]++;
    }
    int max1 = 0;
    int max2 = 0;
    for(int i = 1; i <= n; i++) {
        if (d[i] > max1) {
            max2 = max1;
            max1 = d[i];
        } else if (d[i] > max2 && d[i] != max1) {
            max2 = d[i];
        }
    }
    for(int i = 1; i <= n; i++) {
        if (d[i] == max2 && max2 != 0) {
            cout << i << " ";
            return 0;
        }
    }
    cout << "NONE";
    return 0;
}