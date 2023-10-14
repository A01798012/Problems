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
string karl = "[:=[first]", other = "[second]=:]";

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int m, n;
  cin >> m >> n;
  cout << (((m * n) - 1) % 2 == 0 ? other : karl) << '\n';
}
