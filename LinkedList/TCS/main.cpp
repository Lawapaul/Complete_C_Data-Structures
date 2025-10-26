#include <iostream>
using namespace std;

int main() {
    int n; cin >> n; string s; getline(cin, s);
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        string t; int j = 0;
        while (j < s.size()) {
            int num = 0;
            while (isdigit(s[j])) num = num * 10 + s[j++] - '0';
            char c = s[j++];
            t += string(num, c);
        }
        a[i] = t;
    }
    pair<int,int> S, D;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 'S') S = {i,j};
            if (a[i][j] == 'D') D = {i,j};
        }

    vector<vector<int>> dist(n, vector<int>(n, 1e9));
    deque<pair<int,int>> q;
    q.push_back(S);
    dist[S.first][S.second] = 0;

    int dr[4] = {-1,1,0,0}, dc[4] = {0,0,-1,1};
    while (!q.empty()) {
        auto [r, c] = q.front(); q.pop_front();
        for (int k = 0; k < 4; k++) {
            int nr = r + dr[k], nc = c + dc[k];
            if (nr < 0 || nc < 0 || nr >= n || nc >= n || a[nr][nc] == 'R') continue;
            int w = (a[nr][nc] == 'G');
            if (dist[nr][nc] > dist[r][c] + w) {
                dist[nr][nc] = dist[r][c] + w;
                if (w) q.push_back({nr, nc});
                else q.push_front({nr, nc});
            }
        }
    }
    cout << dist[D.first][D.second];
}