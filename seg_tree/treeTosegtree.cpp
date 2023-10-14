#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6*4;
int st[MAXN];
int t= 0;
int start[MAXN], end_[MAXN];
void dfs(vector<vector<int>> &adj, int n, int p){
    t++;
    start[n] = t;
    for(auto node: adj[n]){
        if(node == p) continue;
        dfs(adj, node, n);
    }
    t++;
    end_[n] = t;

}

void update(int i, int l, int r, int p, int v){
    if(l == r) {st[i] += v; return;}
    int mid = (l+r)/2;
    if(p<= mid){
        update(2*i, l, mid, p, v);
    }else{
        update(2*i+1, mid+1, r, p, v);
    }
    st[i] = st[i*2] + st[i*2+1];
}

int query(int i, int l, int r, int x, int y){
    if(l >= x && r <= y) return st[i];
    int mid = (l+r)/2;
    int ans = 0;
    if(mid >= x){
        ans += query(i*2, l, mid, x, y);
    }
    if(mid+1 <= y){
        ans += query(i*2+1, mid+1, r, x, y);
    }
    return ans;
}


int main(){
    int n; cin >> n;
    vector<vector<int>> adj(n+1);
    int u,v,e; cin >> e;
    for(int i = 0; i < e; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(adj, 1, -1);
    int q; cin >> q;
    while(q--){
        int o,a,b; cin >> o;
        if(o == 1){
            cin >>a;
           cout <<  query(1, 1, 2*n, 1, start[a]) << '\n';
        }else{
            cin >> a >> b;
            update(1, 1, 2*n, start[a] , b);
            update(1, 1, 2*n, end_[a] , -b);
        }
    }


}
