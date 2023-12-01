#include <bits/stdc++.h>
using namespace std;
struct Node {
    Node *links[256];
    bool flag = false;
    int cntEnd;
	int cntPrefix;

    bool containsKey(char ch) {
        return links[ch] != NULL;
    }

    void put(char ch, Node *node) {
        links[ch] = node;
    }

    Node *get(char ch) {
        return links[ch];
    }

    bool setEnd() {
        flag = true;
    }

    bool isEnd() {
        return flag;
    }  
    	void increaseEnd(){
		cntEnd++; 
	} 
	void increasePrefix(){
		cntPrefix++; 
	} 
	int getEnd(){
	     return cntEnd;	
	} 
	int getPrefix(){
		return cntPrefix; 
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
            node->increasePrefix(); 
        }
        node->increaseEnd(); 
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
     int countWordStartWith(string &word){
			 	Node *node=root;
				 for(int i=0;i<word.length();i++){
				 	if(node->containsKey(word[i])){
				 		node = node->get(word[i]); 
					 } else{
					 	return 0; 
					 } 
				 } 
				 return node->getPrefix();		 
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
    cout<<"\n"<<trie.search("abc"); 
    //--------------------------------------------------------//
     int m;
    cout<<"Nhap so luong dien thoai:";
    cin >> m;
    string *b;
	b = new string[m+5]; 
     for(int i=1;i<=m;i++){
     	cin>>b[i]; 
	 } 
     for(int i=1;i<=m;i++){
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

    return 0;
}

