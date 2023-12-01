#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct Node {
    Node* links[10];
    bool flag = false;

    bool containsKey(char ch) {
        return links[ch - '0'] != NULL;
    }

    void put(char ch, Node* node) {
        links[ch - '0'] = node;
    }

    Node* get(char ch) {
        return links[ch - '0'];
    }

    bool setEnd() {
        flag = true;
    }

    bool isEnd() {
        return flag;
    }
};
class Trie {
private:
    Node* root;

public:
    Trie() {
        root = new Node();
    }

    void insert(string number) {
        Node* node = root;
        for (int i = 0; i < number.length(); i++) {
            if (!node->containsKey(number[i])) {
                node->put(number[i], new Node());
            }
            node = node->get(number[i]);
        }
        node->setEnd();
    }

    void findPrefixes(string current, Node* node) {
        if (node->isEnd()) {
            cout << current << " ";
        }

        for (int i = 0; i < 10; i++) {
            if (node->links[i] != NULL) {
                findPrefixes(current + to_string(i), node->links[i]);
            }
        }
    }

    void findPrefixes() {
        for (int i = 0; i < 10; i++) {
            if (root->links[i] != NULL) {
                findPrefixes(to_string(i), root->links[i]);
            }
        }
    }
};

int main() {
    Trie trie;
    int n;
    cout << "Nhap so luong so dien thoai: ";
    cin >> n;

    cout << "Nhap cac so dien thoai: ";
    for (int i = 0; i < n; i++) {
        string number;
        cin >> number;
        trie.insert(number);
    }

    cout << "Cac so la tien to cua so khac: ";
    trie.findPrefixes();
    cout << endl;

    return 0;
}
