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
#define MOD 998244353
ll fact(ll n) {
  ll ans = 1;
  fore(i, 1, n + 1) { ans = (ans * i) % MOD; }

  return ans;
}
ll P(ll n, ll r) { return (fact(n) / fact(n - r)); }
ll C(ll n, ll r) { return (fact(n) / ((fact(n - r) * fact(r)) % MOD)); }
void solve() {
  string s;
  cin >> s;
  int op = 0;
  vector<bool> candidate(s.size());
  fore(i, 0, s.size() - 1) {
    if (s[i] == s[i + 1]) {
      candidate[i] = 1;
      candidate[i + 1] = 1;
      op++;
    }
  }
  ll can = 0;
  fore(i, 0, s.size()) can += candidate[i];
  cout << op << ' ' << P(can, 2) << '\n';
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
