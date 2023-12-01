#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node *links[26];
	bool flag=false;
	
	bool ContainerKey(char ch){
		return links[ch-'a']!=NULL; 
	} 
	void put(char ch,Node *node){
		links[ch-'a']=node; 
	} 
	Node *get(char ch){
		return links[ch-'a']; 
	} 
	void setEnd(){
		flag=true; 
	} 
	bool isEnd(){
		return flag; 
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
				Node *node=root;
				for(int i=0;i<word.length();i++){
					if(!node->ContainerKey(word[i])){
						node->put(word[i],new Node()); 
					} 
					node=node->get(word[i]); 
				} 
				node->setEnd(); 
			} 
			
			bool Check(string word){
				Node *node=root;
				bool flag=true; 
				for(int i=0;i<word.length();i++){			
					if(node->ContainerKey(word[i])){
						node=node->get(word[i]); 
						if(node->isEnd()==false){
								return false; 
						} 		
					}
				} 
				 return true; 
			} 
}; 

void complete(){
	Trie trie;
	int n;
	cout<<"Nhap so xau:";cin>>n; 
	string *a; 
	a = new string[n+5]; 
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	} 
	for(int i=1;i<=n;i++){
		trie.Insert(a[i]); 
	} 
	string longest=""; 
	for(int i=1;i<=n;i++){
		if(trie.Check(a[i])){
			if(a[i].length()> longest.length()){
				longest=a[i]; 
			} else if(a[i].length()==longest.length() && a[i]<longest){
				longest=a[i]; 
			} 
		} 
	} 
	if(longest==""){
		cout<<"None"; 
	}else{
		cout<<longest; 
	} 
} 
int main(){
	complete(); 
}


