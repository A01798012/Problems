#include <bits/stdc++.h>
using namespace std;
vector<int> gold;
vector<int> dp;
int n, b;
int f(int i, int amount) {
  int ans = 1e6;
  if (amount <= 0) {
    return abs(amount);
  } else if (i < n) {
    ans = min(ans, f(i + 1, amount - gold[i]));
    ans = min(ans, f(i + 1, amount));
  }
  return ans;
}
int f2(int amount, int x) {
  int ans = 1e6;
  if (amount <= 0)
    return abs(amount);

  if (dp[amount] != -1)
    return dp[amount];

  if (x < n) {
    for (int i = x; i < n; i++) {
      ans = min(ans, f2(amount - gold[i], i + 1));
    }
    dp[amount] = ans;
  }
  return dp[amount] = ans;
}

int f3(int amount) {
  vector<int> dp(1e6);
  dp[0] = 0;
  for (int i = 1; i <= amount; i++) {
    int q = 1e6;
    for (int j = 0; j < n; j++) {
      q = min(q, abs(i - gold[j]));
    }
    dp[i] = q;
  }
  return dp[amount];
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> n >> b;
  gold.resize(n);
  // dp.resize(b + 1, -1);
  for (int i = 0; i < n; i++) {
    cin >> gold[i];
  }
  //  cout << f(0, b) << '\n';
  //  cout << f2(b, 0) << '\n';
  cout << f3(b) << '\n';
}
