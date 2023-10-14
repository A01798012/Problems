#include <bits/stdc++.h>

using namespace std;

int main(){
  //freopen("i.txt","r",stdin);
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n, t; cin >> t;
  int ai;
  while(t--){
    cin >> n;
    int maxi_rep= -1;
    map<int,int> students;
    set<int> jiji;
    jiji.clear();
    students.clear();
    for(int i = 0; i < n; i++) {
      cin >> ai;
      students[ai]++;
      jiji.insert(ai);
      maxi_rep = max(students[ai], maxi_rep);

    }
    int n_repe = n - jiji.size();
    n_repe = n - n_repe;
    //cout << n_repe << endl;
    if(n_repe == maxi_rep)n_repe--;
    //cout << n_repe << endl;
    if(n == 1) cout << 0 << endl;
    else if(n_repe == 0)
      cout << 1 << endl;
    else cout << min(maxi_rep, n_repe) << endl;
  }

}
