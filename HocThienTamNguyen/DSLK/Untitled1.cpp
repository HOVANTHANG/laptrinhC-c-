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


int main(){
}


