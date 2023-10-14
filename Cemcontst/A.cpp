#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t,n;cin >> t;
  while(t--){
    cin >> n;
    if(n == 1 || n == 2) cout << 0 << endl;
    else if(n%2 == 0) cout << (n/2)-1 << endl;
    else cout << n/2 << endl;
  }

}
