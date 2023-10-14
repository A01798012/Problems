#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl

vector<bool> intToBinary(int number, int length) {
    vector<bool> binary(length,0);

    int i = length-1;
    while (number > 0) {
        binary[i]=(number % 2);
        i--;
        number /= 2;
    }

    return binary;
}

int main(){

    cin.tie(0); ios_base::sync_with_stdio(0);

    #ifdef ITC
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n';
    #endif

    int n,k; cin>>n>>k;

    int max = 0;

    for (int i = 0 ; i<n; i++){
        max += pow(2,i);
    }

    int ans = 0;

    for (int i = 0; i<=max; i++){
        vector<bool> binary = intToBinary(i,n);

        bool act = binary[0];
        int cantAct = 1;

        bool possible = true;

        // for (auto i: binary){
        //     cout<<i;
        // }
        // cout<<endl;

        for (int j = 1; j<n; j++){

            // debug(binary[j]);
            if (binary[j]==act){
                cantAct++;

                if (cantAct>k){
                    possible=false;
                    break;
                }
            }
            else{
                act = binary[j];
                cantAct = 1;
            }
        }

        if (possible) ans++;

    }

    cout<<ans << '\n';


}
