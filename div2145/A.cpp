#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  string s;
  set<char> bulbs;
  while(t--){
    cin >> s;
    bulbs.clear();
    for(auto i: s) bulbs.insert(i);
    if(bulbs.size() == 4) cout << "4\n";
    else if(bulbs.size() == 1) cout << "-1\n";
    else if(bulbs.size() == 3) cout << "4\n";
    else{
      map<char, int> mapa;
      for(auto i: s) mapa[i]++;
      if(mapa[s[0]] == 2){
        cout << "4\n";
      }else{
        cout << "6\n";

      }
    }




  }

}
