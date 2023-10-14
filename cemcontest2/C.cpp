#include <bits/stdc++.h>

using namespace std;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n; cin >> n;
  multiset<int> nums;
  vector<int> inc, dec;
  int num;
  bool flag = false;
  for(int i = 0; i < n;i++) {
    cin >> num;
    nums.insert(num);
    if(nums.count(num)>2) flag = 1;
  }
  if(flag) cout << "NO\n";
  else{
    for(int i = 0; i < 1; i++){
      int ini = *nums.begin();
      inc.push_back(ini);
      nums.erase(nums.find(ini));
      while(1){
        if(nums.upper_bound(ini) == nums.end()) break;
        ini = *nums.upper_bound(ini);
        nums.erase(nums.find(ini));
        inc.push_back(ini);
      }
    }
    if(!nums.empty()){
        for(int i = 0; i < 1; i++){
        int ini = *nums.begin();
        dec.push_back(ini);
        nums.erase(nums.find(ini));
        while(1){
          if(nums.upper_bound(ini) == nums.end()) break;
          ini = *nums.upper_bound(ini);
          nums.erase(nums.find(ini));
          dec.push_back(ini);
        }
      }
      }


      if(nums.empty()){
        cout << "YES\n" << inc.size() << endl;;
        for(auto i: inc){
          cout << i << " ";
        }
        cout << endl;
        cout << dec.size() << endl;
        for(int i = dec.size()-1; i >= 0; i--){
          cout << dec[i] << " ";
        }
        cout << endl;

      }else{
        cout << "NO\n";
      }
  }



}

/*
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
*/
