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
int neut;
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int min_ = neut;
  fore(i, 0, n) {
    cin >> a[i];
  }
  int ans = 1;
  int cur = a[0];
  for(int i = 0; i < n; i++){
    cur&=a[i];
    if(cur == 0){
      if(i == n-1) break;
      ans++;
      cur = a[i+1];
    }
  }
  if(cur != 0) ans--;
  ans = max(ans, 1); 
  cout << ans << '\n';
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  neut = (int)pow(2, 29) - 1;
  //  cout <<  neut << '\n';
  //  exit(0);
  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}
