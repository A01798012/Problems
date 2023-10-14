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
vector<int> rice;
unordered_map<int, int> v;
int p;

int dp(int n){
  int m = 1e9;
  if(v.count(n)) return v[n];
  if(n <= 0) return min(m, abs(n));
  fore(i, 0, p){
    m = min(m, dp(n - rice[i]));
//    v[n-rice[i]] = m;
  }
  v[n] = m;
  return m;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int k; cin >> k >> p;
  rice.resize(p);
  for(auto &i: rice) cin >> i;
  int num;
  while(k--){
    cin >> num;
    int ans = dp(num);
    cout << ans << '\n';
  }
}
