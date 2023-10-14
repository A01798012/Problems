#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n; cin >> t;
    while(t--){
        cin >> n;
        vector<int> nums(n);
        unordered_set<int> jiji;
        for(int i = 0; i < n; i++){
            cin >> nums[i];
            jiji.insert(nums[i]);
        }
        if(n == 1){
            cout << "NO\n";
            continue;
        }if(n == 2 && nums[0] == nums[1]){
            cout << "NO\n";
            continue;
        }
        if(jiji.size() == 1){
            cout << "NO\n";
            continue;
        }
        sort(nums.rbegin(), nums.rend());
        if(nums[0] == nums[1]) swap(nums[1], nums[nums.size()-1]);
        cout << "YES\n";
        for(auto i: nums)
            cout << i << " ";
        cout << '\n';
    }
}
