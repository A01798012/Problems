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
  string s; cin >> s;
  int v = stoi(s);
  int ans = 0;
  fore(i, 0, SZ(s)){
    if((s[i]-'0' != 0) && v % (s[i] - '0') == 0) ans++;
  }
  cout << ans << '\n';

}
