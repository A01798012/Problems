#include <bits/stdc++.h>
#include <cstdio>
#include <future>
#include <queue>
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
int X, Y, M;
int ans = -1;
int f(int cur) {
  if (cur >= M)
    return M;
  if(cur + X > M && cur + Y > M)
    return cur;
  if(cur + X > M && cur + Y <= M)
    return max(ans, f(cur+Y));
  if(cur+ Y > M && cur + X <= M)
    return max(ans, f(cur+X));

  return max(f(cur + X), f(cur + Y));
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);
  cin >> X >> Y >> M;
  fore(i,0, 1001){
    fore(j, 0, 1001){
      if(i*X + j*Y <= M)
        ans = max(ans, i*X + j*Y);
    }
  }
  cout << ans << '\n';
}
