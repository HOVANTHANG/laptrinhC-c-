#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

struct TrieNode {
  bool isEnd;
  unordered_map<char, TrieNode*> children;
};

class Trie {
  private:
    TrieNode* root;

  public:
    Trie() {
      root = new TrieNode;
      root->isEnd = false;
    }

    void insert(string number) {
      TrieNode* node = root;
      for (char digit : number) {
        if (node->children.find(digit) == node->children.end()) {
          node->children[digit] = new TrieNode;
        }
        node = node->children[digit];
      }
      node->isEnd = true;
    }

    bool isPrefix(string number) {
      TrieNode* node = root;
      for (char digit : number) {
        if (node->children.find(digit) == node->children.end()) {
          return false;
        }
        node = node->children[digit];
      }
      return node->isEnd;
    }
};

string findPrefix(auto numbers) {
  Trie trie;
  for (string number : numbers) {
    trie.insert(number);
  }

  for (string number : numbers) {
    if (trie.isPrefix(number)) {
      return number;
    }
  }
  return "";
}

int main() {
  vector<string> numbers = {"123456", "123", "12345"};
  string prefix = findPrefix(numbers);
  cout << "Prefix: " << prefix << endl;

  return 0;
}

