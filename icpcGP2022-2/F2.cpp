#include <bits/stdc++.h>
using namespace std;
struct Node{
    Node* letters[26];
    int word_count;
    Node(){
//        new Node;
        word_count = 0;
    }
};

class Trie{
private:
        pair<string, int> m_;
        Node* root_;
public:
        Trie(){
            m_ = {"", 0};
            root_ = new Node();
        }

        void addWord(string& word){
            Node* current = root_;
            for(char ch: word){
                int c = ch - 'a';
                if(current->letters[c] == nullptr){
                    current->letters[c] = new Node();
                }
                current = current->letters[c];
            }
            current->word_count++;
            if(current->word_count > m_.second){
                m_ = {word, current->word_count};
            }else if(current->word_count == m_.second && word < m_.first){
                m_ = {word, current->word_count};
            }
        }
        pair<string, int> giveAns(){
            return m_;
        }
};

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  Trie t;
  int n, c; cin >> n >> c;
  string s;
  while(n--){
      cin >> s;
      for(int letter = 0; letter < c; letter++){
          if(s[letter] == '*'){
              for(char rep = 'a'; rep <= 'z'; rep++ ){
                  s[letter] = rep;
                  t.addWord(s);
              }
          }
      }
  }
  auto ans = t.giveAns();
  cout << ans.first << " " << ans.second << '\n';

}
