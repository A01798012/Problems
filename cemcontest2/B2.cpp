#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n; cin >> n;
  long long num, total;
  vector<long long> odd, even;

  for(int i = 0; i < n; i++){
    cin >> num;
    if(num % 2 == 0) even.push_back(num);
    else odd.push_back(num);
  }
  sort(even.rbegin(), even.rend());
  sort(odd.rbegin(), odd.rend());
  int tam = min(even.size(), odd.size())+1;
  total = 0;
  if(odd.size() > even.size()){
    if(tam < (int)odd.size()){
      for(int i = tam; i < (int)odd.size();i++){
        total+=odd[i];
      }
    }
  }else{
    if(tam < (int)even.size()){
      for(int i = tam; i < (int)even.size(); i++){
        total+=even[i];
      }
    }
  }

  cout << total << '\n';

}
