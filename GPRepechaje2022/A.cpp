#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int x; cin >> x;
  if(ceil(3000.0 / (float)x) <= 15) cout << ceil(3000.0 / (float)x) << '\n';
  else cout << 15 << '\n';


}
