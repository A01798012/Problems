#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n; cin >> n;
  cout << (n / 2) << '\n';
  if(n%2 == 0){
    for(int i = 0; i < n/2; i++){
      cout << 2 << " ";
    }
    cout << '\n';
  }else{
    for(int i = 0; i < (n/2)-1; i++){
      cout << 2 << " ";
    }
    cout << 3 << '\n';

  }

}
