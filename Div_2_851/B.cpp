#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  string n;
  while(t--){
    cin >> n;
    int x = 0;
    int y = 0;
    int major = 0;
    int cnt = 0;
    int powe = 0;
    for(int i = n.size()-1; i >=0 ; i--){
      powe = pow(10,cnt);
      int act = n[i] - '0';
      int value = act / 2;
      if(act % 2 == 0){
        x+=value*powe;
        y+=(value*powe);
      }else{
        if(major == 0){
         x += (value*powe);
         y += ((value+1)*powe);
         major = 1;
        }else{
          x += (powe*(value+1));
          y += (value*powe);
          major = 0;
        }
      }
      cnt++;
    }
    cout << x;
    cout << " ";
    cout << y;
    cout << "\n";

  }

}
