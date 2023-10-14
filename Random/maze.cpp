#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i, a, b) for (int i = a, ThxDem = b; i < ThxDem; ++i)
#define pb push_back
#define ALL(s) s.begin(), s.end()
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
#define MAXN 100000
vector<vector<char>> maze;
vector<vector<int>> dis;
vector<vector<bool>> vis;
int n, m, p;
int dx[] = {1, -1};
int x, y;
void bfs(int i, int j) {
  queue<ii> q;
  q.push({i, j});
  while (!q.empty()) {
    pair<int, int> val = q.front();
    x = val.first;
    y = val.second;
    q.pop();
    for (auto dif : dx) {
      if (x + dif >= 0 && x + dif < n && maze[x + dif][y] == '.' &&
          !vis[x + dif][y]) {
        vis[x + dif][y] = 1;
        q.push({x + dif, y});
        dis[x + dif][y] = dis[x][y] + 1;
      }
      if (y + dif >= 0 && y + dif < m && maze[x][y + dif] == '.' &&
          !vis[x][y + dif]) {
        vis[x][y + dif] = 1;
        q.push({x, y + dif});
        dis[x][y + dif] = dis[x][y] + 1;
      }
    }
  }
}
int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> n >> m;
  maze.resize(n, vector<char>(m));
  dis.resize(n, vector<int>(m, 0));
  vis.resize(n, vector<bool>(m, 0));
  fore(i, 0, n) {
    fore(j, 0, m) { cin >> maze[i][j]; }
  }
  bfs(0, 0);
  cout << dis[n - 1][m - 1] << '\n';
}
