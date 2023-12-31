#include <bits/stdc++.h> #include <string>
#include <unordered_map>
#include <unordered_set>
#define fst first
#define snd second
#define fore(i, a, b) for (int i = a, ThxDem = b; i < ThxDem; ++i)
#define pb push_back
#define ALL(s) s.begin(), s.end()
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
#define MAXN 100000
#define debug(x) cout << #x << " = " << x << '\n'
ll N, M, Y; 
ll pows(ll x, ll n){
  ll ans = 1;
  fore(i, 0, n){
    ans = (ans%M) * (x%M);
  }
  return ans;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> N >> M >> Y;
  ll rand;
  bool kk = true;
  fore(X, 0, M){
    rand = pows(X, N) % M;
    if(rand == Y){
      cout << X << ' ';
      kk = 0;
    }
  }
  if(kk) cout << "-1";
  cout << '\n';
}
