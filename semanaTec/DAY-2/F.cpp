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
ll mod = 987654321;
ll factorial[1000001];
void fact(){
  factorial[0] = 1;
  fore(i, 1, 1000001){
    factorial[i] = (factorial[i-1] * i) % mod;
  }
}

ll C(ll n, ll r){
  return factorial[n]/((factorial[r]%mod) * (factorial[n - r]%mod));
}
ll triang(ll n){
  return ((n*(n+1))%mod) / 2;
}
ll pow(ll n){
  ll ans = 1;
  fore(i, 1, n+1){
    ans*=2;
    ans%=mod;
  }
  return ans;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  ll n; cin >> n;
  ll ans = pow(n);
  ans/=2;
  cout << ans%mod << '\n';
}
