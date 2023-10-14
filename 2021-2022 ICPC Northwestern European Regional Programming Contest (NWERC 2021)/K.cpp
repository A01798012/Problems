#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    string pre, suf,x, status; 
    cin >> x >> status;
    cin >> pre >> suf; 
    cout <<  pre << ' ' << suf << '\n';
    int time = stoi(pre.substr(1, 100));
    cout << time << '\n';
    return 0;
}