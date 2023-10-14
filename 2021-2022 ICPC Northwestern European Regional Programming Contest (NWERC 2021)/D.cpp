#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    int n, q; cin >> n >> q;
    vector<int> ar(n);
    unordered_set<int> is;
    for(auto &i: ar){ cin >> i; is.insert(i);}
    sort(ar.begin(), ar.end());
    while(q--){
        int op, a,b,k;
        cin >> op;
        if(op == 1){
            cin >> k;
            if(is.count(k)) continue;
            else if (k > ar[ar.size()-1]){
                ar.push_back(k);
                is.insert(k);
            }else{
                int i =  upper_bound(ar.begin(), ar.end(), k) - ar.begin();
                is.erase(ar[i]);
                ar[i] = k;
                is.insert(k);
            }
        }else{
            cin >> a >> b;
            cout << distance(lower_bound(ar.begin(), ar.end(),a), (upper_bound(ar.begin(), ar.end(),b))) << '\n';
        }
 }
    return 0;
}
