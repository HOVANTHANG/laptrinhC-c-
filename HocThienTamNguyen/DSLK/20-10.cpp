#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev; 
}; 

node *makeNode(int x){
	node *newNode = new node();
	newNode->data=x; 
	newNode->next=NULL; 
	newNode->prev=NULL;
	return newNode; 
}
void duyet(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next ;
	}
}
void count(node *head) {
	int count=0;
	while(head==NULL) {
		count++;
		head=head->next; 
	}
}
void pushFront(node **head,int x) {
	node *newNode = makeNode(x);
	newNode->next=(*head);
	if(*head!=NULL) {
		newNode->prev= *head; 
	}
	*head = newNode; 
}
void pushBack(node **head,int x){
	node *newNode = makeNode(x);

	if(*head==NULL) {
		newNode=*head;return; 
	}else{
		node *temp =*head;
	while(temp->next!=NULL){
		temp=temp->next; 
	}
	temp->next=newNode;
	newNode->prev=temp;
}
}

void pushMid(node **head,int k,int x){
	int n=sizeof(*head);
		node *newNode = makeNode(x);
	node *temp =*head;
	if(*head==NULL) {
		newNode=*head;return; 
	}
	if(k<1||k>n+1) {
		return; 
	}
	if(k==1){
		pushFront(&newNode,x);
	}
	for(int i=1;i<=k-2;i++) {
		temp=temp->next ;
	}
	newNode->next=temp->next;
	temp->next->prev=newNode; 
	temp->next=newNode;
	newNode->prev=temp;
}
void popFront(node **head){
	if(*head==NULL) return;
	node *temp = *head;
	*head=temp->next;
	temp->next->prev=NULL;
	delete temp; 
}
void popBack(node **head){

     if(*head==NULL) return;
     else {
     		node *temp = *head; 
     		while(temp->next->next!=NULL){
     			temp=temp->next ;
			 }
			 node *last = temp->next; 
			 temp->next=NULL; 
			 delete last; 
	 } 
}
void popMid(node **head,int k) {
	int n= sizeof(*head) ;
	if(k<1||k>n+1) return; 
	if(*head==NULL) return;
	if(k==1){
	 popFront(head);
	 }
	node *temp=*head; 
	for(int i=1;i<=k-2;i++){
		temp=temp->next; 
	}
	node *mid = temp->next;
	temp->next = mid->next;
	mid->prev= temp; 
	
	
}
int main(){
	node *head=NULL;
	for(int i=1;i<=5;i++) pushFront(&head,i) ;
	for(int i=10;i<=15;i++) pushBack(&head,i) ;
	for(int i=6;i<=9;i++) pushMid(&head,6,i);
//	popFront(&head) ;
//	popBack(&head) ;
     popMid(&head,2) ;
	duyet(head) ;
}


