#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t, n; cin >> t;
  while(t--){
    cin >> n;
    int act = n;
  string ans = "";
    if(n < 10) {cout << n << '\n'; continue;}
    for(int i = 9; i >= 1; i--){
      if (act == 0) break;
      if(act - i >= 0){
        act -= i;
        ans.push_back('0'+i);
      }
    }
    for(int i = ans.size()-1; i >= 0; i--){
      cout  << ans[i];
    }
    cout << endl;
  }

}
