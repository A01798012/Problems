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
  //  unordered_map<string, int> map;
  unordered_map<string, vector<string>> map;
  string ord, s;
  fore(i, 0, n) {
    cin >> ord;
    s = ord;
    sort(ALL(ord));
    //   map[s]++;
    map[ord].pb(s);
  }
  cout << map.size() << '\n';
  for (auto [k, v] : map) {
    for (auto word : v){
      cout << word << ' ';
    }cout << '\n';
  }
}
