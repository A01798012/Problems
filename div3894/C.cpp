#include <algorithm>
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

void solve() {
  int n;
  cin >> n;
  vector<int> a(n+1);
  fore(i, 1, n+1) cin >> a[i];
  if(a[1] != n){
    cout << "NO\n"; return;
  }
  vector<int> b;
  for(int i = n; i >= 1; i--){
    while(b.size() < a[i]){
      b.push_back(i);
    }
  }
//  for(auto num: b) cout << num << ' '; cout << '\n';
  fore(i, 1, n+1){
    if(a[i] != b[i-1]){
      cout << "NO\n"; return;
    }
  }
  cout << "YES\n";
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
