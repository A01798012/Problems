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
vector<ll> st;
int tam;
void init(int n) {
  tam = 1;
  while (tam < n)
    tam <<= 1;
  st.resize(2 * tam);
}
ll combine(ll a, ll b) { return (a > b ? a : b); }
void build(vector<ll> &a, int x, int lx, int rx) {
  if (rx - lx == 1) {
    if (lx < a.size()) {
      st[x] = a[lx];
    }
    return;
  }
  int m = (lx + rx) / 2;
  build(a, x * 2 + 1, lx, m);
  build(a, x * 2 + 2, m, rx);
  st[x] = combine(st[x * 2 + 1], st[x * 2 + 2]);
}

void update(int i, int v, int x, int lx, int rx) {
  if (rx - lx == 1) {
    st[x] = v;
    return;
  }
  int m = (lx + rx) / 2;
  if (i < m) {
    update(i, v, x * 2 + 1, lx, m);
  } else {
    update(i, v, x * 2 + 2, m, rx);
  }
  st[x] = combine(st[x * 2 + 1], st[x * 2 + 2]);
}
int find(int v, int x, int lx, int rx) {
  if (rx - lx == 1) {
    return lx;
  }
  int m = (lx + rx) / 2;
  int maxLeft = st[x * 2 + 1];
  if (maxLeft >= v) {
    return find(v, x * 2 + 1, lx, m);
  } else {
    return find(v, x * 2 + 2, m, rx);
  }
}
int find(int v) { return find(v, 0, 0, tam); }
int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m, op, i, v, x;
  cin >> n >> m;
  vector<ll> a(n);
  init(n);
  for (auto &i : a)
    cin >> i;
  build(a, 0, 0, tam);
  while (m--) {
    cin >> op;
    if (op == 1) {
      cin >> i >> v;
      update(i, v, 0, 0, tam);
      a[i] = v;
    } else {
      cin >> x;
      auto ans = find(x);
      // cout << "requested: " << x << " | value found: " << ans << ", " <<
      // a[ans]
      //      << '\n';
      if (ans < n) {
        cout << (a[ans] >= x ? ans : -1) << '\n';
      } else {
        cout << "-1\n";
      }
    }
  }
}
