#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  long long n,m,a; cin >> n >> m >> a;
  if(a >= n && a >= m){
    cout << 1 << '\n';
  }else if(n == 1 || m == 1){
    if(n != 1) cout << ceil(double(n)/double(a)) << '\n';
    else cout << ceil(double(m)/double(a)) << '\n';
  }else if (a == 1){
    cout << n*m << '\n';
  }else cout << (long long)ceil(double(n)/double(a)) * (long long)ceil(double(m)/double(a)) << '\n';





}
