#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  int n,a,b;
  string alpha = "abcdefghijklmnopqrstuvwxyz";
  while(t--){
    cin >> n >> a >> b;
    int cont = 0;
    for(int i = 0; i < n;i++){
      cout << alpha[cont%b];
      cont++;
    }
    cout << endl;

  }

}
