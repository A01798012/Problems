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
  string s;
  cin >> s;
  sort(s.rbegin(), s.rend());
  ll a = stoll(s.substr(0, s.size() - 1));
  ll b = stoll(s.substr(s.size() - 1, 1));
  cout << a + b << '\n';
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  stack<int> s;
  string op;
  int x,n;cin >> n;
  fore(i, 0, n){
    cin >> op;
    if (op[0] == 'A') {
      cin >> x;
      s.push(x);
    } else if (op[0] == 'I') {
      cout << s.top() << '\n';
    }else{
      int u,d;
      u = s.top(); s.pop();
      d = s.top(); s.pop();
      s.push(u+d);
    }
  }
}
