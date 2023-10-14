#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ThxDem=b;i<ThxDem;++i)
#define pb push_back
#define ALL(s) s.begin(),s.end()
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int N, X, ans = 0, num, m = 1e9+1;
  cin >>  N >> X;
  vector<int> nums(N);
  for(auto &i: nums){
    cin >> i;
    m = min(m, i);
  }
  fore(i, m, X+1){
    for(auto &v: nums){
      if(i % v == 0){ans++; break;}
    }
  }
  cout << ans << '\n';

}
