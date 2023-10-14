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
ll m = 1000000007;

ll binpow(ll a, ll b) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll divide(ll a, ll b){
  return a * binpow(b, m-2) % m;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  ll n, k; cin >> n >> k;
  vector<ll> nums(n+1);
  unordered_map<int, int> freq;
  ll P = 0;
  for(ll i = 1; i < n+1; i++) {
    cin >> nums[i];
    freq[nums[i]]++;
  }
  for(auto x: freq){
    if(x.second > 1) P+= x.second;
  }

  ll Q = 1;
  ll pi = 1;
  for(ll i = 1; i <= P; i++) pi = (i * pi) % m;
  for(ll i = 1; i <= n; i++) Q = (i * Q) % m;
  ll ans = divide(pi, Q);
//  cout <<"Init ans: " << ans << '\n';
  cout << ans << '\n';
  P = (P? P:1);
  while(k--){
    ll a, b;
    cin >> a >> b;
    ll prev_size = freq.size();
    ll pp = P;

    if(freq[nums[a]] > 1) P--;
    freq[nums[a]]--;
    if(freq[nums[a]] == 0) freq.erase(nums[a]);

    freq[b]++;
    if(freq[b] > 1) P++;
    nums[a] = b;

//    if(pp < P){
 //     ans = ans * P % m;
  //  }else if(pp > P){
   //   ans = divide(ans, P+1);
   // }
    P = 0;
    for(auto x: freq){
      if(x.second > 1) P+= x.second;
    }
    int pi = 1;
    for(ll i = 1; i <= P; i++) pi = (i * pi) % m;
    cout << divide(pi, Q) << '\n';
   // cout << ans << '\n';

  }


}
