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
ll f(ll n){
  ll sum = 0;
  fore(i, 0, n+1){
    sum+= __builtin_popcount(2*i);
  }
  return sum;
}
ll tam(ll n){
  ll tam = 0;
  while(n > 0){
    n >>= 1;
    tam++;
  }
  return tam;
}
ll getSum(ll n){
  ll steps = n/2;
  steps*=2;
  ll bit = tam(n);
  ll ans = 0;
  ll curBit = 2;
  ll max_ = steps;
  ll cant;
  fore(i, 1, bit+1){
    cant = (max_ / 2) - ((curBit-1) / 2);
//    debug(curBit);
 //   debug(max_);
  //  debug(cant);
    if(cant <= curBit/2){
      ans+=cant;
    }else{
      ans+=cant/2;
    }
    if(cant&1)ans++;
    curBit<<=1;
  }
  return ans;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  ll n; cin >> n;
  /*
  fore(i, 0, n+1){
    cout << f(i) << ' ';
  }cout << '\n';
  exit(0);
  */
  ll ans = getSum(n);
  cout << ans << '\n';
}
