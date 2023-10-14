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
vector<int> stones;
int n;
int ans = 1e9;
int f(int i, int pile1, int pile2) {
  if (i == n)
    return abs(pile1 - pile2);

  int a = f(i + 1, pile1 + stones[i], pile2);
  int b = f(i + 1, pile1, pile2 + stones[i]);

  return min(a, b);
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> n;
  stones.resize(n);
  for (auto &i : stones)
    cin >> i;

  cout << f(0, 0, 0) << '\n';
}
