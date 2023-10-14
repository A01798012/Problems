#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ThxDem=b;i<ThxDem;++i)
#define pb push_back
#define ALL(s) s.begin(),s.end()
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

void solve(){
  int n; cin >> n;
  vector<int> line(n);
  vector<vector<int>> a;
  for(auto &i: line) cin >> i;
  sort(ALL(line));
  if(line[0] == 0) a.pb({0});
  else {
    cout << "NO\n";
    return;
  }
  bool f = 1;
  for(int i = 1; i < n;i++){
    bool temp = 0;
    for(int j = 0; j < a.size(); j++){
      if(line[i] == 0){
        a.pb({0});
        temp = 1;
        break;
      }else if(a[j].size() == line[i]){
         a[j].pb(line[i]);
         temp = 1;
         break;
      }
    }
    if(!temp) {f = 0; break;}
  }
  if(!f) cout << "NO\n";
  else cout << "YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  while(t--)solve();

}
