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
	return newNode; 
}
void duyet(node *head) {
	while(head!=NULL) {
		cout<<head->data<<" ";
		head=head->next; 
	}
}
int count(node *head){
	int count=0;
	while(head!=NULL) {
		count++;
		head=head->next; 
	}
	return count; 
}
void pushFront(node **head,int x) {
	node *newNode = makeNode(x);
	//B1:next cua con tro newNode tro den head 
	newNode->next=(*head);//*head dia chi cua con tro head 
	//B2 cap nhat con tro head la newNode 
	*head = newNode; 	
}
//c2 truyen tham chieu
void pushfront2(node *&head,int x){
	node *newNode = makeNode(x) ;
	newNode->next = head; 
	head = newNode; 
}
void pushBack(node **head,int x){
	node *temp = *head; 
	node *newNode = makeNode(x) ;
	if(*head == NULL){
		*head = newNode;
		return; 
	}
	while(temp->next !=NULL){
		temp = temp->next; 
	}
	temp->next = newNode; 	 
}
void pushback2(node *&head,int x) {
		node *newnode = makeNode(x);
    	node *temp=head;
	if(head == NULL){
		head = newnode;
		return; 
	}
	while(temp->next !=NULL){
		temp=temp->next; 
	}
	temp->next = newnode; 
}

int main(){
	node *head = NULL;
	for(int i=1;i<=10;i++) {
	 pushFront(&head,i) ;}
	for(int i=11;i<=20;i++){
	 pushfront2(head,i);}
	 for(int i=20;i<=25;i++) {
	 	pushBack(&head,i) ;
	 }
	 for(int i=26;i<=30;i++) {
	 	pushback2(head,i) ;
	 }
	duyet(head) ;
	cout<<count(head);
}


