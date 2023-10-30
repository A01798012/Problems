#include <bits/stdc++.h>
#include <queue>
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
  string op, name;
  int fila;
  queue<string> f1;
  stack<string> f2;
  fore(i, 0, n){
    cin >> op >> fila;
    if(op[0] == 'E'){
      cin >> name;
      if(fila == 1){
        f1.push(name);
      }else{
        f2.push(name);
      }
    }else{
      if(fila == 1){
        cout << f1.front() << '\n';
        f1.pop();
      }else{
        cout << f2.top() << '\n';
        f2.pop();
      }
    }
  }
}
