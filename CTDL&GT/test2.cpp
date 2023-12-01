#include <iostream>
#include <string>

using namespace std;

struct Node {
  bool isEnd;
  Node *children[10];

  Node() {
    isEnd = false;
    for (int i = 0; i < 10; i++) {
      children[i] = nullptr;
    }
  }
};

void insert(Node *root, const string &s) {
  Node *node = root;
  for (char c : s) {
    if (node->children[c - '0'] == nullptr) {
      node->children[c - '0'] = new Node();
    }
    node = node->children[c - '0'];
  }
  node->isEnd = true;
}

bool hasPrefix(Node *root, const string &s) {
  Node *node = root;
  for (char c : s) {
    if (node->children[c - '0'] == nullptr) {
      return false;
    }
    node = node->children[c - '0'];
  }
  return node->isEnd;
}

int main() {
  int n;
  cin >> n;
   string s[100]; 
  Node *root = new Node();
  for (int i = 0; i < n; i++) {
    
    cin >> s[i];
    insert(root, s[i]);
  }

  // Duy?t theo c?u tr�c Trie
  for (int i = 0; i < n; i++) {
    if (hasPrefix(root, s[i])) {
      cout << "C�" << endl;
      return 0;
    }
  }

  // Kh�ng c� x�u n�o l� ti?n t? c?a x�u n�o
  cout << "Kh�ng" << endl;

  return 0;
}

