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
  string s;
  cin >> s;
  int cur = s.size() - 1;
  bool f = s[0] == '9';
  if (s[cur] == '9') {
    while (cur >= 0 && s[cur] == '9') {
      s[cur] = '0';
      cur--;
      if (cur < 0)
        break;
    }
    //debug(f);
    if (f) {
      s = "1" + s;
    } else {
      s[cur]++;
    }

  } else {
    s[cur]++;
  }
  cout << s << '\n';
}
