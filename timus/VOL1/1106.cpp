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
vector<int> adj[MAXN];

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int v,n; cin >> n;
  fore(i, 1, n+1){
    while(1){
      cin >> v;
      if(v == 0) break;
      adj[i].pb(v);
    }
  }
}
