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
  int n; cin >> n;
  vector<int> a(n);
  vector<int> ans;
  int x;
  fore(i, 1, n+1){
    cin >> x;
    if(x%3 == 0) ans.pb(i);
  }
  if(ans.size() == 0){
    cout << "No hay triples.\n";

    return 0;
  }
  cout << ans.size() << '\n';
  for(auto num: ans) cout << num << ' '; cout << '\n';
}
