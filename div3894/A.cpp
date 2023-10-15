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
  int n, m; cin >> n >> m;
  vector<string> carpet(n);
  vector<unordered_set<char>> cols(m);
  fore(i, 0, n) cin >> carpet[i];
  fore(i, 0, m){
    fore(j, 0, n){
      cols[i].insert(carpet[j][i]);
    }
  }
  string tar = "vika";
  int ptr, j;
  bool f = false;
  for(int i = 0; i < m; i++){
    ptr = 0;
    for(j = i; j < m; j++){
       if(cols[j].count(tar[ptr])) {
        ptr++;
      }
    }
    if(ptr == 4){
      f = 1;
      break;
    }
  }
  cout << (f?"YES":"NO") << '\n';

}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t; cin >> t; while(t--) solve();
}
