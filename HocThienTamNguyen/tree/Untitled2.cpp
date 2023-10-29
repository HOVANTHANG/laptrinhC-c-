#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *pleft;
	node *pright; 
}; 
void KhoiTao(node *&t){
	t=NULL; 
}
void ThemMoi(node *&t,int x){
	if(t==NULL) {
		node *newNode = new node();
		newNode->data=x;
		newNode->pleft=NULL;
		newNode->pright=NULL;
		t=newNode; 
	}else{
		if(t->data>x) {
		     ThemMoi(t->pleft,x) ;
		}else if(t->data<x) {
			ThemMoi(t->pright,x) ;
		}
	} 
}
void Duyet(node *t){
	if(t!=NULL){
		cout<<t->data<<" ";
		Duyet(t->pright) ;
		Duyet(t->pleft) ;
	}
}


int main(){
	node *x;
	for(int i=1;i<=6;i++) int k; cin>>k;ThemMoi(x,k);
	Duyet(x) ;
}
/*
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *pleft;
	node *pright; 
};

void KhoiTao(node *&t) 
{
	t=NULL; 
}

void ThemMoi(node *&t,int x)  
{
	if(t==NULL) {
		
		node *newNode = new node();
		newNode->data = x;
		newNode->pleft=NULL;
		newNode->pright=NULL;
		t=newNode; 
	}else{
		if(t->data>x) {
			ThemMoi(t->pleft,x);
		}else if(t->data<x) 
		{
			ThemMoi(t->pright,x) ;
		}
		
	} 
}
void Duyet(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NRL 
	}
}
void Duyet1(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NLR 
	}
}
void Duyet2(node *t) {
	if(t!=NULL) {
			Duyet(t->pright);
		     cout<<t->data <<" ";
				Duyet(t->pleft);
	}
}
void Duyet3(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NRL 
	}
}
void Duyet4(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NRL 
	}
}
void Duyet5(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NRL 
	}
}
void Duyet6(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NRL 
	}
}
int main(){
	node *x;

      for(int i=1;i<=6;i++) {
      	int k;
		  cin>>k; 
      	ThemMoi(x,k);
	  }
	 Duyet2(x);
}

*/
