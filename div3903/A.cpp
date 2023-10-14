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
string x,s; 

bool is(){
  if(x.size()< s.size()) return false;
//  debug(0+s.size());
 // debug(x.size());
  for(int i = 0; i+s.size()-1 < x.size(); i++){
    int cur = i;
    int j;
    for(j = 0; j < s.size(); j++){
      if(x[cur] != s[j]) break;
      cur++;
    }
    if(j == s.size()) return true;
  }
  return false;
}
void solve(){
  int n, m; cin >> n >> m;
  cin >> x >> s;
  int j, i;
  bool f = true;
  for(j = 0; j < n; j++){
    f = true;
    for(i = 0; i < m; i++){
      if(x[(j+i)%n] != s[i]){
        f = false;
        break;
      }
    }
    if(f) break;
  }
  if(!f) cout << "-1\n";
  else{
    int cur = 0;
    bool fl = false;
    int op = 0;
    int j;
    while(!is()){
        x+=x;
        op++;
    }
//    debug(x);
    cout << op << '\n'; 
  }


}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int T; cin >> T;
  while(T--) solve();
}
