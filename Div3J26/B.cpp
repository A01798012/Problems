#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    int t; cin >> t;
    int n,s,r;
    while(t--){
        cin >> n >> s >> r;
        int max = s - r;

        n--;
        cout << max << " ";
        while(r/n >= 0){
            int idk = r/n;
            cout << idk << " ";
            r-=idk;
            n--;
            if(n <= 0) break;
        }
       cout << endl;



    }
}
