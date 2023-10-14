#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> answ;

    for (int i = 0; i < n; i++){
        int n2;
        cin>>n2;

        int nums[n2];
        int x;
        for (int j = 0; j <n2;j++){
            cin>>x;
            nums[j] =x;
        }

        unordered_set<int> reps;

        int cant=0;

        for (int j=n2-1;j>=0;j--){


            if (!reps.count(nums[j])){
                reps.insert(nums[j]);
                cant++;
            }
            else{
                break;
            }

        }

        cout << n2-cant << '\n';
    }
 
}
