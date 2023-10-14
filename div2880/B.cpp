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
  ll n, k ,g; cin >> n >> k >> g;

  ll stolen = min((g - 1) / 2 * n, k * g);
  ll rest = (k * g - stolen);

  if(rest > 0){
    stolen -= (g - 1) / 2;
    ll last = (((g - 1) / 2) + rest) % g;

    if(last * 2 < g){
      stolen += last;
    }else{
      stolen -= g - last;
    }
  }
  cout << stolen << '\n';


}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  while(t--) solve();

}
