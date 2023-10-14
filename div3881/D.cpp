#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ThxDem=b;i<ThxDem;++i)
#define pb push_back
#define ALL(s) s.begin(),s.end()
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
vector<vector<int>> adj;
vector<ll> leaves;
void get_leaves(int v, int p){
 // cout << v << ' ';
  if(adj[v].size() == 1 && v != 1) leaves[v] = 1;
  else{
    for(auto node: adj[v]){
      if(node != p){
        get_leaves(node, v);
        leaves[v] += leaves[node];
      }
    }
  }
}
void solve(){
  int n, q; cin >> n;
  adj.clear();
  leaves.clear();
  adj.resize(n + 1);
  leaves.resize(n + 1);
  int u, v;
  for(int i = 0; i < n-1; i++){
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  get_leaves(1, -1);
  cin >> q;
  int x, y;
  for(int i = 0; i < q; i++){
    cin >> x >> y;
    cout << leaves[x] * leaves[y] << '\n';
  }

}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  while(t--) solve();

}
