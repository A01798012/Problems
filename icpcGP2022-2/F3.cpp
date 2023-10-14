#include <bits/stdc++.h>
using namespace std;

const int K = 26;

struct Vertex {
    int next[K];
    int size = 0;

    Vertex() {
        fill(begin(next), end(next), -1);
    }
};

vector<Vertex> trie(1);
pair<string, int> m_ = {"", 0};

void add_string(string const& s) {
    int v = 0;
    for (char ch : s) {
        int c = ch - 'a';
        if (trie[v].next[c] == -1) {
            trie[v].next[c] = trie.size();
            trie.emplace_back();
        }
        v = trie[v].next[c];
    }
    trie[v].size++;
    if(trie[v].size > m_.second){
        m_ = {s, trie[v].size};
    }else if(trie[v].size == m_.second && s < m_.first){
        m_ = {s, trie[v].size};
    }
}

int main(){
    int n, c;
    cin >> n >> c;
    string st;
    while(n--){
        cin >> st;
        for(int i = 0; i < c; i++){
            if(st[i] =='*'){
                for(char rep = 'a'; rep <= 'z'; rep++){
                    st[i] = rep;
                    add_string(st);
                }
            }
        }
    }
    cout << m_.first << " " << m_.second << "\n";
    return 0;
}
