#include<bits/stdc++.h>
using namespace std;
//#ifndef__cpp__ 

//Cay nhi phan la mot cau truc du lieu duoc dinh nghia de quy nhu sau:
//+ Moi cay rong la nhi phan(NULL)
//+ Mot cay gom goc va co tu 0 den 2 cay con moi cay con cung phai la 1 cay nhi phan
//(quy uoc cay trai left, cay phai right) 
//Vd: cay Heap
//+ cay Heap la cay nhi phan
//   + nut goc >= gia tri moi nut con
//   + cay con trai cung la Heap
//   + cay con phai cung la Heap
//Thao tac Them + Neu cay rong ->Tao cay
//              + Neu lon hon goc ->Them nut moi tren goc
//              + Nguoc lai ben nao it hon thi them
//Thao tac Bot +Luon luon bot goc 
//             +Neu chi co 1 con thi con do thanh goc
//             +Neu khong co con thi xoa luon caay
//             +Neu co 2 con thi chon con lon len goc,goi de quy xoa thang goc
template <class T>
struct node
{
	T elem; // du lieu
	int num; //so phan tu nut nay quan ly
	node<T> *left,*right;
	node(T e,node<T> *L=0,node<T>*R=0)
	{
		elem =e;
		left=L;
		right=R;
		num=1+(L?L->num:0) +(R?R->num:0);
	}
};
template<class T>
void add(node<T> *&H,T x)
{
	if(!H) H= new node<T>(x);
	else if(H->elem<x) H= new node<T>(x,H,0);
	else if(!H->left) {
	H->num++;	 H->left= new node<T>(x);}
	else if(!H->right){
	 H->num++;  H->right = new node<T>(x);
    }
	else {
	 add(H->left->num<H->right->num?H->left:H->right,x);
	 H->num++;
	}
}
template<class T>
void inorder(node<T> *H,string p="\n")
{
	if(H)
	{
		inorder(H->left,p+"\t");
		cout<<p<<H->elem;
		inorder(H->right,p+"\t");
	}
}
/*template<class T>
T count(node<T>*H){
	if(!H)return 0;
	return count(H->left)+count(H->right)+1; 
} 
template<class T>
void in(node<T>*H){
	if(!H) return ;
	cout<<H->num<<" ";
	
} 
template<class T>
T count_leaf(node<T>*H){
	if(!H) return 0;
	if(H->left==0&&H->right==0) return 1;
	return count_leaf(H->right)+count_leaf(H->left); 
} 
template<class T>
T sum_leaf(node<T>*H){
	if(!H) return 0;
	if(H->left==0&&H->right==0) return H->elem;
	return sum_leaf(H->right)+sum_leaf(H->left); 
} 
template<class T> 
T sum(node<T>*H){
	if(!H) return 0;
	return sum(H->left)+sum(H->right)+H->elem; 
} */
template<class T>
void remove(node<T> *&H)
{
	if(!H) return;
	if(H->num==1) {
		delete H;H=NULL;
	}
	else if(!H->left){
		node<T> *p =H;
		H=H->right;
		delete p;
	}else if(!H->right){
		node<T> *p = H;
		H=H->left;
		delete p;
	}else{
		H->num--; 
		if(H->left->elem<H->right->elem) {
			H->elem=H->right->elem;
			remove(H->right);
		}else{
			H->elem=H->left->elem;
			remove(H->left);
		}
	}
	
}
template<class T>
struct PQ  //priority=queue
{
  node<T> *root=0;
  PQ(){
  	root = 0;
  }
  int size(){
  	return root?root->num:0;
  }
  bool empty(){
  	return root==NULL;
  }
  T top(){
  	return root->elem;
  }
  void push(T x){
  	add(root,x);
  }
  void pop()
  {
  	remove(root);
  }
};
//#endif


int main()
{    int s=0; 
	node<int> *root = NULL;
	for(int x:{100,90,72,63,36,30,25,17,27,8,15}) add(root,x);
	cout<<"\nCay Heap:";inorder(root);
	remove(root);
	cout<<"\nCay Heap:";inorder(root);
	/*cout<<"\n";in(root); 
	cout<<"\n"<<count_leaf(root);
	cout<<"\n"<<sum_leaf(root); 
	cout<<"\n"<<count(root); 
	cout<<"\n"<<sum(root); */
	PQ<int> Q;
	for(int x:{100,63,36,30,25,17,8,96,102,57}) Q.push(x);
	cout<<"\n";
	while(Q.size()){
		cout<<Q.top()<<" ";
		Q.pop();
	}
	
}



