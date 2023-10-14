#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n, m, act;
  cin >> n;
  int prev = 0;


  for(int i = 0; i < n; i++){
    cin >> act;
    if(act){ // queremos odd
      prev = prev % 2 ==0 ? prev+1: prev+2;
    }else{
      prev = prev % 2 == 0? prev+2: prev+1;
    }
    cout << prev << " ";
  }


  cin >> m;
  for(int i = 0; i < m; i++){
    cin >> act;
    if(act){ //queremos  odd
      prev = prev % 2 == 0? prev+1: prev+2;
    }else{
      prev = prev % 2 == 0? prev+2: prev+1;
    }
    cout << prev << " ";
  }
  cout << endl;

  cout << prev << '\n';


  }
