#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    vector<char> possible;
    for(char i = 'a'; i <= 'z'; i++) possible.push_back(i);
    for(char i = 'A'; i <= 'Z'; i++) possible.push_back(i);
    for(char i = '0'; i <= '9'; i++) possible.push_back(i);
    string pre,suf,x,status,pass = "";
    int time = -1;
    int size;
    for(; pass.size() <= 20;){
        pass+= 'a';
        cout << pass << flush;
        cin >> x >> status;
        if(status == "DENIED"){
            cin >> pre >> suf; 
            int t = stoi(pre.substr(1, 20));
            if(t > time) {
                size = pass.size();
                time = t;
            }
        }
        else{
            exit(0);
        }
    }
    string prueba = pass;
    for(int i = 0; i < pass.size(); i++){
        for(auto c: possible){
            prueba[i] = c;
            cout << prueba << flush;
            cin >> x >> status;
            if(status == "DENIED"){
                cin >> pre >> suf; 
                int t = stoi(pre.substr(1, 20));
                if(t > time){
                    pass[i] = prueba[i];
                    continue;
                }
            }
            else{
                exit(0);
            }
        }
    }
    cout << pass << flush;
}