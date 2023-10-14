#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    multiset<int> a;
    a.insert(1);
    a.insert(1);
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(3);
    a.insert(2);
    a.insert(2);
    a.insert(7);
    a.insert(9);
    for(auto i: a){
        cout << i << " ";
    }
    cout << '\n';
    cout << a.count(2) << '\n';
    cout << a.count(1) << '\n';
    cout << a.count(7) << '\n';
    cout << "s: " << a.size() << '\n';
    a.erase(a.find(2));
    a.erase(a.find(2));
    a.erase(a.find(2));
    a.erase(a.find(1));
    a.erase(a.find(1));
    a.erase(a.find(1));
    a.erase(a.find(7));
    a.erase(a.find(9));
    a.erase(a.find(3));
    a.erase(a.find(3));
    cout << "=============\n";
    cout << a.count(2) << '\n';
    cout << a.count(1) << '\n';
    cout << a.count(7) << '\n';
    cout << "s: " << a.size() << '\n';
}
