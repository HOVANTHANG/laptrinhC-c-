#include <iostream>
#include <unordered_map>

using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool is_end_of_word;

    TrieNode() : is_end_of_word(false) {}
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }

    void insert(const string& word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (node->children.find(ch) == node->children.end()) {
                node->children[ch] = new TrieNode();
            }
            node = node->children[ch];
        }
        node->is_end_of_word = true;
    }

    bool hasPrefix(const string& word) {
        TrieNode* node = root;
        for (char ch : word) {
            node = node->children[ch];
            if (!node) {
                return false;  // Không có ti?n t?
            }
        }
        return true;  // Có ti?n t?
    }

    string findPrefix() {
        for (auto& entry : root->children) {
            if (isUniquePrefix(entry.second)) {
                return entry.first + findPrefixHelper(entry.second);
            }
        }
        return "";
    }

    bool isUniquePrefix(TrieNode* node) {
        return node->children.size() == 1 && !node->is_end_of_word;
    }

    string findPrefixHelper(TrieNode* node) {
        string result;
        while (node && node->children.size() == 1 && !node->is_end_of_word) {
            auto entry = node->children.begin();
            result += entry->first;
            node = entry->second;
        }
        return result;
    }

private:
    TrieNode* root;
};

int main() {
    Trie trie;

    // Danh sách s? ði?n tho?i
    string phoneNumbers[] = {"0123456789", "0123", "456789", "01234", "56789"};
    int n = sizeof(phoneNumbers) / sizeof(phoneNumbers[0]);

    // Chèn s? ði?n tho?i vào Trie
    for (int i = 0; i < n; ++i) {
        trie.insert(phoneNumbers[i]);
    }

    // Ki?m tra và in k?t qu?
    string prefix = trie.findPrefix();
    if (!prefix.empty()) {
        cout << prefix << " là ti?n t? c?a các s? c?n l?i." << endl;
    } else {
        cout << -1 << endl;  // Không có ti?n t?, in -1
    }

    return 0;
}

