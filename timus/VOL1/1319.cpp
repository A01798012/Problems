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
#define debug(x) cout << #x << " = " << x << '\n'

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<vector<int>> ans(n + 1, vector<int>(n + 1));
  int x = n, y = 1;
  if (n == 1) {
    cout << "1\n";
    exit(0);
  }

  int prevX = x;
  int cur = 1;

  while (1) {
    if (y == n && x == n) {
      ans[y][x] = cur;
      cur++;
      break;
    }
    ans[y][x] = cur;
    x++;
    y++;
    cur++;
    if (y > n || x > n) {
      int aux = x;
      x = prevX - 1;
      prevX = x;
      y = 1;
    }
  }
  y = 2;
  x = 1;
  int prevY = y;
  while (1) {
    if (y == n && x == 1) {
      ans[y][x] = cur;
      cur++;
      break;
    }
    ans[y][x] = cur;
    x++;
    y++;
    cur++;
    if (y > n || x > n) {
      int aux = y;
      y = prevY + 1;
      prevY = y;
      x = 1;
    }
  }
  fore(i, 1, n + 1) {
    fore(j, 1, n + 1) { cout << ans[i][j] << ' '; }
    cout << '\n';
  }
}
