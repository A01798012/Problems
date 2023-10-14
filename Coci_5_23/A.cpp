#include <bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n, m; cin >> n >> m;
  unordered_map<char,int> letters;
  unordered_map<char,int> letters2;
  string krok = "krokod";
  int freq_krok = 0;
  string idk; cin >> idk;
  char max_char;
  int max = -1;
  for(auto ch: idk){
    letters[ch]++;
    letters2[ch]++;
    if(max < letters[ch]){
      max_char = ch;
      max = letters[ch];
    }
  }
  //if(max >= )

  int ans = 0;
  int ans2 = 0;

  for(auto val: letters){
    ans += pow(val.second, 2);
  }

  while(letters['k'] >= 2 && letters['r'] >= 1 &&
        letters['o'] >= 2 && letters['d'] >= 1){
    letters['k'] -= 2;
    letters['r'] -= 1;
    letters['o'] -= 2;
    letters['d'] -= 1;
    freq_krok++;
  }
  ans+=freq_krok*7;



  cout << ans << "\n";

}
