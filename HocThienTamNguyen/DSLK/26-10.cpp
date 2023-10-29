#include<bits/stdc++.h> 
using namespace std;
struct node{
	int data;
	node *next; 
}; 
struct List{
	node *phead;
	node *ptrail; 
}; 

void makeList(List &l) {
	l.phead=NULL;
	l.ptrail=NULL; 
}
node *makeNode(int x) 
{
	node *newNode = new node() ;
	newNode->data=x;
	newNode->next=NULL; 
}

void pushFront(List &l,int x) {
	node *newNode = makeNode(x) ;
	if(l.phead==NULL) {
		l.phead=l.ptrail=newNode; 
	}else {
		newNode->next=l.phead;
		l.phead=newNode; 
	} 
}
void pushBack(List &l,int x) {
	node *newNode = makeNode(x) ;
	if(l.phead==NULL) {
		l.phead=l.ptrail=newNode; 
	}else{
		l.ptrail->next = newNode;
		l.ptrail=newNode; 
	} 
}

void Themmoi(List &l,int x ) {
	node *p = makeNode(x) ;
	int k;
	cout<<"\nNhap vao gia tri cua q:" ;cin>>k;
	node *q = makeNode(k);
	if(l.phead==NULL) pushFront(l,x) ;
	for(node *i = l.phead;i!=NULL;i=i->next) {
		if(i->data == p->data) {
			node *temp= makeNode(q->data) ;
			node *h = i->next;
			temp->next=h; 
			h->data = temp->data;
		}
	}
}
void Themoi2(List &l, int x) {
	node *p = makeNode(x) ;
	int k;
	cout<<"Nhap vao gia tri cua q:" ;cin>>k;
	 node *q = makeNode(k);
      if(l.phead==NULL) pushFront(l,x) ;
      if(l.phead->data==p->data && l.phead->next ==NULL ){
      	pushFront(l,x) ;
	  }else{
	  node *g = new node() ;
	  for(node *i=l.phead;i!=NULL;i=i->next){
	  	if(i->data == p->data){
	  		node *temp = makeNode(q->data);
			 temp->next = i; 
			 g->next = temp;	  
		  }
		  g=i; 
	  } 
}
}




void pushMid(List &l,int k,int x) {
	node *newNode = makeNode(x);
	int n= sizeof(l);
	if(k==1) {
		pushFront(l,x);
	}
	if(k<1||k>n+1) {
		return; 
	}else{
		node *temp = l.phead; 
		for(int i=1;i<=k-2;i++) 
		{
			temp=temp->next; 
		}
		newNode->next = temp->next; 
		temp->next=newNode;	
	} 
	
	
}
void popFront(List &l) 
{
	if(l.phead==NULL) return;
	else{
		node *first = l.phead;
		l.phead = l.phead->next;
		delete first; 
	} 
}
void popBack(List &l){
		if(l.phead==NULL) return;
		else{
			node *last = l.ptrail;
			for(node *k=l.phead;k!=NULL;k=k->next) {
				if(k->next==l.ptrail){
					k->next=NULL;
					delete last; 
				}
			}
			 
		} 
}
void popMid(List &l,int k) 
{
	int n = sizeof(l) ;
	if(k==1) popFront(l) ;
	if(k<1||k>=n+1) return;
	else{
		node *temp= l.phead;
		for(int i=1;i<=k-2;i++) {
			temp=temp->next; 
		}
		node *last = temp->next;
		temp->next=last->next;
		delete last; 
	} 
}
void xoaqsaup(List &l,int x) {

	node *p = makeNode(x);

		for(node *k=l.phead;k!=NULL;k=k->next) {
			if(k->data == p->data){	
				node *last = k->next; 
				k->next =  last->next;
				delete last; 
			}
 
		}	
}
    /*void xoaqtruocp(List &l,int x){ 
	node *p = makeNode(x);
	 int n = sizeof(l);
	 node *temp=l.phead;
	 for(int i=1;i<=n;i++){
	 	temp=temp->next;
		if(temp->next->data == p->data){
			node *k = makeNode(p->data); 
		 	node *first = temp->next;
			 temp->next =  k;
			 delete first; 
		 } 
	 } 
} 

*/


void DuyetDSLK(List &l) {
	for(node *k=l.phead;k!=NULL;k=k->next) {
		cout<<k->data<<" " ;
	}
}


int main(){
	List l;
	makeList(l);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) {
		int x;
		cin>>x;
		pushFront(l,x);
		pushBack(l,x) ;
	}
		DuyetDSLK(l);
//	   Themoi2(l,2); 
//	Themmoi(l,2) ;
//	     popBack(l) ;
//	     popFront(l) ;
 //       popMid(l,3) ;
 //       xoaqsaup(l,2) ;
         xoaqtruocp(l,2) ;
		DuyetDSLK(l);
/*		cout<<"\nPushMid:" ;
	for(int i=1;i<=5;i++) {
		int k;
		cin>>k;
		pushMid(l,5,k) ;
	}
	DuyetDSLK(l);*/
	
} 

