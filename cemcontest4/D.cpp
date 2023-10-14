#include <bits/stdc++.h>
using namespace std;
long long lcm(long long x, long long y){
  return  x*y/__gcd(x,y);
}
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  long long l,r;
  while(t--){
    cin >> l >> r;
    long long kk = lcm(l,r);
    if(kk >= l && kk <= r){
      cout << l << " " << r << '\n';
    }else{
      long long x = l; long long y = l*2;
      long long kk = lcm(x,y);
      if(kk >= l && kk <= r){
        cout << x << " " << y << '\n';
      }else cout << "-1 -1\n";

    }
  }

}
