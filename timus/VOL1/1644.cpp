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
  int w;
  string s;
  string inc = "Inconsistent";
  vector<int> h, sat;
  bool in = 0;
  fore(i, 0, n) {
    cin >> w >> s;
    if (s[0] == 'h')
      h.pb(w);
    else
      sat.pb(w);
  }
  sort(ALL(h));
  sort(ALL(sat));
  if (sat.size() > 0) {
    int min_ = sat[0];
    for (auto num : h)
      in |= (num >= min_);
    if (in) {
      cout << inc << '\n';
    } else {
      cout << min_ << '\n';
    }
  }else{
    cout << "10\n";
  }
}
