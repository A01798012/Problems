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
  int n; cin >> n;
  vector<string> strs(n);
  unordered_set<char> firstLetters;
  fore(i, 0, n){
    cin >> strs[i];
    firstLetters.insert(strs[i][0]);
  }
  bool f = true;
  fore(i, 0, n){
    f = true;
    for(auto ch: strs[i]){
      if(!firstLetters.count(ch)){
        f = false;
        break;
      }
    }
    if(f){
      cout << "Y\n";
      exit(0);
    }
  }
  cout << "N\n";
}
