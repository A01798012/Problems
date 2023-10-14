#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  int m;
  while(t--){
    cin >> m;
    vector<string> w(2);
    for(auto &i: w) cin >> i;
    int x = -1;
    int y = -1;
    for(int i = 0; i < m; i++){
        if(w[0][i] != w[1][i]) {x = i; break;}
    }
    if(x == -1) {cout << "YES\n"; continue;}
    bool ok = 1;
    y = w[0][x] == 'B' ? 0 : 1;

    for(int i = x +1; i < m; i++){
        if(w[y][i] == 'W') ok = 0;
        if(w[y ^ 1 ][i] == 'B') y ^= 1;
    }

    y = w[0][x] == 'B' ? 0 : 1;
    for(int i = x -1; i >= m; i--){
        if(w[y][i] == 'W') ok = 0;
        if(w[y ^ 1 ][i] == 'B') y ^= 1;
    }

    cout << (ok? "YES\n": "NO\n");

  }
}
