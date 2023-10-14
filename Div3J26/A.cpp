#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    int t; cin >> t;
    string p_pi;
    string pi = "314159265358979323846264338327950288419716939937510";
//    cout << pi;
    while(t--){
        cin >> p_pi;
        int count = 0;
        int pt = 0;
        for(char i: p_pi){
            if(i != pi[pt])
                break;
            else{
                pt++;
            }
        }
        cout << pt << endl;

    }
}
