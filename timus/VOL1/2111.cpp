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

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  ll n; cin >> n;
  vector<ll> a(n);
  ll cargo = 0;
  fore(i, 0, n){
    cin >> a[i];
    cargo+=a[i];
  }
  sort(a.rbegin(), a.rend());
  ll ans = 0;
  fore(i, 0, n){
    ans += cargo*a[i];
    cargo-=a[i];
    ans += cargo*a[i];
  }
  cout << ans << '\n';

}
