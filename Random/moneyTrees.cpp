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
ll n, k;
vector<ll> a, h;
int len[200010], prefSum[200010];
bool f(int length) {
  fore(i, 0, n - length + 1) {
    if (len[i] >= length) {
      int sum = prefSum[i + length] - prefSum[i];
      if (sum <= k) {
        return true;
      }
    }
  }
  return false;
}

void solve() {
  cin >> n >> k;
  a.resize(n);
  h.resize(n);
  prefSum[0] = 0;
  fore(i, 0, n) {
    cin >> a[i];
    prefSum[i + 1] = prefSum[i] + a[i];
  }
  fore(i, 0, n) { cin >> h[i]; }
  len[n - 1] = 1;
  for (int i = n - 2; i >= 0; i--) {
    if (h[i] % h[i + 1] != 0) {
      len[i] = 1;
    } else {
      len[i] = len[i + 1] + 1;
    }
  }

  int l = 0, r = (2 * 100000) + 5, m;
  while (r > l + 1) {
    m = (l + r) / 2;
    bool dec = f(m);
    // debug(dec);
    if (dec) {
      l = m;
    } else {
      r = m;
    }
  }
  cout << l << '\n';
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int T;
  cin >> T;
  while (T--)
    solve();
}
