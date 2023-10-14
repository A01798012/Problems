#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  int n;
  vector<int> nums;
  vector<int> res;
  while(t--){
    nums.clear();
    res.clear();


    cin >> n;
    int sb = n-1;

    nums.resize(sb);
    for(auto &i: nums) cin >> i;
    res.pb(nums[0]);
    for(int i = 1; i < sb; i++){
      if(nums[i-1] < nums[i]) res.pb(nums[i-1]);
      else res.pb(nums[i]);
    }
    res.pb(nums[sb-1]);
    for(auto i: res) cout << i << " ";
    cout << '\n';

  }

    return 0;
}
