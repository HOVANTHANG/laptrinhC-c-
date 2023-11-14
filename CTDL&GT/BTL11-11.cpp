#include<bits/stdc++.h>
#include<vector>
using namespace std;
const int MaxN = 1 + 1e5;
int n, q;
class Node{
 public:
 int count;
 Node *next[26];
 Node(){
 count = 0;
 for(int i = 0 ; i < 26 ; ++i) next[i] = NULL;
 }
};
class Trie{
 Node *root;
 public:
 Trie(){
 root = new Node();
 }
 void Insert(string s){
		 Node *cur = root;
		 int len = s.length();
 		for(int i = 0 ; i < len ; ++i){
 		int idx = s[i] - 'a';
 		if(cur->next[idx] == NULL) cur->next[idx] = new Node();
		 cur->next[idx]->count++;
 		cur = cur->next[idx];
 }
 }
 int Query(string s){
		 Node *cur = root;
 		int len = s.length();
 		for(int i = 0 ; i < len ; ++i){
 		int idx = s[i] - 'a';
 		if(cur->next[idx] == NULL) return 0;
 		cur = cur->next[idx];
 		}
 return cur->count;
 }
 
} trie;
int main(){
	int dem=0;
	int n;
	cout<<"Nhap so uong xau:";
 cin >> n;
 
 vector<string> v;
 for(int i = 0 ; i < n ; ++i){
 string s;
 cin >> s;
 
 v.push_back(s);
 trie.Insert(s);
 }
 cout<<v.size();
 while(!v.empty()){
    	v.front();
 	v.pop_back();
}
 for(int i=0;i<n;i++){
 	for(int j=0;j<v.size();j++){
 		if(trie.Query(v[j])==0){
 			cout<<"\nXau "<<j<<" Khong la xau tien to cua xau nao ca!";
		 }
	 }
 }


 return 0;
}

