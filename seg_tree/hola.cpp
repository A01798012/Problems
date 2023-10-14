#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 * 4;
int st[MAXN];

void build(vector<int> &a, int i, int l, int r) {
  //    cout << i << ' ' << l <<  ' ' <<  r << endl;
  if (l == r) {
    st[i] = a[l];
    return;
  }
  int mid = (l + r) / 2;
  build(a, i * 2, l, mid);
  build(a, i * 2 + 1, mid + 1, r);

  st[i] = st[i * 2] + st[i * 2 + 1];
}

void update(int i, int l, int r, int p, int v) {
  if (l == r) {
    st[i] = v;
    return;
  }
  int mid = (l + r) / 2;
  if (p <= mid) {
    update(2 * i, l, mid, p, v);
  } else {
    update(2 * i + 1, mid + 1, r, p, v);
  }
  st[i] = st[i * 2] + st[i * 2 + 1];
}

int query(int i, int l, int r, int x, int y) {
  if (l >= x && r <= y)
    return st[i];
  int mid = (l + r) / 2;
  int ans = 0;
  if (mid >= x) {
    ans += query(i * 2, l, mid, x, y);
  }
  if (mid + 1 <= y) {
    ans += query(i * 2 + 1, mid + 1, r, x, y);
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  //    for(auto i: a) cout << i << ' ';
  build(a, 1, 1, n);
  int q;
  cin >> q;
  while (q--) {
    cin >> o;
    if (o != 1) {
      cin >> x >> y;
      y--;
      cout << query(1, 1, n, x, y) << '\n';
    } else {
      cin >> x >> y;
      update(1, 1, n, x, y);
    }
  }
}
