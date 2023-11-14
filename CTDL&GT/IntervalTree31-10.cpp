#include<bits/stdc++.h>
using namespace std;
//truy van max
//Interval tree
//Bt cho a1,a2,...an
//co m truy van L,R tim max (al,...aR)
struct node{
	int elem,L,R; //elemen=max(aL.....aR-1)
	node *left,*right;
	node(int a,int b)
	{
		elem=INT_MIN;
		L=a;
		R=b;
		if(a+1==b) left=right=NULL;
		else{
			left= new node(a,(a+b)/2); right= new node((a+b)/2,b);
		}
	}
};
void Update(node *H,int k,int x)
{
	H->elem=max(H->elem,x);
	if(H->L+1<H->R) Update(k<H->left->R?H->left:H->right,k,x);
	
	
	
}
int get(node *H,int u,int v)
{
	if(H->L==u && H->R==v) return H->elem;
	if(H->left->R>=v) return get(H->left,u,v);
	if(H->right->L<=u) return get(H->right,u,v);
	return max(get(H->left,u,H->left->R),get(H->right,H->right->L,v));
}

int main(){
	int n,a,m,u,v;
	cin>>n;
	node *root = new node(1,n+1);
	for(int i=1;i<=n;i++){
		cin>>a;
		Update(root,i,a);
	}
	cin>>m;
	while(m--){
		cin>>u>>v;
		cout<<get(root,u,v+1)<<"\n";
	}
}


