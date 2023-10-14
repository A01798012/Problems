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
void solve() {
  vector<int> a(3);
  fore(i, 0, 3) cin >> a[i];
  sort(ALL(a));
  int op = 0;
  //debug(a[1]%a[0]);
  //debug(a[2]%a[0]);
  if (a[1] % a[0] == 0) {
    op += a[1] / a[0] - 1;
//    debug(op);
    if (a[2] % a[0] == 0){
      op += a[2] / a[0] - 1;
 //     debug(op);
    }
    else {
      op = 8;
    }
  }else op =8;


  if (op <= 3)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
