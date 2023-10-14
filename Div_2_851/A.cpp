#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t, num, n; cin >> t;
  while(t--){
    cin >> n;
    vector<int> nums(n);

    int freq = 0;
    for(int i = 0; i < n; i++){
      cin >> num;
      nums[i] = num;
      if(num == 2)
        freq++;
    }

    if(freq % 2 == 0 && freq != 0){
      int ans = 0;
      int target = freq/2;
      for(int i = 0; i < n; i++){
        if(nums[i] == 2) ans++;
        if(ans == target) {
          cout << i+1 << "\n";
          break;
        }
      }

    }else{
      if(freq == 0) cout << "1\n";
      else cout << "-1\n";
    }

  }

}
