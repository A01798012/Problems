#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  long long l,r,k;

  while(t--){
    cin >> l >> r >> k;
    l = l%2 == 0? l+1: l;
    r = r%2 == 0? r-1: r;
    long long odds = ((r-l)/2)+1;
    if(l == r && r == 1) cout << "NO\n";
    else if(l == r) cout << "YES\n";
    else if(k >= odds) cout << "YES\n";
    else cout << "NO\n";

  }
}
