#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n, k; cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++) cin >> nums[i];
  sort(nums.begin(), nums.end());
  cin >> k;
  //for(auto i: nums) cout << i << " ";
  //cout << endl;
  int num1, num2;
  while(k--){
      cin  >> num1 >> num2;
      int l = -1;
      int r = n;
      int m;
      while( r > l+1 ){
          int m = (l + r) / 2;
          if(nums[m] < num1) l = m;
          else r = m;
      }
      int l1 = -1;
      int r1 = n;
      while( r1 > l1+1 ){
          int m = (l1 + r1) / 2;
          if(nums[m] > num2) r1 = m;
          else l1 = m;
      }
//      cout << r << " " << l1 << '\n';
      if(r == n || l1 == -1) cout << "0\n";
      else if(r == l1){
         cout << "1\n";
      }else if(l1+1 == r && nums[l1] != num1 && nums[r] != num2){
         cout << "0\n";
      }else{
          cout << abs(r-l1)+1 << '\n';
      }
  }
}
