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

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int N;cin >> N;
  vector<ll> s(N);
  vector<ll> dist(N-1, 0);
  vector<ll> r1(N, 0), r2(N, 0);
  for(auto &i: dist) cin >> i;
  for(auto &i: s) cin >> i;

  r1[0] = s[0];
  ll tot = 0;
  fore(i, 1, N){
    tot += dist[i-1] + s[i-1];
    r1[i] = tot;
  }
  //for(auto i: r1) cout << i << ' ';
  //cout << '\n';

  r2[N-1] = s[N-1];
  tot = 0;
  for(int i = N-2; i >= 0; i--){
    tot += dist[i] + s[i+1];
    r2[i] = tot;
  }
  //for(auto i: r2) cout << i << ' ';
  //cout << '\n';
  ll ans = 0;
  fore(i, 0, N){
    if(abs(r1[i] - r2[i]) <= s[i]){
      ans+= s[i] - abs(r1[i] - r2[i]);
    }
  }
  cout << ans << '\n';




}
