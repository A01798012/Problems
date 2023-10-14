#include <bits/stdc++.h>
using namespace std;
string idk = "123";
int n = idk.size();
void perm(string &idk){
  int cnt = 1;
  do{
    cout << cnt << ": ";
    cout << idk << '\n';
    cnt++;
  }while(next_permutation(idk.begin(), idk.end()));

}
void rec_perm(int i){
  if(i == n){
    cout << idk << endl;
  }else{
    for(int j = i; j < n; j++){
      swap(idk[j], idk[i]);
      rec_perm(i+1);
      swap(idk[j], idk[i]);
    }
  }
}
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  //perm(idk);
  rec_perm(0);

}
