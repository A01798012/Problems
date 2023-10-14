#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t, n, num; cin >> t;

  while(t--){
    cin >> n;
    unordered_map<int, int> nums(n);
    vector<int> numeros(n);
    for(int i = 0; i < n; i++){
      cin >> num;
      nums[num]++;
      numeros[i] = num;
    }
    int repetidos = n - nums.size();
    int cont = 0;
    for(auto n: numeros){
        if(nums[n] > 1){
          cont++;
          nums[n]--;
          repetidos--;
        }else if(repetidos > 0){
          cont++;
        }
  }

    cout << cont << '\n';
    }

}
