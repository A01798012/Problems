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
#define debug(x) cout << #x << " = " << x << '\n'
int tam;
vector<int> st;
int left(int x) { return 2 * x + 1; }
int right(int x) { return 2 * x + 2; }

void init(int n) {
  tam = 1;
  while (tam < n)
    tam <<= 1;
  st.resize(2 * tam);
}
void build(vector<int> &a, int x, int lx, int rx) {
  if (rx - lx == 1) {
    if (lx < a.size()) {
      st[x] = a[lx];
    }
    return;
  }
  int md = (lx + rx) / 2;
  build(a, left(x), lx, md);
  build(a, right(x), md, rx);
  st[x] = st[left(x)] + st[right(x)];
}
void update(int i, int v, int x, int lx, int rx) {
  if (rx - lx == 1) {
    st[lx] = v;
    return;
  }
  int md = (lx + rx) / 2;
  if (i < md) {
    update(i, v, left(x), lx, md);
  } else {
    update(i, v, right(x), md, rx);
  }
  st[x] = st[left(x)] + st[right(x)];
}
ll query(int l, int r, int x, int lx, int rx) {
  if (lx >= r || l >= rx) {
    return 0;
  }
  if (lx >= l && rx <= r) {
    return st[x];
  }
  int md = (lx + rx) / 2;

  return query(l, r, left(x), lx, md) + query(l, r, right(x), md, rx);
}

ll query(int l, int r) { return query(l, r, 0, 0, tam); }

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int> a(n + 1);
  init(n + 1);
  fore(i, 1, n + 1) { cin >> a[i]; }
  build(a, 0, 0, tam);
  int q;
  cin >> q;
  int l, r;
  while (q--) {
    cin >> l >> r;
    cout << query(l, r + 1) << '\n';
  }
}
