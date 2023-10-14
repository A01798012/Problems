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
  int ans = 0;
  int n; cin >> n;
  string s; cin >> s;
  char prev = s[0];
  int t = 0;
  fore(i, 0, n){
    if(s[i] == 'a')t++;
    if(s[i] == 'b'){
      if(t > 1) ans+= t;
      t = 0;
    }
  }
  if(s[n-1] == 'a' && t > 1) ans+= t;

  cout << ans << '\n';

}
