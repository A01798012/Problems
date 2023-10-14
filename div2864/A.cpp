#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  int n, m;
  int x1, x2, y1,y2;

  while(t--){
    cin >> n >> m;
    cin >> x1 >> y1 >> x2 >> y2;

    int i = 0;
    int f = 0;

    if(x1 + 1 <= n) i++;
    if(x1 - 1 >= 1) i++;
    if(y1 + 1 <= m) i++;
    if(y1 - 1 >= 1) i++;

    if(x2 + 1 <= n) f++;
    if(x2 - 1 >= 1) f++;
    if(y2 + 1 <= m) f++;
    if(y2 - 1 >= 1) f++;

    cout << min(i, f) << '\n';
  }

}
