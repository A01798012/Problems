#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n,k,t; cin >> t;
  while(t--){
    cin >> n >> k;
    int positive = k / 2;
    if(k % 2 != 0){
      cout << "1 -10 ";
      for(int i = 0; i < positive; i++){
        cout << "1 ";
      }
      for(int i = 0; i < n -positive; i++){
        cout << "-10 ";
      }
    }else{
      for(int i = 0; i < positive;i++){
        cout << "1 ";
      }
      for(int i = 0; i < n - positive; i++){
        cout << "-10 ";
      }
      cout << endl;

    }


  }

}
