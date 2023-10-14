#include <algorithm>
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
void solve(){
  int op = 0,n;
  cin >> n;
  vector<string> a(n);
  fore(i, 0, n) cin >> a[i];

  for(int i = 0; i *2 < n; i++){
    for(int j = 0; j * 2 < n; j++){
      vector<char> b = {a[i][j], a[j][n-i-1], a[n-1-i][n-1-j], a[n-1-j][i]};
      auto ch = *max_element(ALL(b));
      for(auto c: b){
        op += (ch - c);
      }
    }
  }
  cout << op << '\n';

}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t; cin >> t;
  while(t--) solve();

}
