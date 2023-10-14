#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl
typedef long long ll;
typedef pair<int, int> pii;
#define maxn 105
#define SZ(a) (int) a.size()

void solve() {
    multiset<ll> m;
    int n;
    cin >> n;
    ll total = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x == 0) {
            if (SZ(m)) {
                auto maximum = m.end();
                maximum--;
                total += (*maximum);
                m.erase(maximum);
                // debug(SZ(m));
            }
        } else {
            m.insert(x);
        }
    }
    cout << total << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    multiset<int> prueba;
    prueba.insert(1);
    prueba.insert(1);
    prueba.insert(1);
    prueba.insert(1);
    for(auto i: prueba) cout << i << " ";
    cout << endl;
    auto max = prueba.end();
    max--;
    prueba.erase(max);
    for(auto i: prueba) cout << i << " ";
    cout << endl;
    exit(0);

    int t;
    cin >> t;

    while (t--) solve();
    return 0;
}
