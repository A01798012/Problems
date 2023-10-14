#include <bits/stdc++.h>

using namespace std;


int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n; cin >> n;
  vector<int> nums(n);
  int num;
  unordered_map<int,int> freq;
  int index, g = -1;

  for(int i = 0; i < n; i++){
    cin >> num;
    nums[i] = num;
    freq[num]++;
    if(freq[num] > g){
      g = freq[num];
      index = i;
    }
  }
  int target = nums[index];
//  cout << "t: " << target << endl;
  int operations = n-g;
  if(operations == 0){
    cout << 0 << endl;
  }else{
    cout << operations << endl;
    for(int i = index; i >= 0;i--){
      if(nums[i]!=target){
        if(nums[i] > target){
          cout << "2 " << i+1 << " " << i+2 << endl;
        }else{
          cout << "1 " << i+1 << " " << i+2 << endl;
        }
      }
    }
    for(int i = index; i < n;i++){
      //cout << "kk\n";
      if(nums[i]!=target){
        if(nums[i] > target){
          cout << "2 " << i+1 << " " << i << endl;
        }else{
          cout << "1 " << i+1 << " " << i << endl;
        }
      }
    }

  }




}
