#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n, num; cin >> n;
  int y = -1;
  map<int, int> numbers;
  for(int i = 0; i < n; i++){
    cin >> num;
    y = max(y, num);
    numbers[num]++;
  }
  numbers[y]--;
  if(!numbers[y]) numbers.erase(y);

  map<int, int> nums = numbers;

  for(auto i: numbers){
    if(nums.count(i.first)){
      if(y % i.first == 0 && y != i.first){
        nums[i.first]--;
        if(!nums[i.first])nums.erase(i.first);
      }
    }
  }

  cout << (*(--nums.end())).first << " " << y << '\n';

}
