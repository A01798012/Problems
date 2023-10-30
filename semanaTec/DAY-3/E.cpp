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
struct Node {
  int val;
  Node *l;
  Node *r;
  Node(int v) {
    val = v;
    l = nullptr;
    r = nullptr;
  }
};
struct BST {
  Node *root;
  BST() { root = nullptr; }
  void insert(int v) {
    if (this->root == nullptr) {
      this->root = new Node(v);
      return;
    } else {
      insert(this->root, v);
    }
  }
  void insert(Node *n, int v) {
    //    debug((n->val > v));
    if (v > n->val) {
      if (n->r == nullptr) {
        n->r = new Node(v);
        return;
      } else {
        insert(n->r, v);
      }
    } else {
      if (n->l == nullptr) {
        n->l = new Node(v);
        return;
      } else {
        insert(n->l, v);
      }
    }
  }
  void inOrder(Node *n) {
    if (n == nullptr)
      return;
    cout << n->val << ' ';
    inOrder(n->l);
    inOrder(n->r);
  }
  void preOrder(Node *n) {
    if (n == nullptr)
      return;
    preOrder(n->l);
    cout << n->val << ' ';
    preOrder(n->r);
  }
  void postOrder(Node *n) {
    if (n == nullptr)
      return;
    postOrder(n->l);
    postOrder(n->r);
    cout << n->val << ' ';
  }
};

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int> t(n);
  BST *tree = new BST();
  // tree->insert(5);
  // tree->insert(2);

  fore(i, 0, n) {
    cin >> t[i];
    tree->insert(t[i]);
  }

  tree->inOrder(tree->root);
  cout << '\n';
  tree->preOrder(tree->root);
  cout << '\n';

  // debug(tree->root->val);
  //debug(tree->root->l->l->val);
  tree->postOrder(tree->root);
  cout << '\n';
}
