#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n,m,act = 0;
  cin >> n;
  vector<int> arr_n(n);
  for(int i = 0; i < n; i++) cin >>arr_n[i];

  cin >> m;
  vector<int> arr_m(m);
  for(int i = 0; i < m; i++) cin >>arr_m[i];
  int i = 1, j = 1;
  unordered_set<int> used;

  if(n != 0){
    if(arr_n[0]){
      arr_n[0] = 1;used.insert(1);
    }else{
      arr_n[0] = 2; used.insert(2);
    }
  }

  if(m != 0){
    if(arr_m[0]){
      if(!used.count(1)){
        arr_m[0] = 1;
        used.insert(1);
      }else {
        arr_m[0] = 3;
        used.insert(3);
      }
    }else{
      if(!used.count(2)){
        arr_m[0] = 2;
        used.insert(2);
      }
      else {
        arr_m[0] = 4;
        used.insert(4);
      }
    }
  }
  while( i < n && j < m ){
    if(arr_n[i] && arr_m[j]){
      act = arr_n[i-1];
      while(1){
        act = act% 2 == 0? act+1 : act+2;
        if(used.count(act)) continue;
        else break;
      }
      arr_n[i] = act;
      used.insert(act);

      act += 2;
      arr_m[i] = act;
      used.insert(act);
    }else if(!arr_n[i] && !arr_m[j]){
      act = arr_n[i-1];
      while(1){
        act = act% 2 == 0? act+2 : act+1;
        if(used.count(act)) continue;
        else break;
      }
      arr_n[i] = act;
      used.insert(act);

      act += 2;
      arr_m[i] = act;
      used.insert(act);
    }else{
      if(arr_n[i] == 1 && arr_m[i] == 0){
        act = arr_n[i-1];
        while(1){
          act = act% 2 == 0? act+1 : act+2;
          if(used.count(act)) continue;
          else break;
        }
        arr_n[i] = act;
        used.insert(act);

        act += 1;
        arr_m[i] = act;
        used.insert(act);
      }else{
        act = arr_n[i-1];
        while(1){
          act = act% 2 == 0? act+2 : act+1;
          if(used.count(act)) continue;
          else break;
        }
        arr_n[i] = act;
        used.insert(act);

        act += 1;
        arr_m[i] = act;
        used.insert(act);
      }
    }
    i++; j++;
  }
  for(auto i: arr_n) cout << i << " ";
  cout << endl;
  for(auto i: arr_m) cout << i << " ";
  cout << endl;
  cout << i << endl;
  cout << j << endl;
  if(i < n){
    while(i < n){
      if(arr_n[i]){
        arr_n[i] = arr_n[i-1] % 2 == 0? arr_n[i-1]+1: arr_n[i-1]+2;
      }else{
        arr_n[i] = arr_n[i-1] % 2 == 0? arr_n[i-1]+2: arr_n[i-1]+1;
      }
    i++;
    }
  }else{
    while(j < m){
      if(arr_m[j]){
        arr_m[j] = arr_m[j-1] % 2 == 0? arr_m[j-1]+1: arr_m[j-1]+2;
      }else{
        arr_m[j] = arr_m[j-1] % 2 == 0? arr_m[j-1]+2: arr_m[j-1]+1;
      }
      j++;
    }

  }

  cout << max(arr_n[n-1], arr_m[m-1]) << endl;
}
