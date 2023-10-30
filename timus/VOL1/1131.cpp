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
#define debug(x) cout << #x << " = " << x << '\n'

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, k; cin >> n >>k;
  int ans = 0;
  int used = 1;
  n--;
  while(used < k && n > 0){
    n-=min(used,k);
    used += min(used, k);
    ans++;
  }
  n = (n>0? n:0);
  ans += n/k;
  if(n%k != 0){
    ans++;
  }
  cout << ans << '\n';
}
