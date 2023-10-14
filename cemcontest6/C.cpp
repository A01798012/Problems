#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t, pos; cin >> t;
  int n, k;
  while(t--){
    cin >> n >> k;
    vector<int> mice;
    for(int i = 0; i < k; i++){
      cin >> pos;
      mice.push_back(n - pos);
    }
    sort(mice.rbegin(), mice.rend());
//    for(auto i: mice) cout << i << " ";
 //   cout << endl;
  //  exit(0);

    int cnt = 0;
    int cat = n;

    while(mice.size() > 0){
      if(mice.back() < cat){
        cat -= mice.back();
        mice.pop_back();
        cnt++;
      }else break;
    }
    cout << cnt << '\n';



  }



}
