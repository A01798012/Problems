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

int total(string& a, string& b){
  int ans = 0;
  for(int i = 0; i < a.size();i++){
    ans+= abs(a[i] - b[i]);
  }
  return ans;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n,k;cin >> n >> k;
  vector<string> w(n);
  vector<int> mins(n, 1e9);
  vector<int> p(n, -1), ass(n);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i == j) continue;
      int tot = total(w[i], w[j]);
    }
  }
  //for(auto x: mins) cout << x << ' '; cout << '\n';
  int bb = -1;
  for(auto x: mins) bb = max(bb, x);
  cout << bb << '\n';

}
