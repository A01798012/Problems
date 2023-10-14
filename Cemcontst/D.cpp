#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  //char ans = ('9'-'0')+1 <= 9? '0'+(('9'-'0')+1): '1';
   // cout << ans << endl;
  int t; cin >> t;
  while(t--){
    vector<string> sudo(9);
    for(int i = 0; i < 9; i++){
      cin >> sudo[i];
    }
    sudo[0][0] = (sudo[0][0]-'0')+1 <= 9? '0'+((sudo[0][0]-'0')+1): '1';
    sudo[1][3] = (sudo[1][3]-'0')+1 <= 9? '0'+((sudo[1][3]-'0')+1): '1';
    sudo[2][6] = (sudo[2][6]-'0')+1 <= 9? '0'+((sudo[2][6]-'0')+1): '1';


    sudo[3][1] = (sudo[3][1]-'0')+1 <= 9?'0'+((sudo[3][1]-'0')+1): '1';
    sudo[4][4] = (sudo[4][4]-'0')+1 <= 9?'0'+((sudo[4][4]-'0')+1): '1';
    sudo[5][7] = (sudo[5][7]-'0')+1 <= 9?'0'+((sudo[5][7]-'0')+1): '1';


    sudo[6][2] = (sudo[6][2]-'0')+1 <= 9?'0'+((sudo[6][2]-'0')+1): '1';
    sudo[7][5] = (sudo[7][5]-'0')+1 <= 9?'0'+((sudo[7][5]-'0')+1): '1';
    sudo[8][8] = (sudo[8][8]-'0')+1 <= 9?'0'+((sudo[8][8]-'0')+1): '1';
   // cout << "-------\n";
    for(auto s: sudo){
      cout << s << endl;
    }

  }

}
