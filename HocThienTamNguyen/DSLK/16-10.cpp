#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next; 
}; 

node* makenode(int x) {
	node *newNode = new node() ;
	newNode->data=x;
	newNode->next=NULL; 
	return newNode; 
}
void duyet(node *head){
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
//c1 kieu con tro toi con tro 
void pushFront(node **head,int x) {
	node *newNode = makenode(x);
	//B1:next cua con tro newNode tro den head 
	newNode->next=(*head);//*head dia chi cua con tro head 
	//B2 cap nhat con tro head la newNode 
	*head = newNode; 	
}
//Truyen tham chieu
void pushFront2(node *&head,int x) {
	 node *newNode = makenode(x) ;
	 newNode->next=head;
	 head = newNode; 
}

int main(){
	node *head= NULL;
	for(int i=1;i<=5;i++) {
		pushFront(&head,i) ;
	}
	for(int i=6;i<=10;i++) {
		pushFront2(head,i);
	}
	duyet(head);
}


