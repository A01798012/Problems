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
int N, X;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> N >> X;
  vector<int> a(N);
  for (auto &i : a)
    cin >> i;

  int max_ = 0;
  int temp;
  fore(i, 0, N) {
    temp = 0;
    fore(j, i, N - 1) {
      // cout << a[j + 1] - a[j] << ' ';
      if (a[j + 1] - a[j] > X)
        break;
      else
        temp++;
    }
    // cout << '\n';
    max_ = max(max_, temp);
  }

  cout << max_ + 1 << '\n';
}
