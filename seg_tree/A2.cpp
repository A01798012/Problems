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

ll st[MAXN * 4];
int left(int x) { return x * 2 + 1; }
int right(int x) { return x * 2 + 2; }
void build(vector<int> &a, int x, int lx, int rx) {
  if (rx - lx == 1) {
    if (lx < a.size()) {
      st[x] = a[lx];
    }
    return;
  }
  int m = (lx + rx) / 2;
  build(a, left(x), lx, m);
  build(a, right(x), m, rx);
  st[x] = st[left(x)] + st[right(x)];
}

void update(int i, int v, int x, int lx, int rx) {
  if (rx - lx == 1) {
    st[x] += v;
    return;
  }
  int m = (lx + rx) / 2;
  if (i < m)
    update(i, v, left(x), lx, m);
  else
    update(i, v, right(x), m, rx);

  st[x] = st[left(x)] + st[right(x)];
}
ll query(int l, int r, int x, int lx, int rx) {
  if (lx >= r || l >= rx)
    return 0;
  if (lx >= l && rx <= r)
    return st[x];
  int m = (lx + rx) / 2;
  return query(l, r, left(x), lx, m) + query(l, r, right(x), m, rx);
}

int op, i, v, l, r;
int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (auto &i : a)
    cin >> i;
  build(a, 0, 0, n);
  while (m--) {
    cin >> op;
    if (op == 1) {
      cin >> i >> v;
      update(i, v, 0, 0, n);
    } else {
      cin >> l >> r;
      cout << query(l, r, 0, 0, n) << '\n';
    }
  }
}
