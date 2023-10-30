#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
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

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  int tam = 0;
  char init = s[0];
  string yes = "Yes";
  int i = -1;
  fore(j, 0, 3) {
    if (yes[j] == init) {
      i = j;
      break;
    }
  }
  if (i == -1) {
    cout << "NO\n";
    return;
  }
  fore(j, 0, n) {
    if (yes[i % 3] != s[j]) {
      cout << "NO\n";
      return;
    }
    i++;
  }
  cout << "YES\n";
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
