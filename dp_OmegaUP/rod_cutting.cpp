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
vector<int> p;
vector<int> dp;
int n;
int f(int l) {
  if (l == 0)
    return 0;

  if (dp[l] != -1)
    return dp[l];
  int ans;
  if (l == 0)
    ans = 0;
  else {
    ans = -1;
    for (int i = 1; i <= l; i++) {
      ans = max(ans, p[i] + f(l - i));
    }
  }

  return dp[l] = ans;
}
int b_u_f(int n) {

  vector<int> r(n);
  r[0] = 0;
  for (int j = 1; j <= n; j++) {
    int ans = -1;
    for (int i = 1; i <= j; i++) {
      ans = max(ans, p[i] + r[j - i]);
    }
    r[j] = ans;
  }
  return r[n];
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int a;
  cin >> n;
  cin >> a;
  p.resize(n + 1);
  dp.resize(n + 1, -1);
  for (int i = 1; i <= n; i++)
    cin >> p[i];
  cout << b_u_f(a) << '\n';
}
