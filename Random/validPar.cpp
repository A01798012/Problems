#include <bits/stdc++.h>
using namespace std;
bool ok(string s){
    stack<char> q;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '(' && s[i] != ')') continue;
        if(q.empty()){
            q.push(s[i]);
        }else if(q.top() == '(' && s[i] == ')'){
            q.pop();
        }else{
            q.push(s[i]);
        }
    }
    return q.empty();
}
bool oki(string expr){
    // Declare a stack to hold the previous brackets.
    stack<char> temp;
    for (int i = 0; i < expr.length(); i++) {
        if (temp.empty()) {
            temp.push(expr[i]);
        }
        else if ((temp.top() == '(' && expr[i] == ')')){
            temp.pop();
        }
        else {
            temp.push(expr[i]);
        }
    }
    return temp.empty();
}
int main(){
    cout << ok("hola") << '\n';
    cout << ok("(h)ola") << '\n';
    cout << ok("n = 26 * (zV) * R /the rudely appears answer //ERROR") << '\n';
    cout << ok("V92J = (Ha - ((C) + N) + yGK5)) //ERROR") << '\n';
    cout << ok("((())") << '\n';

    cout << oki("(") << '\n';
    cout << ok("(") << '\n';
    return 0;
}
