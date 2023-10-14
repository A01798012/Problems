#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl

int main(){

    cin.tie(0); ios_base::sync_with_stdio(0);

    #ifdef ITC
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n';
    #endif


    int n,k; cin>>n>>k;

    unordered_map<char,int> countFirsts;

    char first;

    for (int i = 0; i<n; i++){
        cin>>first;

        countFirsts[first]++;

        for (int j = 0; j<k-1; j++){
            cin>>first;
        }

    }

    if (countFirsts.count('A')){
        int cantA = countFirsts['A'];

        bool possible = true;

        if (countFirsts.count('B')){
            int cantB = countFirsts['B'];

            if (ceil(float(cantB)/2.0)>cantA){
                possible = false;
            }
        }


        if (k==3 && countFirsts.count('C')){
            int cantC = countFirsts['C'];
            if (ceil(float(cantC)/2.0)>cantA){
                possible = false;
            }
        }



        if (possible){
            cout<<1 << '\n';
        }
        else{
            cout<<0 << '\n';
        }
    }

    else{
        cout<<0 << '\n';
    }




}
