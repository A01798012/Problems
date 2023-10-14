#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  string s;

  while(t--){
    cin >> s;
    int cnt = 0;
    int i0 = -1;
    int i5 = -1;
    for(int i = s.size()-1; i >=0; i--){
      if(s[i] == '0'){
        i0 = i;
        break;
      }
    }
    for(int i = s.size()-1; i >=0; i--){
      if(s[i] == '5'){
        i5 = i;
        break;
      }
    }
    int s0 = -1;
    int s5 = -1;
    if(i0 != -1){
      for(int i = i0-1; i >=0; i--){
        if(s[i] == '0' || s[i] == '5'){
          s0 = i;
          break;
        }
      }
    }

    if(i5 != -1){
      for(int i = i5-1; i >=0; i--){
        if(s[i] == '2' || s[i] == '7'){
          s5 = i;
          break;
        }
      }
    }
    int ans;

    if(s0 != -1 && s5 != -1){
      ans = min(s.size() - s0 -2, s.size() - s5 - 2);
    }else if(s0 != -1){
      ans = s.size() - s0 - 2;
    }else{
      ans = s.size() - s5 - 2;
    }

    // cout <<  " " << s0 << endl;
    // cout <<  " " << s5 << endl;
    // cout << "-------------------------------\n";
    cout << ans << '\n';
  }

}
