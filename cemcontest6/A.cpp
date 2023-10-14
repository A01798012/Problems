#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t, a, b, c; cin >> t;
  while(t--){
    cin >> a >> b >> c;
    int ansa, ansb, ansc;
    if( a > max(b,c) ){
      cout << "0 ";
    }else{
      cout << max(b,c) - a + 1 << " ";
    }

    if( b > max(a,c) ){
      cout << "0 ";
    }else{
      cout <<  max(a,c) - b + 1 << " ";
    }

    if( c > max(a,b) ){
      cout << "0\n";
    }else{
      cout <<  max(a,b) - c + 1 << "\n";
    }
  }

}
