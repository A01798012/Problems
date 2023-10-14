#include <bits/stdc++.h>
using namespace std;

struct Node{
  Node* letters[27];
  int word_count;
  Node(){
    word_count = 0;
  }
};

class Trie{
  public:
    Trie(){
      root_ = new Node();
      maximum_ = {0, ""};
    }
    void AddWord(const string& word){
      Node* current = root_;
      for(const char ch: word){
        char c = ch - 'a';
        if(current->letters[c] == nullptr){
          current->letters[c] = new Node();
        }
        current = current->letters[c];
      }
      current->word_count++;
      if(current->word_count > maximum_.first){
        maximum_ = {current->word_count, word};
      }else if(current->word_count == maximum_.first && word < maximum_.second){
        maximum_ = {current->word_count, word};
      }
    }
    pair<int, string> MaxWords(){
      return maximum_;
    }
private:
    Node* root_;
    pair<int, string> maximum_;
};

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  Trie trie;
  int n,c;cin >> n >> c;
  for(int i = 1; i <= n; i++){
    string s;
    cin >> s;
    for(int pos = 0; pos < s.size(); pos++){
      if(s[pos] == '*'){
        for(char c = 'a'; c <= 'z'; c++){
          s[pos] = c;
          trie.AddWord(s);
        }
      }
    }
  }
  pair<int, string> result = trie.MaxWords();
  cout << result.second << " " << result.first << "\n";


}
