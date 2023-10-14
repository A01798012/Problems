#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t, tam; cin >> t;
  string s;
  string target = "meow";
  set<char> letters;
  letters.insert('m');
  letters.insert('e');
  letters.insert('o');
  letters.insert('w');

  while(t--){
    cin >> tam;
    cin >> s;
    bool f = 1;
  string cur = "";
    tam--;
    char prev = tolower(s[0]);
    cur.push_back(prev);
    int pt = 0;
    for(auto i: s){
      char x=tolower(i);
      if(!letters.count(x)){f = 0; break;}
      if(prev != x){
        prev = x;
        cur.push_back(x);
      }
    }
    if(f && cur == target) cout << "YES\n";
    else cout << "NO\n";
  }

}
