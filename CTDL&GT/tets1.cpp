#include<bits/stdc++.h>
using namespace std;
template<class T>
struct node{
	T elem;
	node *next;
	node(T e,node<T>*N=0){
		elem=e;
		next=N; 
	} 
}; 
template<class T>
struct it_slist{
	node<T>*cur=0;
	it_slist(node<T>*c=0){
		cur=c; 
	} 
	T &operator*(){
		return cur->elem; 
	} 
	it_slist operator++(int){
		cur=cur->next;
		return cur; 
	} 
	it_slist operator++(){
		node<T>*p=cur;
		cur=cur->next;
		return p; 
	} 
	bool operator!=(it_slist<T> it){
		return cur!=it.cur; 
	} 
	it_slist operator=(it_slist<T> it){
		this->cur = it.cur;
		return *this; 
	} 
	
}; 
template<class T>
struct slist{
	int n;
	node<T>*Head,*Trail;
	slist(){
		n=0;
		Head=Trail=0; 
	} 
	slist(int k,T x){
		n=0;
		Head=Trail=0; 
		while(k--){
			push_front(x); 
		} 
	} 
	~slist(){
		while(n--) pop_front(); 
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
	 void push_front(T x){
	 	if(n==0){
	 		Head=Trail=new node<T>(x); 
		 }
		Head = new node<T>(x,Head); 
		 n++;  
	 } 
	 void push_back(T x){
	 	if(n==0){
	 		return push_front(x); 
		 } 
		 Trail=Trail->next=new node<T>(x); 
		 n++; 
	 } 
	 void pop_front(){
	 	node<T>*p=Head;
		 Head=Head->next;
		 delete p;
		 n--; 
		 if(n==0) Trail=0; 
	 } 
	 void pop_back(){
	 	if(n==1){
	 		delete Head;
	 		Trail=Head=0; 
			  
		 }else{
		 	node<T>*p=Head;
			 while(p->next!=Trail) p=p->next;
			 delete Trail;
			 Trail=p;
			 Trail->next=0; 
		 }
		 n--; 
	 } 
	 void travel(){
	 	for(node<T>*p=Head;p!=NULL;p=p->next){
	 		cout<<p->elem<<" "; 
		 } 
	 } 
	 void sort(){
	 	for(node<T>*p=Head;p!=NULL;p=p->next){
	 		for(node<T>*q=p->next;q!=NULL;q=q->next){
	 			if(q->elem<p->elem) swap(q->elem,p->elem); 
			 } 
		 } 
	 } 
	typedef it_slist<T> iterator;
	 iterator begin(){
	 	return Head; 
	 } 
	 iterator end(){
	 	return NULL; 
	 } 
	 void erase(iterator it){
	 	if(it.cur==Head) pop_front();
		if(it.cur==Trail) pop_back();
		node<T>*p=Head,*q=it.cur;
		while(p->next!=q) p=p->next;
		q=p->next;
		p->next=q->next;
		delete q;
		n--;  
	 } 
	 void insert(iterator it,T x){
	 	node<T>*p=it.cur;
		p->next= new node<T>(p->elem,p->next);
		p->elem=x;
		n++; 
	 } 
	
}; 


int main(){
	 slist<int> L(5,4);
    for(int i=1; i<10; i++){
        if(i%2) L.push_front(i); else L.push_back(i);
    }
    L.travel();
    cout << "\nsize:" << L.size();
    L.front() = L.back() = 10;
    cout << "\n";
    L.travel();
    L.pop_back(); L.pop_front();
    cout << "\n";
    L.travel();
    L.sort();
    cout << "\n";
    L.travel();
    cout << "\n Duyet xuoi L: "; 
    for(slist<int>::iterator it=L.begin(); it!=L.end(); it++){
        cout << *it << " ";
    }
    cout << "\nauto L:";
    for(auto x:L) cout << x << " ";
//Xóa
    auto it = L.begin();
    it++; it++; it++;
    L.erase(it);
    cout << "\nSau khi xoa L:";
    for(auto x:L) cout << x << " ";
//Chèn
    auto itt = L.begin(); 
    itt++; itt++; itt++; itt++;
  
    L.insert(itt, -2);
    cout << "\nSau khi chen L:";
    for(auto x:L) cout << x << " ";
} 
