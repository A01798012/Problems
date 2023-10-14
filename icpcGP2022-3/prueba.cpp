#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ThxDem=b;i<ThxDem;++i)
#define pb push_back
#define ALL(s) s.begin(),s.end()
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  multiset<int> kk;

  kk.insert(1);
  kk.insert(3);
  kk.insert(3);
  kk.insert(2);
  kk.insert(5);

  while(!kk.empty()){
      int m = *(--kk.end());
      cout << m <<' ';
      kk.erase(kk.find(m));
      m--;
      cout << m <<'\n';
  }
  long long n = 1e18;
  long long m = 1e8;
  for(long long i = 0;i < n; i++) m = min(m, i);

}
