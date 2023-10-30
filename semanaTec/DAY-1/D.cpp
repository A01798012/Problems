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
  int n;
  cin >> n;
  vector<int> calif(5);
  fore(j, 0, n) {
    fore(i, 0, 6) {
      if (i == 5) {
        int sum = 0;
        int exp = 0;
        for (auto num : calif)
          sum += num;
        int res = sum / 5;
        cin >> exp;
        if (exp != res) {
          cout << j + 1 << ' ' << res << '\n';
        }

      } else {
        cin >> calif[i];
      }
    }
  }
}
