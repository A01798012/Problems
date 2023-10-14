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

    long long n; cin>>n;
    int k; cin>>k;

    vector<long long> primes(k);

    for (int i = 0; i < k; i++){
        cin>>primes[i];
    }

    long long act = 1;

    int contador = 0;

    while (contador<n-1){
        long long probNext = act + 1;
        // debug(probNext);

        bool valid = true;

        for (long long i: primes){
            if (probNext%i==0){
                valid = false;
                break;
            }
        }

        act = probNext;

        if (valid){
            contador++;
            // debug(contador);
        }
        else{
            // cout<<"NOVALido"<<endl;
        }

        // cout<<endl;


    }

    cout<<act<<endl;




}
