#include <bits/stdc++.h>
#include <string>
#define fst first
#define snd second
#define fore(i, a, b) for (int i = a, ThxDem = b; i < ThxDem; ++i)
#define pb push_back
#define ALL(s) s.begin(), s.end()
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
#define debug(x) cout << #x << " = " << x << '\n'


void solve() {
  ll n, k; cin >> n >> k;
  ll used = 1; 
  n--;
  ll ans = 0;
  ll canUse;
  while(used < k && n > 0){
    canUse = min(used, k);
    n-=canUse;
    used+=canUse;
    ans++;
  }
  if(n < 0) n = 0;
  ans += (n/k); 
  if(n % k != 0){
    ans++;
  }
  cout << ans << '\n';
  
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t; cin >> t;
  while(t--) solve();
}
