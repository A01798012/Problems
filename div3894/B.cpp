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
  int n; cin >> n;
  vector<int> b(n), ans;
  fore(i, 0, n) cin >> b[i];
  ans.pb(b[0]);
  fore(i, 1, n){
    if(ans[ans.size()-1] <= b[i]){
      ans.pb(b[i]);
    }else{
      ans.pb(b[i]);
      ans.pb(b[i]);
    }
  }
  cout << ans.size() << '\n';
  fore(i, 0, ans.size()) cout << ans[i] << ' '; cout << '\n';

}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t; cin >> t; while(t--) solve();
}
