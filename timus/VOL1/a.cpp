#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
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
ll g(ll n) { return (n * (n + 1) / 2); }

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m; cin >> n;
  vector<int> a(n);
  unordered_map<int,int> map;
  double sum = 0.0;

  fore(i, 0, n) {
    cin >> a[i];
    sum+=(double)a[i];
    map[a[i]]++;

  }
  double avg = sum/(double)n;
  if(map[5] == n){
    cout << "Named";
  }else if(map[3] > 0){
    cout << "None";
  }else if(avg >= 4.5){
    cout << "High";
  }else{
    cout << "Common"; 
  }
  cout << '\n';

}
