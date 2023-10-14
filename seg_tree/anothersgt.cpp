#include <bits/stdc++.h>
using namespace std;
int const MAXN = 1e6;
int st[MAXN * 4];
vector<int> a;

void build(int v, int tl, int tr) {
  if (tl == tr) {
    st[v] = a[tl];
  } else {
    int mid = (tl + tr) / 2;
    build(2 * v, tl, mid);
    build(2 * v + 1, mid + 1, tr);
    st[v] = (st[v * 2] + st[v * 2 + 1]);
  }
}
void update(int v, int tl, int tr, int pos, int x) {
  if (tl == tr) {
    st[v] = x;
  } else {
    int mid = (tl + tr) / 2;
    if (pos <= mid) {
      update(v * 2, tl, mid, pos, x);
    } else {
      update(v * 2 + 1, mid + 1, tr, pos, x);
    }
    st[v] = max(st[v * 2], st[v * 2 + 1]);
  }
}

int query(int v, int tl, int tr, int l, int r) {
  if (tl >= l && tr <= r)
    return st[v];
  int mid = (tl + tr) / 2;
  int al = -1, ar = -1;
  if (mid >= l) {
    al = max(al, query(v * 2, tl, mid, l, r));
  }
  if (mid + 1 <= r) {
    ar = max(ar, query(2 * v + 1, mid + 1, tr, l, r));
  }
  return max(al, ar);
}

int main() {
  int n, q, x, y, op;
  cin >> n;
  a.resize(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  build(1, 1, n);
  cin >> q;
  while (q--) {
    cin >> op;
    if (op == 2) {
      cin >> x >> y;
      cout << query(1, 1, n, x, y) << endl;
    } else {
      cin >> x >> y;
      update(1, 1, n, x, y);
    }
  }

  return 0;
}
