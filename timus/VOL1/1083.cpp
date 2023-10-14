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
  int n, k;
  string idk;
  cin >> n >> idk;
  k = idk.size();
  long long ans = 1;
  if (n % k != 0) {
    for (int i = n; i != (n % k); i -= k) {
      ans *= i;
    }

  } else {
    for (int i = n; i >= k; i -= k) {
      ans *= i;
    }
  }
  cout << (n <= k ? n : ans) << '\n';

  return 0;
}
