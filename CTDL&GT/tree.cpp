#include<bits/stdc++.h>
#include<vector>
using namespace std;
//Tree-cau truc du lieu phi tuyen
//cac ung dung
//+To chuc bieu do
//+He thong file
//+
struct node{
	int elem;
	vector<node*> child;
	node(int n){
		elem=n;
		for(int a=1;a*a<=n;a++)
		if(n%a==0){
			int m=(a-1)*(n/a+1);
			child.push_back(new node(m));
		}
	}
};
void preorder(node *H){
	if(!H) return;
	cout<<H->elem<<" ";
	for(auto c:H->child) preorder(c);
}
void postorder(node *H){
	if(!H) return;
		for(auto c:H->child) postorder(c);
	     cout<<H->elem<<" ";
}
void inorder(node *H){
	if(!H) return;
	if(H->child.size()>0){
		inorder(H->child[0]);
	}
		cout<<H->elem<<" ";
			for(int i=1;i<H->child.size();i++) inorder(H->child[i]);
		
}
int hight(node *H){
	if(!H) return 0;
	if(H->child.size()==0) return 1;
	int h=0;
	for(auto c:H->child){
		h=max(h,hight(c));
	}
	return h+1;
}
int sum(node *H){
	if(!H) return 0;
	int s=0;
	for(auto c:H->child) s+=sum(c);
	return s+H->elem;
}
void maxchild(node *H,int &res){
	for(auto c:H->child) maxchild(c,res);
    res=max(res,int(H->child.size()));
}
int main(){
	node *root = new node(20);
	preorder(root);cout<<"\n";
	inorder(root);cout<<"\n";
	postorder(root);
	cout<<"\nChieu cao:";cout<<hight(root);
	cout<<"\nTong cay:";cout<<sum(root);
	int res=0;
	maxchild(root,res);
	cout<<"\nCon donh nhat:";cout<<res;
}


