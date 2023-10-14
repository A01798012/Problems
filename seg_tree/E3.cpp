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
ll tam;
vector<ll> st;
int left(int x) { return x * 2 + 1; }
int right(int x) { return x * 2 + 2; }
void init(int n) {
  tam = 2;
  while (tam < n)
    tam <<= 1;
  st.resize(tam * 2 + 10, 0LL);
}
 
void update(int i, ll v, int x, int lx, int rx) {
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
  ll s1 = query(l, r, left(x), lx, m);
  ll s2 = query(l, r, right(x), m, rx);
  return s1 + s2;
}
 
int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  n++;
  init(n);
  ll l, r, v, i, op;
  while (m--) {
    cin >> op;
    if (op == 1) {
      cin >> l >> r >> v;
      update(l, v, 0, 0, tam);
      update(r, -1 * v, 0, 0, tam);
    } else {
      cin >> i;
      cout << query(0, i + 1, 0, 0, tam) << '\n';
    }
  }
}
