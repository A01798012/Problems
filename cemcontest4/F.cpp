#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  while(t--){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i = i * 10 + 1){
      for(int j = 1; j <= 9;j++){
//        cout << i*j << '\n';
        if(i*j <= n) ans++;

      }
    }
    cout << ans << '\n';
  }
}
