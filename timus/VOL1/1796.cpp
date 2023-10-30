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
  vector<int> rub = {10, 50, 100, 1000};
  vector<int> a(6);

  int price, x,total = 0;
  fore(i, 0, 6) {
    cin >> a[i];
    total+= rub[i]*a[i];
  }
  cin >> price;
  int l,r = total/price;

  l = 6; //???????????????

  cout << 1+r-l << '\n';
  fore(i, l, r+1){
    cout << i << ' ';
  }cout << '\n';


}
