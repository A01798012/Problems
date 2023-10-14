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
#define MAXN 1e5 + 90000
const int N = 1e6;
string cn, word;
int n;
unordered_map<string, vector<string>> mappedWords;
unordered_map<char, char> clase = {
    {'i', '1'}, {'j', '1'}, {'a', '2'}, {'b', '2'}, {'c', '2'}, {'d', '3'},
    {'e', '3'}, {'f', '3'}, {'g', '4'}, {'h', '4'}, {'k', '5'}, {'l', '5'},
    {'m', '6'}, {'n', '6'}, {'p', '7'}, {'r', '7'}, {'s', '7'}, {'t', '8'},
    {'u', '8'}, {'v', '8'}, {'w', '9'}, {'x', '9'}, {'y', '9'}, {'o', '0'},
    {'q', '0'}, {'z', '0'}};

string wordToNumber(string &w) {
  string ans = "";
  for (auto ch : w) {
    ans += clase[ch];
  }
  return ans;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  while (cin >> cn) {
    if (cn == "-1")
      break;
    cin >> n;
    fore(i, 0, n) {
      cin >> word;
      mappedWords[wordToNumber(word)].pb(word);
    }
    int prev = 0;
    int words = 0;
    string ans = "";
    fore(i, 0, cn.size()) {
      string sub = cn.substr(prev, i);
      if (mappedWords.count(sub)) {
        ans += mappedWords[sub][0];
        words++;
        ans += " ";
        prev = i;
      }
    }
    cout << (words - 1 != cn.size() ? "No solution." : ans) << '\n';
  }
}
