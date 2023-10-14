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
int N;
const int MAXH = 1e6+1;
vector<set<int>> balloons(1e6+1);
multiset<int> maxi;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  cin >> N;
  int ball;
  fore(i, 1, N+1){
    cin >> ball;
    balloons[ball].insert(i);
    maxi.insert(ball);
  }
  int ans = 0;

  while(N){
    int m = *(--maxi.end());
    int x = 0;
    //maxi.erase(maxi.find(m));
    while(!balloons[m].empty()){
      if(balloons[m].upper_bound(x) != balloons[m].end()){
        maxi.erase(maxi.find(m));
        x = *(balloons[m].upper_bound(x));
      }else{
        break;
      }
      balloons[m].erase(x);
      N--;
      m--;
      if(m <= 0) break;
    }

    ans++;

  }
  cout << ans << '\n';


}
