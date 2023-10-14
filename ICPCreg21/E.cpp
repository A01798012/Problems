#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i, a, b) for (int i = a, ThxDem = b; i < ThxDem; ++i)
#define pb push_back
#define ALL(s) s.begin(), s.end()
#define SZ(s) int(s.size())
#define maxn 100000
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
struct Data {
  int id, h;
  bool operator<(Data &r) { return h < r.h; }
};
struct Node {
  ll ans, lazy;
};
int N, D;
int h[maxn];
Data dd[maxn];
Node t[4 * maxn];

void propagate(int n) {
  if (n < D) {
    t[n * 2].lazy += t[n].lazy;
    t[n * 2 + 1].lazy += t[n].lazy;
  }
  t[n].ans += t[n].lazy;
  t[n].lazy = 0;
}

void updateRange(int n, int d, int lo, int hi, int v) {
  propagate(n);
  if (lo > hi)
    return;
  if (!lo && hi == d - 1) {
    t[n].lazy += v;
    propagate(n);
    return;
  }
  d >>= 1;
  updateRange(n * 2, d, lo, min(hi, d - 1), v);
  updateRange(n * 2 + 1, d, max(0, lo - d), hi - d, v);
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> N;
  memset(t, 0, sizeof(t));
  D = 1 << (int)ceil(log2(N));
  int x;
  fore(i, 0, N) {
    cin >> h[i];
    dd[i] = Data{i, h[i]};
  }
  sort(dd, dd + N);
  set<int> busy;
  busy.insert(-2 * N);
  busy.insert(4 * N);
  for (int i = N - 1; i >= 0; i--) {
    auto it = busy.insert(dd[i].id).first;
    auto it2 = ++it;
    it--;
    auto itp = --it;
    it++;
    int lo = *itp + *it >> 1;
    int hi = *it2 + *it + 1 >> 1;
    updateRange(1, D, max(0, lo + 1), min(hi - 1, N - 1), 1);
    if (lo + 1 <= hi - 1)
      updateRange(1, D, *it, *it, -1);
  }

  fore(i, 1, 2 * D) propagate(i);
  fore(i, D, D + N) cout << t[i].ans << ' ';
  cout << '\n';
}
