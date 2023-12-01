#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct Node {
	Node *links[26];
	bool flag = false; 
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
	void printPrefix() {
        for (int i = 0; i < 26; i++) {
            if (root->links[i] != NULL) {
                cout << static_cast<char>('a' + i);
            }
        }
        cout << endl;
    }
}; 
int main(){
	Trie trie;
	int n;
	cout<<"Nhap so luong xau:";
	cin>>n;
	vector<string> vt;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		vt.push_back(s); 
		trie.Insert(s);
	}
	// In ra xau la tien to cua xau khac
    cout << "Xau la tien to cua xau khac: ";
    trie.printPrefix();
    cout << endl;
    
    
    
   
  
}


