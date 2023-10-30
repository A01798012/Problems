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
ll triang(ll n){
  return n*(n+1)/2;
}
double yf(double x){
  return (x+5)/(2*(x+1));
}
double zf(double x, double y){
  return ((y *y) + x*(x-(2*y)))/(x*y);
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  double x; cin >> x;
  auto y = yf(x);
  auto z = zf(x, y);
  printf("%.6f", z);

}
