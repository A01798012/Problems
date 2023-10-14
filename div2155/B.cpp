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
void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  int mina = 1e9, minb = 1e9;
  fore(i, 0, n) {
    cin >> a[i];
    mina = min(mina, a[i]);
  }
  fore(i, 0, n) {
    cin >> b[i];
    minb = min(minb, b[i]);
  }
  ll ansa = 0, ansb = 0;
  fore(i, 0, n) {
    ansa += mina + b[i];
    ansb += minb + a[i];
  }
  cout << min(ansa, ansb) << '\n';
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
