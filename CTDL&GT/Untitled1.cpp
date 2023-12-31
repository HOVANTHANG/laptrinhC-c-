#include<bits/stdc++.h>
using namespace std;
template<class T>
struct node{
	T elem;
	node *left,*right;
	node(T e,node<T>*L=0,node<T>*R=0){
		elem=e;
		left=L;
		right=R; 
	} 
}; 
template<class T,class K=less<T>>
void add(node<T>*&H,T x,K cmp=less<T>()){
	if(!H) H= new node<T>(x);
	else if(H->elem==x) return;
	else {
		add(cmp(x,H->elem)?H->left:H->right,x,cmp); 
	} 
} 
template<class T>
T Max(node<T>*H){
	while(H->right){
		H=H->right; 
	} 
	return H->elem; 
} 
template<class T,class K=less<T>>
void remove(node<T>*&H,T x,K cmp=less<T>()){
	if(!H) return ;
	if(H->elem==x){
		node<T>*p=H;
		if(!H->left){
			H=H->right;
			delete p; 
		}else if(!H->right){
			H=H->left;
			delete p; 
		}else{
			H->elem= Max(H->left);
			remove(H->left,H->elem,cmp); 
		} 
	}else{
		remove(cmp(x,H->elem)?H->left:H->right,x,cmp); 
	} 
} 
template<class T>
void inorder(node<T>*H){
	if(!H) return ;
	inorder(H->left);
	cout<<H->elem<<" ";
	inorder(H->right); 
} 


int main(){
	node<int> *root = 0;
    for(int x:{25,46,425, 20, 86,155}) add(root, x);
    remove(root, 25);
   // PRINT(root);
   	inorder(root); 	
   	cout<<Max(root); 
} 
