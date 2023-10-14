#include <bits/stdc++.h>

using namespace std;

int main(){
//    cin.tie(0); ios_base::sync_with_stdio(0);
    int t,n,m; cin >> t;
    while(t--){
        cin >> n;
        map<int,int> mat;
        for(int i = 0; i < n; i++){
            cin >> m;
            mat[m]++;
        }
        int count = 0;
        while(mat.size() > 0){

            pair<int,int> val= *mat.begin();
            mat[val.first]--;
            if(mat[val.first] <= 0) mat.erase(val.first);
            int next = val.first;
            while(1){
                next++;
                if(mat.count(next)){
                    mat[next]--;
                    if(mat[next] <=0) mat.erase(next);
                }else break;
            }
            count++;
        }
        cout << count << '\n';
    }
}
