#include <bits/stdc++.h>
#include <queue>
#include <vector>
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
struct Data {
  ll a;
  ll b;
  bool operator<(Data const other) const {
    if (a > other.a)
      return 1;
    if (a < other.a)
      return 0;

    return b < other.b;
  }
  bool operator>(Data const other) { return a < other.a; }
};

bool compare(Data self, Data other) { return self.b < other.b; }
vector<Data> used;
ll cur = 0;
ll xMax = 0;

int f(int x) {
  ll r = cur;
  ll ans = 0;
  while (r < used.size()) {
    if (used[r].a <= x) {
      ans++;
      r++;
    }
    if (used[r].a > x){
      break;
    }
  }
//  debug(r);
  cur = r;
  return ans;
}

void solve() {
  used.clear();
  cur = 0;
  int n;
  cin >> n;
  Data read;
  priority_queue<Data> q;
  fore(i, 0, n) {
    cin >> read.a >> read.b;
    q.push(read);
  }
  ll x = 0;
  ll ans = 0;
  xMax = 0;

  while (!q.empty()) {
    auto elem = q.top();
    q.pop();
    if (elem.a > xMax) {
      ans += elem.b;
      x++;
      used.pb(elem);
      xMax = max(x, xMax);
      x -= f(x);
    }
  }

  cout << ans << '\n';
 // cout << "-------\n";
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
