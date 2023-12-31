#include<bits/stdc++.h>
using namespace std;
template<class T>
struct node{
	T elem;
	vector<node<T>*> child;
	node(T e){
		elem=e; 
	} 
}; 
template<class T>
void update(node<T>*&H,T f,T c){
	if(H->elem==f) H->child.push_back(new node<T>(c));
	else for(auto x:H->child) update(x,f,c); 
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
void hight1(node<T>*H,T &h){
	if(!H) return ;
	for(auto c:H->child) h=max(h,hight1(c,h));
	h=h+1;
}
template<class T>
void preorder(node<T>*H){
	if(!H) return ;
	cout<<H->elem<<" ";
	for(auto c:H->child) preorder(c); 
} 
/*template<class T>
T count(node<T>*H,T x){
	if(!H)  return 0;
	T res=0; 
	for(auto c:H->child)  res+=count(c,x);
	return res+(H->elem==x); 
}*/
template<class T>
void count(node<T>*H,T x,T &res){
	if(!H) return ;
	if(H->elem==x) res++;
	for(auto c:H->child) count(c,x,res);
} 
template<class T>
T sum(node<T>*H){
	if(!H) return 0;
	T s=0;
	for(auto x:H->child) s+=sum(x);
	return s+H->elem; 
} 
template<class T>
T high(node<T>*H){
	if(!H)return 0;
	int h=0;
	for(auto x:H->child) h=max(h,high(x));
	return h+1; 
}
template<class T>
T maxchild(node<T>*H){
	T res=H->child.size();
	for(auto x:H->child) 
	{
	T num=maxchild(x); 
	res=max(res,num); }
	return res; 
} 



int main(){
int n,s=0;
	int res=0,high=0; 
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
	//cout<<"\n"<<count(tree,1); 
	count(tree,1,res);
	cout<<"\n"<<res;
	cout<<"\n";cout<<maxchild(tree); 
	//cout<<"\n"<<high(tree); 
	cout<<"\n";hight1(tree,high);
	cout<<high;
} 
