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
void solve(){
  ll n; cin >> n;
  ll x, times = 0, prev;
  ll ans = 0;
  vector<ll> nums(n);
  for(auto &i: nums){
    cin >> i;
    ans+= abs(i);
  }
  for(ll i = 0; i < n;){
    if(nums[i] < 0){
      times++;
      while(i < n && nums[i] <= 0) i++;
    }else{
      i++;
    }
  }

  cout << ans  << ' ' << times << '\n';
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  while(t--) solve();

}
