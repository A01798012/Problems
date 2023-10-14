#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  int n, k;
  int num;
  int fh[1010][1010];

  while(t--){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cin >> fh[i][j];
      }
    }

    int m = 0;
    for(int i = 0; i < n / 2; i++){
      for(int j = 0; j < n; j++){
        m += fh[n-1-i][n-1-j] != fh[i][j];
       // if(fh[n-1-i][n-1-j] != fh[i][j]){
        //  m++;
        //}
      }
    }
    if(n&1){
      for(int j = 0; j < n/2; j++){
        m+= fh[n/2][j] != fh[n/2][n-1-j];
//        if(fh[n/2][i] != fh[n/2][n-1-i]) m++;
      }
    }
//    cout << m << '\n';

    if(m>k || ((k-m)%2 && n%2==0))cout<<"NO\n";
		else cout<<"YES\n";
  }

}
