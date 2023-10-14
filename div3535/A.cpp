#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t;  cin >> t;
  pair<int, int> f, s;
  while(t--){
    cin >> f.first >> f.second >> s.first >> s.second;

    cout << f.first << " ";
    for(int i = s.first; i <= s.second; i++){
      if(i != f.first){
        cout << i << '\n';
        break;
      }
    }

  }

}
