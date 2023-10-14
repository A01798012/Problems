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
vector<ll> st;
int tam;
int left(int x) { return x * 2 + 1; }
int right(int x) { return x * 2 + 2; }
void init(int n) {
  tam = 1;
  while (tam < n)
    tam <<= 1;
  st.resize(2 * tam);
}
void build(vector<ll> &a, int x, int lx, int rx) {
  if (rx - lx == 1) {
    if (lx < a.size()) {
      st[x] = a[lx];
    }
    return;
  }
  int m = (lx + rx) / 2;
  build(a, left(x), lx, m);
  build(a, right(x), m, rx);
  st[x] = st[left(x)] + st[right(x)];
}
void update(int i, int v, int x, int lx, int rx){
  if(rx - lx == 1){
    st[x] += v;
    return;
  }
  int m = (lx+rx)/2;
  if(i < m){
    update(i, v, left(x), lx, m);
  }else{
    update(i, v, right(x), m, rx);
  }
  st[x] = st[left(x)] + st[right(x)];
}
void update(int i, int v){
  update(i, v, 0, 0, tam);
}
ll query(int l, int r, int x, int lx, int rx){
  if(l >= rx || lx >= r) return 0;
  if(lx >= l && rx <= r) return st[x];
  int m = (lx+rx)/2;
  ll s1 = query(l, r, left(x), lx, m);
  ll s2 = query(l, r, right(x), m, rx);
  return s1 + s2;
}
ll query(int l, int r){
  return query(l, r, 0, 0, tam);
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int nog,n; cin >> nog;
  vector<ll> a(nog);
  vector<int> indexes;
  n = nog+1;
  init(n);
  fore(i, 0, nog){
    cin >>a[i];
    update(i, a[i]);
    update(i+1, -a[i]);
  } 
  //sort(a.rbegin(), a.rend());
  int cur = 0;
  int d = nog-1;
  ll val = query(0, cur+1);
  for(int i = 0; i < nog+3; i++){
    for(int i = 0; i < nog; i++){
      val = query(0, i+1);
      if(val >= d){
        cur = i;
        debug(val);
        break;
      }
    }
    if(val >= d){
      update(0, 1);
      update(cur, -1);

      update(cur, -d);
      update(cur+1, d);

      update(cur+1, 1);
      update(tam, -1);
    }
  }
  bool rec = false;
  vector<int> ans;
  ll nval;
  fore(i, 0, nog){
    nval = query(0, i+1);
    ans.push_back(val);
    if(val >= d) rec = 1;
  }
  if(rec)
    cout << "Recurrent\n";
  else{
    for(auto i: ans) cout << i << ' '; cout << '\n';
  }


}
