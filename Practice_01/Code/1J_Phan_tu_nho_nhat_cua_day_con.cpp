#include <iostream>
#include <queue>

using namespace std;

int sol(int n, int a[], int k) {
    int ans = 0;
    int minNum = 1e9 + 1;
    deque<int> dq;
    for(int i = 0; i < k; i++) {
        if (a[i] < minNum) {
            minNum = a[i];
        }
        while(!dq.empty() && a[i] < a[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    vector<int> res;
    for(int i = k; i < n; i++) {
        if (a[i] < minNum) {
            minNum = a[i];
        }
        if (i - dq.front() >= k) {
            dq.pop_front();
        }
        while(!dq.empty() && a[i] < a[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
        ans = max(ans, a[dq.front()]);
    }
    if (ans == 0) {
        return minNum;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++) {
        cout << sol(n, a, i) << " ";
    }
    return 0;
}