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

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  ll ans = 0;
  if (n <= 0) {
    for (int i = 1; i >= n; i--) {
      ans += i;
    }
  } else {
    fore(i, 1, n + 1) ans += i;
  }
  cout << ans << '\n';
}
