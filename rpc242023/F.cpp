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
const int MAXN = 1e6*4;
ll st[MAXN];

void build(vector<ll> &a, int i, int l, int r){
//    cout << i << ' ' << l <<  ' ' <<  r << endl;
    if(l == r) {st[i] = a[l]; return;}
    int mid = (l+r)/2;
    build(a, i*2, l, mid);
    build(a, i*2+1, mid+1, r);

    st[i] = st[i*2] + st[i*2+1];
}

void update(int i, int l, int r, int p, ll v){
    if(l == r) {st[i] = st[i]+v; return;}
    int mid = (l+r)/2;
    if(p<= mid){
        update(2*i, l, mid, p, v);
    }else{
        update(2*i+1, mid+1, r, p, v);
    }
    st[i] = st[i*2] + st[i*2+1];
}

ll query(int i, int l, int r, int x, int y){
    if(l >= x && r <= y) return st[i];
    int mid = (l+r)/2;
    ll ans = 0;
    if(mid >= x){
        ans += query(i*2, l, mid, x, y);
    }
    if(mid+1 <= y){
        ans += query(i*2+1, mid+1, r, x, y);
    }
    return ans;
}



int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n; cin >> n;
  vector<ll> a(n+1);
  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }
  build(a, 1, 1, n);
  int t; cin >> t;
  while(t--){
    char op; cin >> op;
    ll l, r;
    if(op == 'U'){
      cin >> l >> r;
      update(1, 1, n, l, r);
    }else{
      cin >> l >> r;
      cout << query(1, 1, n, l, r) << '\n';
    }
  }

}
