#include <bits/stdc++.h>
#include <string>
#define fst first
#define snd second
#define fore(i, a, b) for (int i = a, ThxDem = b; i < ThxDem; ++i)
#define pb push_back
#define ALL(s) s.begin(), s.end()
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
#define debug(x) cout << #x << " = " << x << '\n'


void solve() {
  int n; cin >>n;
  string s; cin >> s;
  int ind = n-1;
  char m_ = 'z';
  for(int i = n-1; i >= 0; i--){
    if(s[i] < m_){
      m_ = s[i];
      ind = i;
    }
  }
  string prev = s.substr(0, ind);
  string next ="";
  if(ind < n-1){
    next = s.substr(ind+1, n);
  }
  cout << m_ + prev + next << '\n';

  
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t; cin >> t;
  while(t--) solve();
  exit(0);
  int n, X;
  cin >> n >> X;
  vector<int> l(n), ans;
  fore(i, 0, n) cin >> l[i];
  int i;
  int sum;
  for (i = 0; i < (1 << n); i++) { // for each subset, O(2^n)
    sum = 0;
    for (int j = 0; j < n; j++) { // check membership, O(n)
      if (i & (1 << j)){// test if bit ‘j’ is turned on in subset ‘i’?
        sum += l[j];    // if yes, process ‘j’
        ans.push_back(l[j]);
      } 
    }
    if (sum == X)
      break; // the answer is found: bitmask ‘i’
    else
      ans.clear();
  }
  for(auto i: ans) cout << i << ' '; cout << '\n';
}
