#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    int t; cin >> t;
    int n;
    int value;
    while(t--){
        cin >> n;
        vector<unordered_set<int>> arr(n-1);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < arr.size(); j++){
               cin >> value;
               arr[j].insert(value);
            }
        }


        for(int i = 1; i < n-1; i++){
            for(auto num: arr[i]){
                if(arr[i-1].count(num)){
                    arr[i-1].erase(num);
                    if(i == 1) cout << *arr[0].begin() << " ";
                    cout << num << " ";
                    arr[i].erase(num);
                    break;
                }
            }
        }
        cout << *arr[n-2].begin() << '\n';

    }
}
