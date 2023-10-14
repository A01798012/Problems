#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, num, n;cin >> t;
    while(t--){
        cin >> n;
        multiset<int> mat;
        for(int i = 0; i < n; i++){
            cin >> num;
            mat.insert(num);
        }
        int cont = 0;
        while(!mat.empty()){
            int act = *mat.begin();
            mat.erase(mat.find(act));
            while(1){
                act++;
                if(!mat.count(act)) break;
                else{
                    mat.erase(mat.find(act));
                }
            }
            cont++;

        }
        cout << cont << endl;

    }
}
