#include <bits/stdc++.h>
#include<vector>
using namespace std;

struct Node {
    Node *links[26];
    bool flag = false;

    bool containsKey(char ch) {
        return links[ch - 'a'] != NULL;
    }

    void put(char ch, Node *node) {
        links[ch - 'a'] = node;
    }

    Node *get(char ch) {
        return links[ch - 'a'];
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
    Node *root;

public:
    Trie() {
        root = new Node();
    }

    void Insert(string word) {
        Node *node = root;
        for (int i = 0; i < word.length(); i++) {
            if (!node->containsKey(word[i])) {
                node->put(word[i], new Node());
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }

    bool search(string word) {
        Node *node = root;
        for (int i = 0; i < word.length(); i++) {
            if (!node->containsKey(word[i])) {
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }

    void  startsWith(string word) {
        Node *node = root;
        string tt =""; 
        for (int i = 0; i < word.length(); i++) {
            if (!node->containsKey(word[i])) {
            	cout<<"Khong co xau tien to cho xau nay:"<<word<<endl; 
                return ;
            }
            tt+=word[i]; 
            node = node->get(word[i]);
            if(node->isEnd()){
            	cout << "Xau tien to cho "<< word << " la: " <<tt << endl;
			} 
        }
      
    }
   
    bool isUniquePrefix(const string& word) {
        Node* node = root;
        for (char ch : word) {
            node = node->get(ch);
            if (!node->containsKey(ch)) {
                return false;
            }
        }
        return true;
    }
      
    
};

int main() {
    Trie trie;

    // Danh sách s? ði?n tho?i
    string phoneNumbers[] = {"0123456789", "0123", "456789", "01234", "56789"};
    int n = sizeof(phoneNumbers) / sizeof(phoneNumbers[0]);

    // Chèn s? ði?n tho?i vào Trie
    for (int i = 0; i < n; ++i) {
        trie.Insert(phoneNumbers[i]);
    }

    // Ki?m tra và in k?t qu?
    for (int i = 0; i < n; ++i) {
        if (trie.isUniquePrefix(phoneNumbers[i])) {
            cout << phoneNumbers[i] << " là ti?n t? c?a các s? c?n l?i." << endl;
        } else {
            cout << phoneNumbers[i] << " không ph?i là ti?n t? c?a các s? c?n l?i." << endl;
        }
    }

    return 0;
    

   

    return 0;
}

