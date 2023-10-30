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
  string T;
  int N;
  cin >> T >> N;
  unordered_map<string, int> map = {{"Mon", 0}, {"Tue", 1}, {"Wed", 2},
                                    {"Thu", 3}, {"Fri", 4}, {"Sat", 5},
                                    {"Sun", 6}};
  vector<int> days(N);
  int curDay = map[T];
  vector<int> ans(N);
  fore(i, 0, N) {
    cin >> days[i];
    if (30 - days[i] >= 0) {
      int rest = curDay + 30 - days[i];
      if (rest % 7 == 5)
        rest++;
      if (rest % 7 == 6)
        rest++;
      ans[i] = rest - curDay;
    } else {
      int day = abs(30 - days[i]) % 30;
      if(day == 0) day = 30; // ????????
      int rest = curDay + 30 - day;
      if (rest % 7 == 5)
        rest++;
      if (rest % 7 == 6)
        rest++;
      ans[i] = rest - curDay;
    }
  }
  sort(ALL(ans));
  cout << ans[0] << '\n';
}
