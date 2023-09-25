#include<stdio.h>
typedef struct node
{
	int data;
	struct node* next;
}node_t;

//ham tao nut
	node_t* createnode(int x){
		node_t* newnode = (node_t*)malloc(sizeof(node_t));
		newnode->data =x;
		newnode->next=NULL;
		return newnode; 
}	
//Ham them 1 nut
void addfront(node_t** head,int x){
	node_t* newnode = createnode(x);
	newnode->next = *head;
	*head = newnode;
}
void addback(node_t** head,int data){
	
	node_t* newnode = createnode(data);
	node_t* currentnode = *head;
	if(*head == NULL{
	  *head = newnode;
	  return;
	}
	while(currentnode->next!=NULL){
		currentnode = currentnode->next;
	}
	currentnode->next = newnode;
} 

