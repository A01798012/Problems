
#include<bits/stdc++.h>
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
using namespace std;
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
    for (int i = 1; i < (int)x.size(); i++) {
        if (x[i] - x[i - 1] != 1) return;
    }
    for (int i : a) cout << i << " ";
    cout << endl;
}

int main () {
  int myints[] = {1,2,3};

  std::sort (myints,myints+3);

  std::cout << "The 3! possible permutations with 3 elements:\n";
  do {
    std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while ( std::next_permutation(myints,myints+3) );

  std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

  return 0;
}
