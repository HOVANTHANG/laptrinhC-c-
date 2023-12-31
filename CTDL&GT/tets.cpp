#include<bits/stdc++.h>
using namespace std;
template<class T> 
struct Node{
	T elem;
	Node *next;
	Node(T x,Node<T> *N=0){
		elem =x; 
		next=N; 
	} 
}; 
template<class T>
struct Queue{
	int n;
	Node<T> *Head,*Trail;
	Queue(){
		n=0;
		Head=Trail=NULL;
	} 
	~Queue(){
		while(n) pop(); 
	} 
	int size(){
		return n; 
	} 
	bool empty(){
		return n==0; 
	} 
	T &front(){
		return Head->elem; 
	} 
	T &back(){
		return Trail->elem; 
	} 
	void pop(){
		Node<T> *p=Head;
		Head=p->next;
		delete p;
		n--; 
	} 
	void push(T x){
		if(n==0) Head=Trail= new Node<T>(x);
		else{
			Trail->next= new Node<T>(x);
			Trail=Trail->next; 
		} 
		n++; 
	} 

}; 
int main(){
	Queue<int> q;
	for(int x:{1,2,3,4,5,6,7,8,9}) q.push(x);
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop() ; 
	} 
	 
} 
