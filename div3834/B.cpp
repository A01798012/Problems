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
void solve() {
  int m, s; cin >> m >> s;
  vector<int> b(m);
  unordered_set<int> set; 
  int m_ = -1;
  fore(i, 0, m) {
    cin >> b[i];
    m_ = max(m_, b[i]);
    set.insert(b[i]);
  }
  int sum = 0;
  fore(i, 1, m_+1){
    if(!set.count(i)) sum+=i;
  }
  if(sum < s){
    int cur = m_+1;
    while(sum < s){
      sum+=cur;
      cur++;
    }
  }

  if(sum == s){
    cout << "YES\n";
  }else{
    cout << "NO\n";
  }


}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t; cin >> t; while(t--) solve();
}
