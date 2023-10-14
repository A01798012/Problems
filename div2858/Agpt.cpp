
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long dx = abs(c - a);
        long long dy = abs(d - b);

        if(dx == 0 && dy == 0) {
            cout << "0\n";
        } else if(dx == dy) {
            cout << dx << endl;
        } else if((dx % 2 == 0 && dy % 2 == 0) || (dx % 2 == 1 && dy % 2 == 1)) {
            cout << "2\n";
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}
