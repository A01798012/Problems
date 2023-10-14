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
vector<int> group;
vector<int> ans;
unordered_map<int, int> freq;
void dfs(int v, int p){
  freq[group[v]]++;
  for(auto u: adj[v]){
    if(p != u){
      dfs(u, v);
    }
  }
  ans[v] = freq.size();
  freq[group[v]]--;
  if(freq[group[v]] < 1) freq.erase(group[v]);
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int p,g,n; cin >> n; group.resize(n+1); adj.resize(n+1);
  ans.resize(n+1);
  int root;
  for(int i = 1; i <= n; i++){
    cin >> p;
    adj[i].push_back(p);
    adj[p].push_back(i);
    if(p == 0) root = i;

  }
  for(int i = 1; i <= n; i++){
    cin >> g;
    group[i]= g;
  }
  dfs(root, -1);
  for(int i = 1; i <= n; i++) cout << ans[i] << ' '; cout << '\n';


}
