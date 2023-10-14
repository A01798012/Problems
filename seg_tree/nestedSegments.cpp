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
int N;
int tam;
vector<int> st;
vector<bool> visited;
int left(int x) { return x * 2 + 1; }
int right(int x) { return x * 2 + 2; }
void init(int n) {
  tam = 1;
  while (tam < n)
    tam <<= 1;
  st.assign(tam * 2, 0);
}
void update(int i, int x, int lx, int rx) {
  if (rx - lx == 1) {
    st[x] = 1;
    return;
  }
  int m = (lx + rx) / 2;
  if (i < m)
    update(i, left(x), lx, m);
  else
    update(i, right(x), m, rx);
  st[x] = st[left(x)] + st[right(x)];
}
int query(int l, int r, int x, int lx, int rx) {
  if (l >= rx || lx >= r)
    return 0;
  if (lx >= l && rx <= r)
    return st[x];
  int m = (lx + rx) / 2;
  return query(l, r, left(x), lx, m) + query(l, r, right(x), m, rx);
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> N;
  vector<int> a(2 * N);
  init(2 * N);
  for (auto &i : a) {
    cin >> i;
    i--;
  }
  visited.resize(N, 0);

  fore(i, 0, 2 * N) {
    if (!visited[a[i]]) {
      update(a[i], 0, 0, tam);
    } else {
    }
  }
}
