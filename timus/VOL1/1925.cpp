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
  int b, g, n, k;
  cin >> n >> k;
  int expected = 0, real = 0;
  fore(i, 0, n) {
    cin >> b >> g;
    expected += b - 2;
    real += g;
  }
  int delta = expected - real;
  int exp = k - 2;
  if (delta < 0) {
    if (abs(delta) <= exp) {
      cout << exp - abs(delta) << '\n';
    } else {
      cout << "Big Bang!\n";
    }
  } else {
    cout << delta + exp << '\n';
  }
}
