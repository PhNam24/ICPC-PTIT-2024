// Solved by PhNam

#include <iostream>
#include <queue>

using namespace std;

int visited[1000005] = {};

int bfs(int n, int st, int en, int u, int d) {
    if (st == en) {
        return 0;
    }
    deque<pair<int, int>> q;
    q.push_back({st, 0});
    while(!q.empty()) {
        int i = q.front().first;
        int cnt = q.front().second;
        q.pop_front();
        if(i == en) {
            return cnt;
        }
        if (visited[i] == 0) {
            visited[i] = 1;
            int tren = i + u;
            int duoi = i - d;
            if (1 <= tren && tren <= n && visited[tren] == 0) {
                q.push_back({tren, cnt + 1});
            }
            if (1 <= duoi && duoi <= n && visited[duoi] == 0) {
                q.push_back({duoi, cnt + 1});
            }
        }
    }
    return -1;
}

int main() {
    int n, st, en, u, d;
    cin >> n >> st >> en >> u >> d;
    cout << bfs(n, st, en, u, d);
    return 0;
}
