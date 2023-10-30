#include <bits/stdc++.h>
#include <cstdio>
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

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  freopen("cowsignal.in", "r", stdin);
  freopen("cowsignal.out", "w", stdout);
  int N, M, K;
  cin >> N >> M >> K;
  vector<string> s(N);
  fore(i, 0, N) { cin >> s[i]; }
  string cur;
  vector<string> ans;
  fore(i, 0, N) {
    cur = "";
    fore(j, 0, M) {
      fore(k, 0, K) { cur += s[i][j]; }
    }
    fore(k, 0, K) { ans.push_back(cur); }
  }
  for (auto st : ans)
    cout << st << '\n';
}
