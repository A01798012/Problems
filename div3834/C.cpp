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
ll a, b, l, r, x;

void solve() {
  cin >> l >> r >> x >> a >> b;
  int ans = 0;


  if(a != b && abs(l-b) < x && abs(r-b) < x){
    cout << "-1\n";
    return;
  }
  ll dif, trans;
  fore(i, 0, 1000) {
    if (a == b) {
      break;
    }
    if (abs(a - b) >= x) {
      a = b;
      ans++;
      break;
    }
    ll lx = abs(a - l);
    ll rx = abs(a - r);
    if (lx < rx) {
      dif = rx;
      trans = r;
    } else if (lx == rx) {
      if (abs(lx - b) < abs(rx - b)) {
        dif = rx;
        trans = r;
      } else {
        dif = lx;
        trans = l;
      }
    } else {
      dif = lx;
      trans = l;
    }

    if (dif < x) {
      cout << "-1\n";
      return;
    } else {
      a = trans;
    }
    ans++;
  }

  cout << ans << '\n';
}
void solve2(){
  int l,r,x,a,b; cin >> l >> r >> x >> a >> b;
  if(a == b){
    cout << "0\n";
    return;
  }
  if(abs(l-b) < x && abs(r-b) < x){
    cout << "-1\n";
    return;
  }
  if(abs(a-l) < x && abs(a-r) < x){
    cout << "-1\n";
    return;
  }

  if(abs(a-b) >= x){
    cout << "1\n";
    return;
  }
  if(abs(a-l) >= x && abs(l-b) >= x){
    cout << "2\n";
    return;
  }
  if(abs(a-r) >= x && abs(r-b) >= x){
    cout << "2\n";
    return ;
  }

  if(abs(a-l) >= x && abs(l - r) >= x && abs(r-b) >= x){
    cout << "3\n";
    return;
  }
  if(abs(a-r) >= x && abs(r - l) >= x && abs(l - b) >= x){
    cout << "3\n";
    return;
  }

}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
    solve2();
}
