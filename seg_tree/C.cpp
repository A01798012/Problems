#include <bits/stdc++.h>
using namespace std;
struct segtree{
    int size;
    vector<pair<long long, int>> mins;
    void init(int n){
        size = 1;
        while( size < n ) size *=2;
        mins.assign(2 * size, make_pair((long long)1e9 + 1, 0));
    }
    void build(vector<pair<long long, int>>& a, int x, int lx, int rx){
        if(rx-lx == 1){
            if(lx < (int)a.size()){
                mins[x] = a[lx];
            }
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);

        if(mins[2 * x + 1].first < mins[2 * x + 2].first){
          mins[x].first = mins[2 * x + 1].first;
          mins[x].second = mins[2 * x + 1].second;
        }else if(mins[2 * x + 1].first > mins[2 * x + 2].first) {
          mins[x].first = mins[2 * x + 2].first;
          mins[x].second = mins[2 * x + 2].second;
        }else{
          mins[x].first = mins[2 * x + 2].first;
          mins[x].second = mins[2 * x + 2].second + mins[2 * x + 1].second;
        }

    }
    void build(vector<pair<long long, int>> &a){
        build(a, 0, 0, size);
    }
    void set(int i, pair<long long, int> v, int x, int lx, int rx){
        if(rx - lx == 1){
            mins[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if(i < m){
            set(i, v, 2 * x + 1, lx, m);
        }else{
            set(i, v, 2 * x + 2, m, rx);
        }
        //mins[x] = min(mins[2 * x +1], mins[2 * x + 2]);
        if(mins[2 * x + 1].first < mins[2 * x + 2].first){
          mins[x].first = mins[2 * x + 1].first;
          mins[x].second = mins[2 * x + 1].second;
        }else if(mins[2 * x + 1].first > mins[2 * x + 2].first) {
          mins[x].first = mins[2 * x + 2].first;
          mins[x].second = mins[2 * x + 2].second;
        }else{
          mins[x].first = mins[2 * x + 2].first;
          mins[x].second = mins[2 * x + 2].second + mins[2 * x + 1].second;
        }
    }
    void set(int i, long long v){
      auto x = make_pair(v, 1);
        set(i,x, 0, 0, size);
    }

    pair<long long, int> mini(int l, int r, int x, int lx, int rx){
      if(lx >= r || l >= rx) return make_pair((long long)1e9+1, 1);
      if(lx >= l && rx <= r) return mins[x];
      int m = (lx + rx) / 2;
      auto izq = mini(l, r, 2 * x + 1, lx, m);
      auto der = mini(l, r, 2 * x + 2, m, rx);
      if(izq.first < der.first){
        return izq;
      }else if( der.first < izq.first ){
        return der;
      }else{
        izq.second += der.second;
        return izq;
      }
      /*
      if(mins[2 * x + 1].first < mins[2 * x + 2].first){
        return make_pair(mins[2 * x + 1].first, mins[2 * x + 1].second);
      }else if(mins[2 * x + 1].first > mins[2 * x + 2].first) {
        return make_pair(mins[2 * x + 2].first, mins[2 * x + 2].second);
      }else{
        return make_pair(mins[2 * x + 2].first, mins[2 * x + 2].second + mins[2 * x + 1].second);
      }
      */

    }
    pair<long long, int> mini(int l, int r){
      return mini(l, r, 0, 0, size);
    }
  void print(){
    for(auto i: mins) cout << "n: " << i.first << " #" << i.second << '\n';
  }

};

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n, m; cin >> n >> m;
  segtree st;
  st.init(n);
  vector<pair<long long, int>> a(n, make_pair(0, 1));
  for(int i = 0; i < n; i++) cin >> a[i].first;
  st.build(a);
//  st.print();

  while(m--){
      int op;cin >> op;
      if(op == 1){
          int i,v;
          cin >> i >>v;
          st.set(i,v);
      }else{
          int l, r;
          cin >> l >> r;
          auto kk = st.mini(l,r);
          cout << kk.first << " " << kk.second << '\n';
      }
  }


}
