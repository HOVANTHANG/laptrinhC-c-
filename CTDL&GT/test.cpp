#include<bits/stdc++.h>
using namespace std;
template<class T> 
struct node{
	T elem;
	vector<node<T>*> child;
	node(T c){
		elem=c; 
	} 
}; 
template<class T>
void update(node<T>*&H,T f,T c){
	if(H->elem==f) H->child.push_back(new node<T>(c));
	else for(auto p:H->child) update(p,f,c); 
} 
template<class T> 
void inorder(node<T>*H){
	if(H->child.size()>0){
		inorder(H->child[0]); 
	}
	cout<<H->elem<<" ";
	for(int i=1;i<H->child.size();i++){
		inorder(H->child[i]); 
	} 
} 
template<class T>
void preorder(node<T>*H){
	if(!H) return; 
	cout<<H->elem<<" ";
	for(auto c:H->child) preorder(c); 
} 
template<class T>
T count(node<T>*H,T x){
	int res=0;
	if(!H) return 0;  
	for(auto c:H->child) res+=count(c,x);
	return res+(H->elem==x); 
} 
template<class T>
T sum(node<T>*H){
	if(!H) return 0; 
	T s=0;
	for(auto c:H->child) s+=sum(c);
	return s+(H->elem); 
} 
template<class T>
T hight(node<T>*H){
	if(!H) return 0; 
	if(H->child.size()==0){
		return 1; 
	} 
	int h=0; 
	for(auto c:H->child){
		h=max(h,hight(c)); 
	} 
	return h+1; 
} 
template<class T>
T maxchild(node<T>*H,T &res){
	for(auto c:H->child) maxchild(c,res);
	res=max(res,int(H->child.size())); 
} 
int main(){
	int n,s=0;
	int res=0; 
	node<int> *tree=NULL;
	cin>>n;
	while(--n){
		int f,c;
		cin>>f>>c;
		if(!tree) tree = new node<int>(f);
		update(tree,f,c); 
	} 
	inorder(tree); 
	cout<<"\n"; 
	preorder(tree);
	cout<<"\n"<<sum(tree); 
	cout<<"\n"<<count(tree,1); 
	cout<<"\n";maxchild(tree,res);
	cout<<res; 
	cout<<"\n"<<hight(tree); 
}


