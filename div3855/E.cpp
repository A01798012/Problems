#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 10;
vector<int> let[MAXN];
vector<int> p(MAXN);

int find(int x){return p[x]=p[x]==x?x:find(p[x]);}
void join(int x, int y){p[find(x)]=find(y);}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t; cin >> t;
  int n,k;
  while(t--){
    string s, t;
    cin >> n >> k >> s >> t;
    for(int i = 0; i < n; i++) p[i] = i;
    for(int i = 0; i < n; i++){
      if(i+k < n) {join(i, i+k);
//      for(int i = 0; i < n; i++) cout << p[i] << ' ';
 //     cout << '\n';
      }
      if(i+k+1 < n){ join(i, i+k+1);
   //   for(int i = 0; i < n; i++) cout << p[i] << ' ';
    //  cout << '\n';
      }

    }
    vector<int> z(26);
    for(int i = 0; i < n; i++) let[i] = z;
    for(int i = 0; i < n; i++) let[find(i)][s[i]-'a']++;
   // for(int i = 0; i < n; i++){
    //  for(auto i: am[i]) cout << i << " ";
     // cout << endl;
    //}
    for(int i = 0; i < n; i++) let[find(i)][t[i]-'a']--;

    bool ok = 1;
    for(int i = 0; i < n; i++) ok &= let[i] == z;

    cout << (ok? "YES\n": "NO\n");

  }
}
