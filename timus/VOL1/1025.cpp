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

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int K;
  cin >> K;
  vector<int> a(K);
  for (auto &i : a)
    cin >> i;
  sort(ALL(a));
  int n = (K / 2) + 1;
  int ans = 0;
  fore(i, 0, n) { ans += (a[i] / 2) + 1; }
  cout << ans << '\n';
}
