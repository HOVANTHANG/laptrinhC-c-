#include<bits/stdc++.h>
using namespace std;
template<class T>
struct node{
	T elem;
	node *left,*right;
	int num; 
	node(T e,node<T>*L=0,node<T>*R=0){
		elem=e;
		left=L;
		right=R; 
		num=1+(L?L->num:0)+(R?R->num:0); 
	} 
	
}; 
template<class T>
void add(node<T>*&H,T x){
	if(!H) H= new node<T>(x);
	else if(H->elem<x){
		H= new node<T>(x,H,0); 
	}else if(!H->left){
	H->num++;	H->left=new node<T>(x); 
	}else if(!H->right){
		H->num++;H->right=new node<T>(x); 
	} 
	else{
		add(H->left->num<H->right->num?H->left:H->right,x);
		H->num++; 
	} 
} 
template<class T>
T count_leaf(node<T>*H){
	if(!H) return 0;
	if(H->left==0&&H->right==0) return 1;
	return count_leaf(H->left)+count_leaf(H->right); 
} 
template<class T>
T sum(node<T>*H){
	if(!H) return 0;
	return sum(H->left)+sum(H->right)+H->elem; 
} 
template<class T> 
T sum_leaf(node<T>*H){
	if(!H) return 0;
	 if(H->left==0&&H->right==0) return H->elem;
	 return sum_leaf(H->left)+sum_leaf(H->right); 
} 



template<class T>
void inorder(node<T>*H){
	if(!H) return; 
	inorder(H->left);
	cout<<H->elem<<" ";
	inorder(H->right); 
} 
template<class T>
void remove(node<T>*&H){
	if(!H) return;
	if(H->num==1){
		delete H;H=NULL; 
	}else if(!H->left){
		node<T>*p=H;
		H=H->right;
		delete p; 
	}else if(!H->right){
		node<T>*p=H;
		H=H->left;
		delete p; 
	}else{
		H->num--;
		if(H->left->elem<H->right->elem){
			H->elem=H->right->elem;
			remove(H->right); 
		}else{
			H->elem=H->left->elem;
			remove(H->left); 
		} 
	} 
} 
int main(){
	 int s=0; 
	node<int> *root = NULL;
	for(int x:{100,90,72,63,36,30,25,17,27,8,15}) add(root,x);
	cout<<"\nCay Heap:";inorder(root);
	remove(root);
	cout<<"\nCay Heap:";inorder(root);
	cout<<"\n"<<count_leaf(root);
	cout<<"\n"<<sum(root); 
}


