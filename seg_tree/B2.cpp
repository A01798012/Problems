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

vector<ll> st;
int tam;
int left(int x) { return x * 2 + 1; }
int right(int x) { return x * 2 + 2; }
void init(int n) {
  tam = 1;
  while (tam < n) {
    tam *= 2;
  }
  st.assign(2 * tam, (ll)1e9 + 1);
}
ll combine(int l, int r) { return min(l, r); }
void build(vector<int> &a, int x, int lx, int rx) {
  if (rx - lx == 1) {
    if (lx < (int)a.size()) {
      st[x] = a[lx];
    }
    return;
  }
  int m = (lx + rx) / 2;
  build(a, 2 * x + 1, lx, m);
  build(a, 2 * x + 2, m, rx);
  st[x] = min(st[2 * x + 1], st[2 * x + 2]);
}
void update(int i, int v, int x, int lx, int rx) {
  if (rx - lx == 1) {
    st[x] = v;
    return;
  }
  int m = (lx + rx) / 2;
  if (i < m) {
    update(i, v, 2 * x + 1, lx, m);
  } else {
    update(i, v, 2 * x + 2, m, rx);
  }
  st[x] = min(st[2 * x + 1], st[2 * x + 2]);
}

ll query(int l, int r, int x, int lx, int rx) {
  if (lx >= r || l >= rx)
    return 1e9 + 1;
  if (lx >= l && rx <= r)
    return st[x];
  int m = (lx + rx) / 2;
  return min(query(l, r, 2 * x + 1, lx, m), query(l, r, 2 * x + 2, m, rx));
}
int op, i, v, l, r;
int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  init(n);
  vector<int> a(n);
  for (auto &i : a)
    cin >> i;
  build(a, 0, 0, tam);
  while (m--) {
    cin >> op;
    if (op == 1) {
      cin >> i >> v;
      update(i, v, 0, 0, tam);
    } else {
      cin >> l >> r;
      cout << query(l, r, 0, 0, tam) << '\n';
    }
  }
}
