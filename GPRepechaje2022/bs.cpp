#include <bits/stdc++.h>
using namespace std;
vector<int> idk={1,3,2,10};
int bs(int tar){
    int l = 0 ;
    int r = idk.size()-1;
    int mid;
    int pos = -1;
    while(l <= r){
        mid = (l+r)/2;
        if(idk[mid] == tar) {pos = mid; break;}
        if(idk[mid] < tar){
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    return pos;
}
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  sort(idk.begin(), idk.end());
//  cout << bs(4552) << '\n';
//  cout << idk.size()-1 << endl;
 // cout << lower_bound(idk.begin(), idk.end(), 40) -idk.begin() << endl;
  //cout << idk[lower_bound(idk.begin(), idk.end(), 40) -idk.begin()] << endl;
  //
   cout << idk.end() - idk.begin() << '\n';

}
