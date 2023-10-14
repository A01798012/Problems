#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t, n, k; cin >> t;
  while(t--){
    cin >> n >> k;
    int total = 0;
    if(n%k == 0) total = n;
    else{
      int ojo = n/k;
      if(n == 1){
        total = 1;
      }else{
        total = (ojo+1)*(k/2);
        if(k%2 == 0)
           total+=ojo*(k/2);
        else
          total+=(ojo)*((k/2)+1);
      }
    }
//    cout << total << endl;
    if(total > n) cout << n << endl;
    else
    cout << total << endl;

  }



}
