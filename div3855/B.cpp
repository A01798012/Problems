#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t,n,k;cin>>t;
  string s;

  while(t--){
    cin >> n >> k;
    cin >> s;
    vector<pair<int,int>> values(26);
    for(auto i: s){
      int letter = toupper(i)-'A';
      if((int)i > 90){
        values[letter].first++;
      }else{
        values[letter].second++;
      }
    }
    int cur = 0;
    for(auto &x: values){
      int mini= min(x.first, x.second);
      cur += mini;
      x.first-=mini;
      x.second-=mini;
      int dif = 0;
      if(x.first > 1 || x.second > 1 && k > 0){
        if(x.first >1)dif = x.first/2;
        else dif = x.second/2;
        if( dif <= k ){
          k-=(dif);
          cur+=(dif);
        }else{
          cur+=k;
          k-=k;
        }
      }
    }
    cout << cur << '\n';
  }

}
