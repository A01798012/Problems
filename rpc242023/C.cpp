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
  int n; cin >> n;
  vector<map<char,int>> freq(30);
  string s;
  for(int i = 0; i < n; i++){
    cin >> s;
    for(int j = 0; j < s.size(); j++){
      freq[j][s[j]]++;
    }
  }
  /*
  for(int i = 0; i < 30; i++){
    if(freq[i].size() == 0) break;
    for(auto x: freq[i]){
      cout << "|" << x.first << ' ' << x.second << "|";
    }
    cout << '\n';
  }
  */
  //exit(0);
  for(int i = 0; i < 30;i++){
    if(freq[i].size() == 0) break;
    int m_ = -1;
    for(auto x: freq[i]) m_ = max(m_, x.second);
    cout << i+1 << ": ";
    vector<char> ans;
    for(auto x: freq[i]) {
      if(m_ == x.second) ans.pb(x.first);
    }
    for(int j = 0; j < ans.size();j++){
      cout << ans[j];
      if(j == ans.size()-1) cout << '\n';
      else cout << ' ';
    }
  }

}
