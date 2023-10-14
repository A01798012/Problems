#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n,num; cin >> n;
  vector<int> odd, even;
  for(int i = 0; i < n; i++){
    cin >> num;
    if(num%2 == 0)even.push_back(num);
    else odd.push_back(num);
  }
  if(even.size() == odd.size()){
    cout << 0 << endl;
    exit(0);
  }
  if(even.size()+1 == odd.size() || odd.size()+1 == even.size()){
    cout << 0 << endl;
    exit(0);
  }
  if(even.size() == 0){
    int total = 0;
    if(odd.size() > 1){
      for(int i = 1; i < (int)odd.size();i++){
        total += odd[i];
      }
      cout << total << endl;
    }else cout << total << endl;
    exit(0);

  }else if( odd.size() == 0){
    int total = 0;
    if(even.size() > 1){
      for(int i = 1; i < (int)even.size();i++){
        total += even[i];
      }
      cout << total << endl;
    }else cout << total << endl;
    exit(0);
  }

  sort(even.rbegin(), even.rend());
  sort(odd.rbegin(), odd.rend());
  int total = 0;

  if(even.size() > odd.size()){
    for(int i = odd.size()+1; i < (int)even.size(); i++){
      total+=even[i];
    }
  }else{
    for(int i = even.size()+1; i < (int)odd.size(); i++){
      total+=odd[i];
    }
  }
  cout << total << endl;


}
