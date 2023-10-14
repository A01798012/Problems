#include <bits/stdc++.h>
using namespace std;
vector<int> costs;
int ans = 0;
int one = 0;
vector<int> dpa;
int dp(int i){
  int two = 1e9;
  if(i == 0){
    return 0;
  }
  if(dpa[i]!= -1) return dpa[i];

  one = dp(i-1) + abs(costs[i-1] - costs[i]);

  if( i > 1 ){
    two = dp(i-2) + abs(costs[i-2] - costs[i]);
  }
  return dpa[i] = (min(one, two));
}
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n;cin >> n;
  costs.resize(n);
  dpa.resize(n,-1);
  for(int i = 0; i < n; i++) cin >> costs[i];
  cout << dp(n-1) << endl;
  for(auto i: dpa) cout << i << " " << endl;
  cout << endl;

}
