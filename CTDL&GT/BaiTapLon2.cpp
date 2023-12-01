#include <bits/stdc++.h>
using namespace std;
struct Node {
    Node *links[256];
    int cntEnd;
	int cntPrefix;

    bool containsKey(char ch) { //O(1) 
        return links[ch] != NULL;
    }

    void put(char ch, Node *node) {//O(1) 
        links[ch] = node;
    }

    Node *get(char ch) { //O(1) 
        return links[ch];
    }
   	void increaseEnd(){ //O(1) 
		cntEnd++; 
	} 
	void increasePrefix(){ //O(1) 
		cntPrefix++; 
	} 
};
class Trie {
private:
    Node *root;

public:
    Trie() {
        root = new Node();
    }

    void Insert(string word) {//O(m)- m la do dai tu duoc chen vao 
        Node *node = root;
        for (int i = 0; i < word.length(); i++) {
            if (!node->containsKey(word[i])) {
                node->put(word[i], new Node());
            }
            node = node->get(word[i]);
            node->increasePrefix(); 
        }
        node->increaseEnd(); 
    }
     int countWordStartWith(string &word){ //O(m) 
			 	Node *node=root;
				 for(int i=0;i<word.length();i++){
				 	if(node->containsKey(word[i])){
				 		node = node->get(word[i]); 
					 } else{
					 	return 0; 
					 } 
				 } 
				 return node->cntPrefix;		 
			 }
};
void KiemTra(int m,string *b){ //O(m*n) 
		Trie trie;
	cout<<"Nhap so luong dien thoai:";
    cin >> m;
	b = new string[m+5]; 
     for(int i=1;i<=m;i++){
     	cin>>b[i]; 
     	trie.Insert(b[i]); 
	 } 
    int dem=0; 
    for (int i = 0; i <=m; i++) {
      if(trie.countWordStartWith(b[i])==m){
      	dem++; 
      	cout<<"\nSo "<<b[i]<<" la so tien to cua cac so con lai!"; 
	  }  
    }
    if(dem==0){
    	cout<<"\nkhong ton tai xau nao ca!" ;
	} 
	} 
int main() {
   int m;
   string *b;
   KiemTra(m,b);

    return 0;
}

