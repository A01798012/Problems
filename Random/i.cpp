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
vector<vector<ii>> portals;
int n, m, p;
int dx[] = {1, -1};
int x, y;
int portCord;
ii portal;
ii getOtherPortal(int i, int j) {
  portCord = maze[i][j] - 'a';
  if (portals[portCord][0].first == i && portals[portCord][0].second == j)
    return portals[portCord][1];
  else
    return portals[portCord][0];
}
void bfs() {
  queue<ii> q;
  vis[0][0] = 1;
  q.push({0, 0});
  if (maze[0][0] >= 'a' && maze[0][0] <= 'z') {
    portal = getOtherPortal(0, 0);
    vis[portal.first][portal.second] = 1;
    q.push({portal.first, portal.second});
    dis[portal.first][portal.second] = 0;
  }
  while (!q.empty()) {
    pair<int, int> val = q.front();
    x = val.first;
    y = val.second;
    q.pop();
    for (auto dif : dx) {
      if (x + dif >= 0 && x + dif < n && !vis[x + dif][y]) {
        vis[x + dif][y] = 1;
        if (maze[x + dif][y] == '.') {
          q.push({x + dif, y});
        } else if (maze[x + dif][y] >= 'a' && maze[x + dif][y] <= 'z') {
          portal = getOtherPortal(x + dif, y);
          vis[portal.first][portal.second] = 1;
          q.push({portal.first, portal.second});
          dis[portal.first][portal.second] = dis[x][y] + 1;
        }
        dis[x + dif][y] = dis[x][y] + 1;
      }
      if (y + dif >= 0 && y + dif < m && !vis[x][y + dif]) {
        vis[x][y + dif] = 1;
        if (maze[x][y + dif] == '.') {
          q.push({x, y + dif});
        } else if (maze[x][y + dif] >= 'a' && maze[x][y + dif] <= 'z') {
          portal = getOtherPortal(x, y + dif);
          dis[x][y + dif] = dis[x][y];
          vis[portal.first][portal.second] = 1;
          q.push({portal.first, portal.second});
          dis[portal.first][portal.second] = dis[x][y] + 1;
        }
        dis[x][y + dif] = dis[x][y] + 1;
      }
    }
  }
}
int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> n >> m >> p;
  maze.resize(n, vector<char>(m));
  dis.resize(n, vector<int>(m, 0));
  vis.resize(n, vector<bool>(m, 0));
  portals.resize(29);

  fore(i, 0, n) {
    fore(j, 0, m) {
      cin >> maze[i][j];
      if (maze[i][j] >= 'a' && maze[i][j] <= 'z') {
        int val = maze[i][j] - 'a';
        portals[val].push_back({i, j});
      }
    }
  }
  bfs();
  cout << dis[n - 1][m - 1] << '\n';
}
