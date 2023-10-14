#include <bits/stdc++.h>
using namespace std;
struct segtree {
  int size;
  vector<int> operations;
  void init(int n) {
    size = 1;
    while (size < n)
      size *= 2;
    operations.assign(2 * size, 0LL);
  }
  void add(int l, int r, int v, int x, int lx, int rx) {
    if (lx >= r || l >= rx)
      return;
    if (lx >= l && rx <= r) {
      operations[x] = max(operations[x],v);
      return;
    }
    int m = (lx + rx) / 2;
    add(l, r, v, 2 * x + 1, lx, m);
    add(l, r, v, 2 * x + 2, m, rx);
  }
  void add(int l, int r, int v) { add(l, r, v, 0, 0, size); }
  long long get(int i, int x, int lx, int rx) {
    if (rx - lx == 1) {
      return operations[x];
    }
    int m = (lx + rx) / 2;
    int res;
    if (i < m) {
      res = get(i, 2 * x + 1, lx, m);
    } else {
      res = get(i, 2 * x + 2, m, rx);
    }
    return max(res , operations[x]);
  }
  long long get(int i) { return get(i, 0, 0, size); }

  void build(vector<int> &a, int x, int lx, int rx) {
    if (rx - lx == 1) {
      if (lx < (int)a.size()) {
        operations[x] = a[lx];
      }
      return;
    }
    int m = (lx + rx) / 2;
    build(a, 2 * x + 1, lx, m);
    build(a, 2 * x + 2, m, rx);
    operations[x] = operations[2 * x + 1] + operations[2 * x + 2];
  }
  void build(vector<int> &a) { build(a, 0, 0, size); }

};
int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  segtree st;
  st.init(n);
  while (m--) {
    int op;
    cin >> op;
    if (op == 1) {
      int l, r, v;
      cin >> l >> r >> v;
      st.add(l,r,v);
    } else {
      int i;
      cin >> i;
      cout << st.get(i) << '\n';
    }
  }
}
