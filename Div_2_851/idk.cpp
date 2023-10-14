#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl
typedef long long ll;
typedef pair<int, int> pii;
#define maxn 105
vector<int> a[maxn];

void test(vector<int>& a) {
    // Match pairs
    vector<int> x;
    set<int> num;
    for (int i = 0; i < a.size(); i+=2) {
        x.push_back(a[i] + a[i + 1]);
        if (num.count(a[i] + a[i + 1])) return;
        num.insert(a[i] + a[i + 1]);
    }
    sort (x.begin(), x.end());
    int diff = 1;
    for (int i = 1; i < x.size(); i++) {
        if (x[i] - x[i - 1] != 1) return;
    }
    for (int i : a) cout << i << " ";
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    do {
        test(a);
    } while (next_permutation(a.begin(), a.end()));
}

int main() {
    int t = 1;
    while (t--) solve();
    return 0;
}
