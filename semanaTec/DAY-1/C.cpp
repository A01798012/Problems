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
bool is(int n){
  fore(i, 2, n){
    if(n%2 == 0){
      return false;
    }
  }
  return true;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n; cin >> n;
  cout << (is(n)?"PRIMO\n":"COMPUESTO\n");
}
