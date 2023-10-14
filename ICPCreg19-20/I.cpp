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
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;
int N, L;
int p[MAXN], sz[MAXN];
int find(int a) { return p[a] = p[a] == a ? a : find(p[a]); }
void join(int a, int b) {
  a = find(a);
  b = find(b);
  if (a != b) {
    if (sz[a] < sz[b])
      swap(a, b);
    p[b] = a;
    sz[a] += sz[b];
  }
}
unordered_set<int> ans;
vector<vector<int>> adj;
vector<int> items;
long long unop = 0;
void dfs(int i) {
  unop += items[i];
  if (find(1) != find(i))
    join(1, i);
  for (int node : adj[i]) {
    dfs(node);
  }
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> N >> L;
  fore(i, 0, L + 10) {
    p[i] = i;
    sz[i] = 1;
  }
  adj.resize(L + 2);
  items.resize(L + 2, 0);
  int k, x;
  fore(i, 1, L + 1) {
    cin >> k;
    fore(j, 0, k) {
      cin >> x;
      if (x > L) {
        if (find(i) != find(x))
          join(i, x);
        items[i]++;
      } else {
        adj[i].push_back(x);
      }
    }
  }
  dfs(1);
  ll otherAns = 0;
  for (int i = L + 1; i <= N; i++) {
    cout << p[i] << ' ';
    if (find(1) == find(i))
      otherAns++;
  }
  cout << '\n';

  cout << unop << ' ' << otherAns << '\n';
}
