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
  ll seg, pref, suf, sum;
};
Data NEUTRAL = {0, 0, 0, 0};
int tam;
vector<Data> st;
int left(int x) { return x * 2 + 1; }
int right(int x) { return x * 2 + 2; }
Data single(int v) {
  if (v > 0) {
    return {v, v, v, v};
  } else {
    return {0, 0, 0, v};
  }
}
Data combine(Data a, Data b) {
  return {max(a.suf + b.pref, max(a.seg, b.seg)), max(a.pref, a.sum + b.pref),
          max(b.suf, b.sum + a.suf), a.sum + b.sum};
}
void init(int n) {
  tam = 1;
  while (tam < n)
    tam *= 2;
  st.resize(2 * tam);
}
void build(vector<int> &a, int x, int lx, int rx) {
  if (rx - lx == 1) {
    if (lx < a.size()) {
      st[x] = single(a[lx]);
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
    st[x] = single(v);
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
    return NEUTRAL;
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
  cout << query(0, n, 0, 0, tam).seg << '\n';
  while (m--) {
    cin >> i >> v;
    update(i, v, 0, 0, tam);
    cout << query(0, n, 0, 0, tam).seg << '\n';
  }
}
