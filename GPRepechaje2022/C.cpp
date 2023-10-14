#include <bits/stdc++.h>
using namespace std;
vector< long long> scores;
vector<long long> sums;
int N;
int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  long long M,s, q; cin >> N >> M;
  scores.resize(N);
  sums.resize(N);
  cin >> scores[0];
  for( long long i = 1; i < N; i++){ cin >> scores[i];}
  sort(scores.begin(), scores.end());

  sums[0] = scores[0];
  for(int i = 1; i < N; i++) sums[i] = sums[i-1] + scores[i];
  while(M--){
    cin >> q;
    long long total = 0;
    int point = (upper_bound(scores.begin(), scores.end(), q) - scores.begin());
    //cout << "p: " << point << '\n';
    if(q < scores[0]){
      total += q*N;
    }else if (point < N){
        total+= sums[point-1];
        total+= (N-point)*q;
    }else{
      total+= sums[N-1];
    }
    cout <<  total << '\n';

  }
  return 0;

}
