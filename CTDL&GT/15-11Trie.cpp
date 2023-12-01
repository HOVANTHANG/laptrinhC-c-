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
};
int main() {
    Trie trie;
   
    int n;
    cout << "Nhap xau so luong xau:";
    cin>>n;
    string *a;
	a = new string[n+5]; 
     for(int i=1;i<=n;i++){
     	cin>>a[i]; 
	 } 
     for(int i=1;i<=5;i++){
     	trie.Insert(a[i]); 
	 } 
     for (int i = 1; i <=n; i++) {
        cout << "Kiem tra xau tien to cho " <<a[i] << " la: " << endl;
        trie.startsWith(a[i]);
        cout << endl;
    }
    return 0;
}

