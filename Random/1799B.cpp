#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  int n, ai;
  while(t--){
      int m = 1e9+1;
      int ma = -1;
      set<int> freq;
      cin >> n;
      vector<int> nums(n);
      int im, ima;
      for(int i = 0; i < n; i++){
          cin >> nums[i];
          freq.insert(nums[i]);
      }
      if(freq.size() == 1){cout << "0\n"; continue;}
      if(freq.count(1)){cout << "-1\n"; continue;}
      int cnt = 0;
      vector<string> ops;
      while(m != ma){
        m = 1e9+1;
        ma = -1;
        for(int i = 0; i < n; i++){
          if(min(nums[i], m) != m) im = i;
          if(max(nums[i], ma) != ma) ima = i;
          m = min(nums[i], m);
          ma = max(nums[i], ma);
        }
        //cout << im << "-min: " << m << "|" <<  ima << "-max: " << ma << '\n';
        if(m == ma) break;
        ops.push_back(to_string(ima+1) + " " + to_string(1+im));
        cnt++;
        nums[ima] = (ma + m - 1) / m;
        //jfor(auto i: nums) cout << i << ' ';
        //cout << '\n';
        //cout << "act: " << nums[ima] << '\n';
      }
      cout << cnt << '\n';
      for(auto i: ops) cout << i << '\n';

  }

}
