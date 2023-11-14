#include<bits/stdc++.h>
using namespace std;
struct Node {
	Node *links[26];
	bool flag =false; 
	bool containsKey(char ch)
	{
		return links[ch-'a']!=NULL; 
	 } 
	 void put(char ch,Node *node)
	 {
	 	links[ch-'a']=node; 
	  } 
	Node *get(char ch)
	{
		return  links[ch-'a']; 
	 } 
	 bool setEnd(){
	 	 flag=true; 
	 } 
	bool isEnd ()
	{
		return  flag; 
	}
}; 
class Trie{
	private:
	  Node *root; 
	public:
	     Trie()
		 {
		 	root = new Node(); 
		  } 
	  void Insert(string word)
	  {
	  	Node *node = root;
		  for(int i=0;i<word.length();i++)
		  {
		  	if(!node->containsKey(word[i]))
			  {
			  	node->put(word[i],new Node()) ;
			  	
			   } 
			   node->get(word[i]);
		   } 
		   node->setEnd(); 
	   } 
	   bool  search(string word)
	   {
	   	   Node *node=root;
			  for(int i=0;i<word.length();i++)
			  {
			  	if(!node->containsKey(word[i])) {
			  		return false; 
				  }
			  	node = node->get(word[i]); 
			  	
			   } 
			   return node->isEnd(); 
	   	
		} 
	   bool startsWith(string word)
	   {
	   	Node *node= root;
		   for(int i=0;i<word.length();i++)
		   {
		   	if(!node->containsKey(word[i])) {
			  		return false; 
				  }
				  node = node->get(word[i]) ;
			} 
			return true; 
	   	
		} 
	
}; 
int main(){
	Trie trie;

    // Th�m c�c x�u v�o c�y Trie
    trie.Insert("apple");
   

   cout<<(trie.startsWith("app"))<<endl;
    
    
    
    return 0;
  
}

