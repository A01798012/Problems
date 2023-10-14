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
int xCur, yCur, xPor, yPor;
ii getOtherPortal(int i, int j) {
  portCord = maze[i][j] - 'a';
  if (portals[portCord][0].first == i && portals[portCord][0].second == j)
    return portals[portCord][1];
  else
    return portals[portCord][0];
}
queue<ii> q;
void pushNeigh(int i, int j) {
  for (auto dif : dx) {
    if (i + dif >= 0 && i + dif < n && !vis[i + dif][j]) {
      if (maze[i + dif][j] == '.' ||
          (maze[i + dif][j] >= 'a' && maze[i + dif][j] <= 'z')) {
        vis[i + dif][j] = 1;
        q.push({i + dif, j});
        dis[i + dif][j] = dis[i][j] + 1;
      }
    }
    if (j + dif >= 0 && j + dif < m && !vis[i][j + dif]) {
      if (maze[i][j + dif] == '.' ||
          (maze[i][j + dif] >= 'a' && maze[i][j + dif] <= 'z')) {
        vis[i][j + dif] = 1;
        q.push({i, j + dif});
        dis[i][j + dif] = dis[i][j] + 1;
      }
    }
  }
}

bool could = false;
void bfs() {
  vis[0][0] = 1;
  q.push({0, 0});

  while (!q.empty()) {
    pair<int, int> val = q.front();
    q.pop();
    x = val.first;
    y = val.second;
    pushNeigh(x, y);
    if (maze[x][y] >= 'a' && maze[x][y] <= 'z') {
      portal = getOtherPortal(x, y);
      xPor = portal.first;
      yPor = portal.second;
      dis[xPor][yPor] = dis[x][y];
      pushNeigh(xPor, yPor);
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
  dis[n - 1][m - 1] = -1;
  bfs();

  cout << dis[n - 1][m - 1] << '\n';
}
