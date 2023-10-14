#include <algorithm>
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
  vector<ii> a(n);
  vector<int> strenght(n);
  int ms = -1, me = -1;
  cin >> a[0].first >> a[0].second;
  ms = max(ms, a[0].first);
  me = max(me, a[0].second);
  ii winner = {-1, -1};
  bool tie = 0;
  fore(i, 1, n) {
    cin >> a[i].first >> a[i].second;
    if (a[i].first >= a[0].first) {
      ms = max(ms, a[i].first);
      me = max(me, a[i].second);

      if (a[i].second >= a[0].second)
        tie = 1;
    }
  }
  ii poly = {a[0].first, a[0].second};
  if ((poly.first == ms || poly.second == me) && !tie) {
    cout << poly.first << '\n';
  } else {
    cout << "-1\n";
  }
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
