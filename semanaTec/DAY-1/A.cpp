#include <bits/stdc++.h>
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

ll f(ll n){
  if( n <= 20) return 1;
  else return f(n-5) + 5 + n;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  ll n; cin >> n;
  cout << f(n) << '\n';
}