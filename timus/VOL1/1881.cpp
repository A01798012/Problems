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
  int h, w, n;
  int pages = 0;
  string s;
  cin >> h >> w >> n;
  int curLen = 0;
  int curLine = 0;
  pages++;
  fore(i, 0, n) {
    cin >> s;
    if (curLen + s.size() > w) {
      curLen = 0;
      curLine++;
    }
    if (curLine == h) {
      pages++;
      curLine = 0;
    }
    curLen += s.size();
    curLen++;
  }
  cout << pages << '\n';
}
