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
#define MAXN 100010
#define debug(x) cout << #x << " = " << x << '\n'
vector<int> adj[MAXN];
void dfs(int v, int p = -1){
  cout << v << ' ';
  for(auto n: adj[v]){
    if(n != p){
      dfs(n, v);
    }
  }
}
void bfs(){
  queue<int> q;
  q.push(0);
  while(!q.empty()){
    int v = q.front(); q.pop();
    cout << v << ' ';
    for(auto n: adj[v]){
      q.push(n);
    }
  }
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n; cin >> n;
  int v, h, to;
  fore(i, 0, n){
    cin >> v >> h; 
    fore(i, 0, h){
      cin >> to;
      adj[v].pb(to);
    }
  }
  bfs(); cout << '\n';
  dfs(0); cout << '\n';
}
