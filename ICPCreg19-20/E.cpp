#include <bits/stdc++.h>
using namespace std;

#define maxn 100005
#define debug(x) cout << #x << " = " << x << endl
int sum[maxn];
string s;
int n = 0;
void precompute_sum() {
  for (int i = 0; i < n; i++) {
    if (i > 0)
      sum[i] = sum[i - 1];
    if (s[i] == 'P')
      sum[i]++;
  }
}

int psum(int a, int b) {
  if (a == 0)
    return sum[b];
  if (a <= b) {
    return sum[b] - sum[a - 1];
  }
  return sum[n - 1] - sum[a - 1] + sum[b];
}

int main() {
  cin >> s;
  n = s.size();
  precompute_sum();
  int max_ = 0;
  cin >> max_;
  int i = 0, j = 0;
  int cnt = 0;
  int e = 0;
  int total = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'E') {
      if (max_ == 1) {
        total++;
        continue;
      }
      total += max_;
      total += psum((i - (max_ - 1) + n) % n, (i - 1 + n) % n);
    }
  }
  cout << total << endl;
  return 0;
}
