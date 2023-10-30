#include <bits/stdc++.h>
#include <cmath>
#include <unordered_map>
#include <vector>
#define fst first
#define snd second
#define fore(i, a, b) for (int i = a, ThxDem = b; i < ThxDem; ++i)
#define pb push_back
#define ALL(s) s.begin(), s.end()
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<double, double> dd;
#define MAXN 100000
#define debug(x) cout << #x << " = " << x << '\n'
float d(dd one, dd other) {
  return sqrt(pow(other.fst - one.fst, 2) + pow(other.snd - one.snd, 2));
}
void djikstra(dd s){
  

}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m, k; cin >> n >> m >> k;
  vector<dd> diag(k);
  fore(i, 0, k) { cin >> diag[i].fst >> diag[i].snd; }


}
