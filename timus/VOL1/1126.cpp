#include <bits/stdc++.h>
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

#define oper max 
const int K = 15;

int st[K][1<<K];int n;  // K such that 2^K>n
void st_init(int *a){
	fore(i,0,n)st[0][i]=a[i];
	fore(k,1,K)fore(i,0,n-(1<<k)+1)
		st[k][i]=oper(st[k-1][i],st[k-1][i+(1<<(k-1))]);
}
int st_query(int s, int e){
	int k=31-__builtin_clz(e-s);
	return oper(st[k][s],st[k][e-(1<<k)]);
}
int x[1<<K];

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int m,i=0; cin >> m;
  while(cin >> x[i]){
    if(x[i] == -1){
      x[i] = 0;
      break;
    }else {
      i++;
    }
  }
  n = i;
//  fore(j, 0, i) cout << x[j] << ' '; cout << '\n';
  st_init(x);
  m--;
  for(int j =  0; j + m < i; j++){
    cout << st_query(j, j+1+m) << '\n';
  }
//  cout << st_query(3, 3+m) << '\n';

}
