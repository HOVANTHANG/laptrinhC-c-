#include <bits/stdc++.h>
using namespace std;
struct Node {
    Node *links[256];
    bool flag = false;
    bool containsKey(char ch) { //O(1) 
        return links[ch] != NULL;
    }

    void put(char ch, Node *node) { //O(1) 
        links[ch] = node;
    }

    Node *get(char ch) { // O(1) 
        return links[ch];
    }

    bool setEnd() { //O(1) 
        flag = true;
    }

    bool isEnd() { //O(1) 
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

    void Insert(string word) { //O(m)-Voi m la chieu dai cua xau can chen, do phai duyet qua tung ki tu va chen vao cay trie 
        Node *node = root;
        for (int i = 0; i < word.length(); i++) {
            if (!node->containsKey(word[i])) {
                node->put(word[i], new Node());
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }
    void  startsWith(string word) { //O(m) 
        Node *node = root;
        string tt =""; 
        for (int i = 0; i < word.length(); i++) {
            tt+=word[i]; 
            node = node->get(word[i]);
            if(node->isEnd()){
            	cout << "Xau tien to cho "<< word << " la: " <<tt << endl;
			} 
        }     
    } 
};
void kiemTra(int n,string *a){ //O(n*m)- voi n la so luong xau 
//m la chieu dai trung binh cua moi xau  
	 Trie trie;
   
    cout << "Nhap so luong xau:";
    cin>>n;
	a = new string[n+5]; 
     for(int i=1;i<=n;i++){
     	cin>>a[i];
		trie.Insert(a[i]);  
	 } 
     
     for (int i = 1; i <=n; i++) {
        cout << "Kiem tra xau tien to cho " <<a[i] << " la: " << endl;
        trie.startsWith(a[i]);
        cout << endl;
    }
} 
int main() {
   int n;
   string *a;
   kiemTra(n,a); 

    return 0;
}

