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
ll B(ll n){
  return __builtin_popcount(n);
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  ll n; cin >> n;
  ll ans = 0;
  for(int i = 1; i <= n/2; i++){
    ans+= B(i*2);
  }
  cout << ans << '\n';

}
