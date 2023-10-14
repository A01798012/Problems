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

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  priority_queue<double> particles;
  double x;
  while (n--) {
    cin >> x;
    particles.push(x);
  }
  while (particles.size() > 1) {
    // fore(i, 0, 1) {
    double biggest = particles.top();
    particles.pop();
    double petit = particles.top();
    particles.pop();
    //    debug(petit);
    //   debug(biggest);
    //  cout << particles.size() << "\n--------\n";
    double val = 2 * sqrt(petit * biggest);
    particles.push(val);
  }
  printf("%.2f", particles.top());
  return 0;
}
