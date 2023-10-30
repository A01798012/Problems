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
  int n; cin >> n;
  vector<pair<string, string>> a(n);
  string c, p;
  fore(i, 0, n){
    cin >> a[i].first >> a[i].snd;
  }
  vector<string> ans;
  string lead = "null";
  fore(i, 0, n){
    fore(j, 0, n){
      if(a[j].snd == lead){
        ans.pb(a[j].fst);
        lead = a[j].fst;
        break;
      }
    }
  }
  for(auto str: ans) cout << str << ' '; cout << '\n';
  

}
