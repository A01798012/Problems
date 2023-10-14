#include <bits/stdc++.h>
using namespace std;
int N, n;
vector<int> tracks;
vector<int> sub;
vector<int> ans;
int mini = 0;

void subsets(int i){
  if(i == n){
    int res = 0;
    for(int i = 0; i < sub.size(); i++){
      cout << sub[i] << " ";
      res = sub[i] + res;
    }
    cout << '\n';
    if( res <= N  &&  res > mini){
      mini = res;
      ans = sub;
    }
    return;
  }else{
    sub.push_back(tracks[i]);
    subsets(i+1);
    sub.pop_back();
    subsets(i+1);
  }
}
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  while(cin >> N){
    tracks.clear();
    cin >> n;
    tracks.resize(n);
    for(int i = 0; i < n; i++) cin >> tracks[i];
    subsets(0);
    for(auto i: ans) cout << i << " ";
    cout << "sum:" << mini << '\n';
    mini = 0;

  }



}
