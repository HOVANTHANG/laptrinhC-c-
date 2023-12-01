#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node *links[26];
	bool flag=false;
	bool Containkey(char ch){
		return links[ch-'a']!=NULL;
	}
	bool put(char ch,Node *node){
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
			root = new Node();
		}
		void Insert(string word){
			Node *node = root;
			for(int i=0;i<word.length();i++){
				if(!node->Containkey(word[i])){
					node->put(word[i],new Node());
				}
					node=node->get(word[i]);
			}
			node->setEnd();
		}
		bool checkIfprefixExists(string word){
			Node *node=root;
			for(int i=0;i<word.length();i++){
				if(node->Containkey(word[i])){			
					if(node->isEnd()==false) {
						return false;
						}
				}
				return false;
				node=node->get(word[i]);
			}
			return true;
		}
			
};
void completeString(vector<string>&a){
			Trie trie;
			for(auto &it: a){
				cin>>it;
				trie.Insert(it);
			}
			string longest="";
			for(auto &it:a){
				if(trie.checkIfprefixExists(it)){
					if(it.length()>longest.length()){
						longest=it;
					}else if(it.length() ==longest.length() && it<longest){
							longest=it;
					}
				}
			}
			if(longest==""){
				cout<<"None";
			}else{
				cout<<longest<<endl;
			}
}
int main(){
	vector<string> a;
	int n;
	cout<<"Nhap so luong xau:";
	cin>>n;
	a.resize(n,"");
	completeString(a);
}


