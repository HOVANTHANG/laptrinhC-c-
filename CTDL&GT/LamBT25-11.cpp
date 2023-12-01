#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node *links[2];
}; 
class Trie{
	private:
		Node *root;
	public:
		Trie(){
			root = new Node(); 
		} 
		void insert(int num){
			Node *node = root;
			for(int i=31;i>=0;i--){
				 int bit =(num>>i)&1;
				 if(!node->links[bit]){
				 	Node *newNode= new Node();
					 node->links[bit]=newNode; 
				 }
				 node = node->links[bit];  
			} 
		}
		int findMax(int num){
			Node *node=root;
			int maxNum=0; 
			for(int i=31;i>=0;i--){
				int bit = (num>>i)&1;
				if(node->links[!bit]){
					maxNum=maxNum|(1<<i);
					node=node->links[!bit]; 
				}else{
					node=node->links[bit]; 
				} 
			}
			return maxNum; 
		} 		 
}; 

int main(){
	Trie trie; 
	int a[]={5,6,9,7,5,41,54,56,543,532,543,543,54,234};
	 for(int x:a){
	 	trie.insert(x); 
	 } 
	 cout<<trie.findMax(8); 
} 
