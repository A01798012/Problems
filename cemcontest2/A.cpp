#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
//  cout << char('a'+1) << endl;
  string s;
  int n; cin >> n;
  while(n--){
    cin >> s;
    sort(s.begin(), s.end());
    char prev = s[0];
    bool flag = 1;
   // cout << s << endl;


    if(s.size()==1){
      cout << "Yes\n";
      continue;
    }
    for(int i = 1;  i < (int)s.size(); i++){
      //cout << char(prev+1) << " " << s[i] << endl;
      if(char(prev+1) != s[i]){
        flag = false;
        break;
      }
      prev = s[i];
    }
    if(flag) cout << "Yes\n";
    else cout << "No\n";
  }



}
