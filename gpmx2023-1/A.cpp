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
  int n,x; cin >> n;
  unordered_map<string, int> freq;
  string s;
  for(int i = 0; i < n; i++ ){
    string temp = "";
    cin >> x;
    for(int j = 0; j < x; j++){
      cin >> s;
      temp+=s[0];
    }
    freq[temp]++;
  }
  int ans = 0;
  for(auto w: freq){
    ans+= (w.second > 1? 0: 1);
  }
  cout << ans << '\n';

}
