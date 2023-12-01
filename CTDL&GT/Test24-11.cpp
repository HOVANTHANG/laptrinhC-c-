#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node *links[256];
	int cntPrefix=0;
	int cntEnd=0;
	
	bool containKey(char ch){
		return links[ch]!=NULL; 
	} 
	void put(char ch,Node *node){
		links[ch]=node; 
	} 
	Node*get(char ch){
		return links[ch]; 
	} 
	void increasePrefix(){
		cntPrefix++; 
	} 
	void increaseEnd(){
		cntEnd++; 
	} 
	int getPrefix(){
		return cntPrefix; 
	} 
	int getnd(){
		return cntEnd; 
	} 
	
}; 
class Trie{
	private:
	 Node *root;
	 public:
	 Trie(){
	 	root=new Node(); 
	 } 
	 void Insert(string word){
	 	Node *node = root;
	 	for(int i=0;i<word.length();i++){
	 		if(!node->containKey(word[i]))
			 {
			 	node->put(word[i],new Node()); 
			  }
			  node=node->get(word[i]);
			  node->increasePrefix(); 
		 } 
		 node->increaseEnd(); 
	 } 
	 int CountStartWith(string word){
	 	Node *node = root;
		 for(int i=0;i<word.length();i++){
		 	if(node->containKey(word[i])){
		 		node=node->get(word[i]); 
			 }else{
			 	return 0; 
			 } 
		 } 
		return  node->cntPrefix; 
	 } 	 
}; 
void KiemTra(int n,string *b){
	Trie trie;
	cout<<"Nhap n:";cin>>n;
	b= new string[n+5];
	for(int i=0;i<n;i++){
		cin>>b[i];
		trie.Insert(b[i]); 
	} 
	for(int i=0;i<n;i++){
		if(trie.CountStartWith(b[i])==n){
			cout<<"So "<<b[i]<<" la so dien thoai tien to cua cac so con lai!"; 
		} 
	} 
} 

int main(){
	int n;
	string *b;
	KiemTra(n,b); 
	
}
