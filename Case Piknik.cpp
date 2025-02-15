#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grafik(n + 1);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        grafik[x].push_back(y);
        grafik[y].push_back(x);
    }

    vector<bool> visited(n + 1, false);
    int komponen = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            komponen++;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                for (int j : grafik[node]) {
                    if (!visited[j]) {
                        q.push(j);
                        visited[j] = true;
                    }
                }
            }
        }
    }

    int tidakTerhubung = 0;
    for (int i = 1; i <= n; i++) {
        if (grafik[i].empty()) tidakTerhubung++;
    }

    cout << max(komponen - (tidakTerhubung > 0), 1) << endl;

    return 0;
}