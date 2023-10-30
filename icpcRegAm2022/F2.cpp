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
  unordered_map<string, int> invertedMap = {{"Mon", 0}, {"Tue", 6}, {"Wed", 5},
                                            {"Thu", 4}, {"Fri", 3}, {"Sat", 2},
                                            {"Sun", 1}};

  vector<string> inverted = {"Mon", "Sun", "Sat", "Fri", "Thu", "Wed", "Tue"};
  vector<ll> days(N);
  int curDay;
  curDay = invertedMap[T];
  ll ans = 1e9 + 10;
  fore(i, 0, N) {
    cin >> days[i];
    if (0 && 30 - days[i] >= 0) {
      curDay = map[T];
      ll rest = curDay + 30 - days[i];
      if (rest % 7 == 5)
        rest++;
      if (rest % 7 == 6)
        rest++;
      ans = min(ans, rest - curDay);
    } else {
      ll day = map[inverted[(curDay + days[i]) % 7]];
      ll needed = 0;
      ll target = day + days[i];
      if(day <= target) needed+=30;

      while (needed > 0 || day < target) {
        day = day + 30;
        needed-=30;
        if(day < target) needed+=30;
        if ((day) % 7 == 5) {
          day++;
        }
        if ((day % 7) == 6) {
          day++;
        }
      }
      ans = min(ans, day - target);
    }
  }
  cout << ans << '\n';
}
