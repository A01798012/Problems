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
  ll n; cin >> n;
  ll cur = 1;
  ll ans = 1;
  while(n > 1){
    ans += n;
    n >>=1;
  }
  cout << ans << '\n';
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  while(t--) solve();

}
