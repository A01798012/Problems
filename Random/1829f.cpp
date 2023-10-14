#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> sz;
map<int, vector<int>> freq;
void dfs(int v){
    vis[v] = 1;
    cout << v << ' ';
    for(auto u: adj[v]){
        if(!vis[u]){
            dfs(u);
        }
    }

}
void solve(){
    int n, m, u, v; cin >> n >> m;
    adj.clear(); vis.clear(); sz.clear();
    adj.resize(n+1); vis.resize(n+1, 0); sz.resize(n+1, 1);
    freq.clear();
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //dfs(1);
    for(int i = 1; i <= n; i++) freq[adj[i].size()].push_back(i);
//    for(auto i: adj) cout << i.size() << ' '; cout << '\n';
    //int leaf = freq[1].back();
 //   for(auto i: freq[1]) cout << i << ' '; cout << '\n';
    int leaf = freq[1][0];
    int x = 1;
    int y = adj[adj[leaf][0]].size()-1;
    for(auto i: adj[adj[leaf][0]]){
        if(adj[i].size() > 1) x = adj[i].size();
    }
    cout << x << ' ' << y << '\n';

}

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) solve();

    return 0;
}
