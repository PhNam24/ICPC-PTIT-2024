#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    long long a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> dp(n + 5, LONG_LONG_MAX);
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            dp[i] = min(dp[i], dp[j] + (a[i] - a[j]) * (a[i] - a[j]) + c);
        }
    }
    cout << dp[n - 1];
    return 0;
}