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
  int n, m; cin >> n >> m;
  unordered_map<int,int> wished, opt;
  int x;
  for(int i = 0; i < n; i++){
    cin >> x;
    wished[x]++;
  }
  for(int i = 0; i < n; i++){
    cin >> x;
    opt[x]++;
  }
  int ans = 0;
  for(auto prefered: wished){
    ans += min(prefered.second, opt[prefered.first]);
  }
  cout << ans << '\n';

}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  while(t--) solve();

}
