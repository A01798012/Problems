#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int h, m, t; cin >> t;
  while(t--){
    int h_max = 23;
    int m_max = 60;
    cin >> h >> m;
    h_max -= h;
    m_max -= m;
    cout << h_max*60 + m_max << endl;

  }


}
