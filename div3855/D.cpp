#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
    unordered_set<string> ans;
  //exit(0);
  int t, n; cin >> t;
  string s;
  while(t--){
    ans.clear();
    cin >> n >> s;
    for(int i = 0; i < n-1; i++){
//      cout << s.substr(0, i)+s.substr(i+2, n-1-i) << '\n';
      ans.insert(s.substr(0, i)+s.substr(i+2, n-1-i));
    }
    cout << ans.size() << endl;

    //aaa..aaaaaaa
    //0123456789
    //

  }

}
