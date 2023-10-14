#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl

int main(){

    cin.tie(0); ios_base::sync_with_stdio(0);

    #ifdef ITC
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n';
    #endif


    int d1,m1,y1,n,d2,m2,y2;

    cin>>d1>>m1>>y1>>n>>d2>>m2>>y2;

    int days1= y1*360 + m1*30 + d1;
    int days2= y2*360 + m2*30 + d2;

    int differenceDays = days2-days1;

    int ans = (n+differenceDays)%7;

    if (ans==0) ans=7;
    cout<<ans << '\n';



}
