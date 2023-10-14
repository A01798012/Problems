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
vector<int> st;
vector<int> ans;
int tam;
int left(int x) { return x * 2 + 1; }
int right(int x) { return x * 2 + 2; }
void init(int n) {
  tam = 1;
  while (tam < n)
    tam <<= 1;
  st.assign(tam * 2, 0);
}
void update(int i, int v, int x, int lx, int rx) {
  if (rx - lx == 1) {
    st[x] = v;
    return;
  }
  int m = (lx + rx) / 2;
  if (i < m)
    update(i, v, left(x), lx, m);
  else
    update(i, v, right(x), m, rx);

  st[x] = st[left(x)] + st[right(x)];
}
int query(int l, int r, int x, int lx, int rx) {
  if (lx >= r || l >= rx)
    return 0;
  if (lx >= l && rx <= r)
    return st[x];
  int m = (lx + rx) / 2;
  return query(l, r, left(x), lx, m) + query(l, r, right(x), m, rx);
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  init(n);
  vector<int> a(n);
  for (auto &i : a) {
    cin >> i;
    i--;
  }

  for (int i = 0; i < n; i++) {
    cout << query(a[i], tam, 0, 0, tam) << ' ';
    update(a[i], 1, 0, 0, tam);
  }
  cout << '\n';
}
