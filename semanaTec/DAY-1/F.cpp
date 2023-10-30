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
int a, b, n;
int fib(int n){
  if(n == 0) return a;
  if(n == 1) return b;
  return fib(n-1)^fib(n-2);
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t; cin >> t;
  vector<int> v(3);
  while(t--){
    cin >> v[0];
    cin >> v[1];
    v[2] = v[0] ^v[1];

    cin >> n;
    cout << v[n%3] << '\n'; 

  }

}
