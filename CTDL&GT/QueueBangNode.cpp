#include<bits/stdc++.h>
using namespace std;
//Cai dat queue bang danh sach lien ket don
template<class T>
struct node{
	T elem;
	node *next;
	node(T x,node<T>* N=0){
		elem=x;
		next=N;
	}
};
template <class T>
struct Queue
{
	int n;//size
	node<T> *Head,*Trail;
	Queue(){
		n=0;
		Head=Trail=0;
	}
	~Queue()
	{
		/*while(n--)
		{
			node<T> *p=Head;Head=p->next;delete p;
		}*/
		while(n) pop();
	}
	int size(){
		return n;
	}
	bool empty(){
		return n==0;
	}
	T&front(){
	return Head->elem;
	}
	T&back(){
		return Trail->elem;
	}
	void pop(){
			node<T> *p=Head;Head=p->next;delete p;n--;
	}
	void push(T x){
		if(n==0) Head=Trail=new node<T>(x);
		else {
			Trail->next=new node<T>(x);
			Trail=Trail->next;
		} n++;
	}
};
int main(){
	Queue<int> q;
	for(int x:{4,7,3,4,6,7}) q.push(x);
	q.front()=5;
	q.back()=9;
	while(q.size()){
		cout<<q.front()<<" ";
		q.pop();
	}
	
}


