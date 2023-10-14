#include <bits/stdc++.h>
#include <ios>
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
int tam;
vector<int> st;
int left(int x) { return x * 2 + 1; }
int right(int x) { return x * 2 + 2; }
void init(int n) {
  tam = 1;
  while (tam < n)
    tam <<= 1;
  st.resize(tam * 2);
}
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

void invert(int i, int x, int lx, int rx) {
  if (rx - lx == 1) {
    st[x] = 0;
    return;
  }
  int m = (lx + rx) / 2;
  if (i < m) {
    invert(i, x * 2 + 1, lx, m);
  } else {
    invert(i, x * 2 + 2, m, rx);
  }
  st[x] = st[x * 2 + 1] + st[x * 2 + 2];
}
void invert(int i) { invert(i, 0, 0, tam); }

int query(int l, int r, int x, int lx, int rx) {
  if (lx >= r || l >= rx) {
    return 0;
  }
  if (lx >= l && rx <= r) {
    return st[lx];
  }
  int m = (lx + rx) / 2;
  return query(l, r, left(x), lx, m) + query(l, r, right(x), m, rx);
}
int kth(int k, int x, int lx, int rx) {
  if (rx - lx == 1) {
    return lx;
  }
  int m = (lx + rx) / 2;
  int ones = st[right(x)];
  if (k < ones) {
    return kth(k, right(x), m, rx);
  } else {
    return kth(k - ones, left(x), lx, m);
  }
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int> a(n), ans(n), b(n, 1);
  init(n);
  build(b, 0, 0, tam);
  for (auto &i : a)
    cin >> i;
  for (int i = n - 1; i >= 0; i--) {
    ans[i] = kth(a[i], 0, 0, tam);
    invert(ans[i]);
  }
  for (auto i : ans)
    cout << i + 1 << ' ';
  cout << '\n';
}
