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
  int n, x; cin >> n >> x;
  unordered_set<int> s;
  vector<int> nums(n);
  for(auto &i: nums) cin >> i;
  for(auto n: nums){
      for(int i = 1; i*n <= x; i++){
          s.insert(i*n);
      }
  }
  cout << s.size() << '\n';
}
