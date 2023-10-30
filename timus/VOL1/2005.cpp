#include <bits/stdc++.h>
#include <vector>
#define fst first
#define snd second
#define fore(i, a, b) for (int i = a, ThxDem = b; i < ThxDem; ++i)
#define pb push_back
#define ALL(s) s.begin(), s.end()
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
#define MAXN 100000
#define debug(x) cout << #x << " = " << x << '\n'
const int INF = 1000000000;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int adj[6][6];
  vector<vector<int>> paths = {
      {0, 1, 2, 3, 4, 5}, {0, 1, 3, 2, 4, 5}, {0, 1, 3, 4, 2, 5}, {0, 1, 4, 3, 2, 5}};
  int n = 6;
  fore(i, 1, n) {
    fore(j, 1, n) { 
      cin >> adj[i][j]; 
    }
  }

  int min = 1000000000;
  int ind = 0;
  int j = 0;
  int sum = 0;

  for(auto curList: paths){
    sum = 0;
    for(int i = 2; i <= 5; i++){
      sum += adj[curList[i-1]][curList[i]];
    }
//    debug(sum);
    if(sum < min){
      ind = j;
      min = sum;
    }
    j++;
  }
  cout << min << '\n';
  for(int i = 1; i <= 5; i++) cout << paths[ind][i] << ' '; cout << '\n';

}
