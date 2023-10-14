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
int N,M,K;
vector<vector> adj;
int ans = 0;
int M = 1e9+7;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  cin >> N >> M >> K;
  adj.resize(N+1);
  int f,t;

  fore(i, 0, M){
    cin >> f >> t;
    adj[f].pb(t);
    adj[t].pb(f);
  }
  queue<int> q;
  fore(i, 0, K){
  }




}
