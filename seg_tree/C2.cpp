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
struct Data {
  ll cant;
  int min;
};
int tam;
vector<Data> st;
int left(int x) { return x * 2 + 1; }
int right(int x) { return x * 2 + 2; }
Data combine(Data l, Data r) {
  if (l.min < r.min) {
    return Data{l.cant, l.min};
  } else if (r.min < l.min) {
    return Data{r.cant, r.min};
  } else {
    return Data{l.cant + r.cant, l.min};
  }
}
void init(int n) {
  tam = 1;
  while (tam < n)
    tam <<= 1;
  st.assign(tam * 2, Data{0, (ll)1e9 + 1});
}
void build(vector<int> &a, int x, int lx, int rx) {
  if (rx - lx == 1) {
    if (lx < a.size()) {
      st[x].min = a[lx];
      st[x].cant = 1;
    }
    return;
  }
  int m = (lx + rx) / 2;
  build(a, left(x), lx, m);
  build(a, right(x), m, rx);
  st[x] = combine(st[left(x)], st[right(x)]);
}
void update(int i, int v, int x, int lx, int rx) {
  if (rx - lx == 1) {
    st[x].min = v;
    st[x].cant = 1;
    return;
  }
  int m = (lx + rx) / 2;
  if (i < m)
    update(i, v, left(x), lx, m);
  else
    update(i, v, right(x), m, rx);

  st[x] = combine(st[left(x)], st[right(x)]);
}

Data query(int l, int r, int x, int lx, int rx) {
  if (lx >= r || l >= rx)
    return Data{0, (ll)1e9 + 1};
  if (lx >= l && rx <= r)
    return st[x];
  int m = (lx + rx) / 2;
  return combine(query(l, r, left(x), lx, m), query(l, r, right(x), m, rx));
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  init(n);
  for (auto &i : a)
    cin >> i;
  build(a, 0, 0, tam);
  int op, i, v, l, r;
  while (m--) {
    cin >> op;
    if (op == 1) {
      cin >> i >> v;
      update(i, v, 0, 0, tam);
    } else {
      cin >> l >> r;
      auto ans = query(l, r, 0, 0, tam);
      cout << ans.min << ' ' << ans.cant << '\n';
    }
  }
}
