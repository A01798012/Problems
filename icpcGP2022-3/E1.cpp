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
vector<int> h;
vector<bool> popped;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  cin >> N;
  int ball;
  popped.resize(N+1,0);
  h.resize(N+1);
  fore(i, 1, N+1){
    cin >> ball;
    balloons[ball].insert(i);
    h[i] = ball;
  }
  int ans = 0;

  fore(i, 1, N+1){
    if(popped[i]) continue;

    int m = h[i];
    popped[i] = 1;
    int x = i;
    balloons[m].erase(x);
    N--; m--;


    while(!balloons[m].empty()){
      if(balloons[m].upper_bound(x) != balloons[m].end()){
        x = *(balloons[m].upper_bound(x));
      }else{
        break;
      }
      balloons[m].erase(x);
      popped[x] = 1;
      N--;
      m--;
      if(m <= 0) break;
    }

    ans++;
    if(N==0) break;
  }
  cout << ans << '\n';


}
