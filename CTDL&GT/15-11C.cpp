#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node *links[256];
	int cntEnd;
	int cntPrefix ;
	bool containsKey(char ch){
		return links[ch]!=NULL; 
	} 
	void put(char ch,Node *node){
		links[ch]=node; 
	} 
	Node *get(char ch){
		return links[ch]; 
	} 
	void increaseEnd(){
		cntEnd++; 
	} 
	void increasePrefix(){
		cntPrefix++; 
	} 
	void reducePreFix(){
		cntPrefix--; 
	} 
	void deleteEnd(){
		cntEnd--; 
	} 
	int getEnd(){
	     return cntEnd;	
	} 
	int getPrefix(){
		return cntPrefix; 
	} 
	
}; 
class Trie{
	private:
	  Node*root;
	 public:
	 		Trie(){
	 			root=new Node(); 
			 } 
			 
			 void Insert(string word){
			 	Node *node = root;
				 for(int i=0;i<word.length();i++){
				 	if(!node->containsKey(word[i])){
				 		node->put(word[i],new Node()); 
					 } 
					node= node->get(word[i]); 
					 node->increasePrefix(); 
				 } 
				  node->increaseEnd(); 
			 } 
			 int  countwordequalTo(string &word) {
			 	Node *node = root;
				 for(int i=0;i<word.length();i++){
				 	if(node->containsKey(word[i])){
				 		node = node->get(word[i]); 
					 }else{
					 	return 0; 
					 } 
				 }
				 return node->getEnd(); 
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
			 void erase(string &word) {
			 	Node *node = root;
				 for(int i=0;i<word.length();i++){
				 	if(node->containsKey(word[i])){
				 	node = node->get(word[i]); 
				 	node->reducePreFix(); 
					 }else{
					 	return ; 
					 } 
				 }
				 node->deleteEnd(); 		  
			 }			 
}; 
int main(){
	  Trie trie; 
    //-------------------------------------------------------------------
    int m;
    cout<<"Nhap so luong dien thoai:";
    cin >> m;
     vector<string> SoDT (m);
     for (string &y : SoDT){
        cin >>y; 
     }
     for (string DT : SoDT) {
        trie.Insert(DT);
    }
    int dem=0; 
    for (int i = 0; i < SoDT.size(); i++) {
      if(trie.countWordStartWith(SoDT[i])==SoDT.size()){
      	dem++; 
      	cout<<"\nSo "<<SoDT[i]<<" la so tien to cua cac so con lai!"; 
	  }  
    }
    if(dem==0){
    	cout<<"\nkhong ton tai xau nao ca!" ;
	} 

    return 0;
}


