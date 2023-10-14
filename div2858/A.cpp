#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t,a,b,c,d; cin >> t;
  while(t--){
    cin >> a >> b >> c >> d;
    float m = 1;
    if(c-a != 0)
      m = (d-b) / (c-a);
    if(b  > d || (m <= 0 && a < c)){
      cout << -1 << '\n';
    }else{
      int temp = abs(b-d);
      a+=temp;
      if(a == c){
        cout << temp << '\n';
      }else{
        cout << temp + abs(a-c) << '\n';
      }
    }
  }

}
