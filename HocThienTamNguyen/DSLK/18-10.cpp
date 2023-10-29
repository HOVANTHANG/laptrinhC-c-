#include<bits/stdc++.h> 
using namespace std;
struct node{
	int data;
	node *next; 
}; 
node *makeNode(int x) {
	node *newNode = new node() ;
	newNode->data=x;
	newNode->next=NULL; 
}
void duyet(node *head){
	while(head!=NULL) {
		cout<<head->data<<" ";
		head=head->next; 
	}
}
int count(node *head) {
	int count=0; 
	while(head!=NULL) {
		count++;
		head=head->next ;
	}
	return count; 
}

void pushFront(node **head,int x) {
	node *newNode = makeNode(x);
	newNode->next=*head;
	*head=newNode; 
}
void pushBack(node **head,int x) {
	
	node *newNode=makeNode(x);
	node *temp=*head;
	if(*head==NULL){
		*head =newNode; 
	}else {
		while(temp->next!=NULL){
			temp=temp->next; 
		}
		temp->next=newNode; 
	} 
}
void insert(node **head,int k,int x) {
	
	node *newNode = makeNode(x);
	node *temp=*head; 
	int n = sizeof(*head) ;
	if(k<1||k>n+1) return;
	if(k==1) pushFront(&newNode,x);
	
	for(int i=1;i<=k-2;i++) {
		temp=temp->next; 
	}
	newNode->next = temp->next;
	temp->next = newNode; 
	
}
void popFront(node **head){
	if(*head==NULL) return;
	node *tmp = *head;
	*head = tmp->next;
	delete tmp; 
} 

void popback(node **head){
	node *temp=*head; 
		if(*head==NULL) return;
		if(temp->next==NULL) {
			*head=NULL; 
		} 
		while(temp->next->next!=NULL){
			temp=temp->next; 
		}
		temp->next=NULL;
		node *last = temp->next;
		 delete last; 
}

void popMid(node **head,int k){
	int n=sizeof(*head);
		if(*head==NULL) return; 
	if(k<1||k>n+1) return;
	if(k==1) {
		popFront(head);
	}
	else{
		node *temp=*head;
	for(int i=1;i<=k-2;i++) {
		temp=temp->next; 
	}
	node *mid = temp->next; 
	temp->next = mid->next; 
    
	delete mid; 
} }





int main(){
	node *head =NULL;
	for(int i=3;i>=1;i--) pushFront(&head,i) ;
	for(int i=7;i<=9;i++) pushBack(&head,i);
	for(int i=4;i<=6;i++) insert(&head,4,i) ;
//	popFront(&head);
//	popback(&head) ;
	popMid(&head,1);
	duyet(head) ;
	cout<<count(head); 
} 
 
