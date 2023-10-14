#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  int n, num;
  while(t--){
    cin >> n;

    set<long long> nums;
    for(int i = 0; i < n; i++){
      cin >> num;
      nums.insert(num);
    }
    long long idk = *prev(nums.end()) - *prev(prev(nums.end()));
    long long t = *prev(nums.end());
    bool f = 0;
    for(auto i: nums){
      if()
    }


  }

}
