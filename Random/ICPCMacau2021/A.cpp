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
int n;
void solve() {
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  vector<int> ans;
  for(int i = 0; i < n; i++){
    for(int j = 0; j <n ; j++){
      cin >> a[i][j];
    }
  }
  for(int top = 0; top < n;top++) {
    if(top% 2 == 0){
      for(int i = 0; i < n;i++) ans.push_back(a[top][i]);
    }else{
      for(int i = n-1; i >= 0; i--) ans.push_back(a[top][i]);
    }
  }

  int up = 0;
  int down = 0;
  for (int i = 1; i < n*n; i++) {
    if (ans[i - 1] < ans[i]) {
      up++;
    } else {
      down++;
    }
  }
  if (down < up) {
    reverse(ans.begin(), ans.end());
  }
  for (int i = 0; i < n*n; i++) {
    cout << ans[i];
    if (i != n*n - 1)
      cout << ' ';
  }

  cout << '\n';
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int T;
  cin >> T;
  while (T--)
    solve();
}
