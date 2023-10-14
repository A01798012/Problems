#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t,n, num; cin >> t;
  map<int,int> freq;
  while(t--){
    cin >> n;
    freq.clear();
    freq[0] = 0; freq[1] = 0;
    for(int i = 0;i < n;i++){
      cin >> num;
      freq[num]++;
    }
    if(freq[0] <= (n+1)/2)cout << "0\n";
    else if(freq[1] == 0 || (*(--freq.end())).first != 1) cout << "1\n";
    else cout << "2\n";

  }

}
