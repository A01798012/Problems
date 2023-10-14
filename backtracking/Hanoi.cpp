#include <bits/stdc++.h>
using namespace std;
vector<int> pegs;
int act = 0;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t,n; cin >> t;
  while(t--){
    cin >> n;
    int act = 1;
    pegs.clear();
    pegs.resize(n);
//    for(int i = 0; i < n; i++) pegs[i] = 0;
    while(1){
      bool flag = false;
      for(int i = 0; i < n; i++){
        if(pegs[i] == 0){ pegs[i] = act; flag = 1; break;}
        int idk = sqrt(pegs[i]+act);
        if(pegs[i] + act == idk * idk){
          //cout << "----------\n";
          //cout << pegs[i] << " " << act << "\n";
          pegs[i] = act;
          //cout << i+1 << " " << pegs[i]<< "\n";
          flag = 1;
          //cout << "----------\n";
          break;
        }
      }
      if(!flag) break;
      act++;
    }
    cout << act-1 << "\n";
  }

}
