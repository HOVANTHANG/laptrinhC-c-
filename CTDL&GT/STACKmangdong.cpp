#include<bits/stdc++.h>
using namespace std;
#ifndef __STACK__cpp__
#define __STACK__cpp__ 
template <class T>
class STACK
{
	int n,cap;//so phan tu, cap-suc chua(capacity)
	T *buf;
	public:
	STACK(){
		n=cap=0;buf=NULL;
	}
	STACK(STACK<T> &Z){
		cout<<"toan tu copy";
		this->n=Z.n;
		this->cap=Z.cap;
		this->buf=new T[cap];
		for(int i=0;i<n;i++) this->buf[i]=Z.buf[i];
	}
	STACK<T> &operator=(STACK<T> &Z){
		cout<<"toan tu gan";
		this->n=Z.n;
		this->cap=Z.cap;
		this->buf=new T[cap];
		for(int i=0;i<n;i++) this->buf[i]=Z.buf[i];
		return *this;
	}
	~STACK(){
		if(buf) delete [] buf;
	}
	 void push(T x){
	 	if(n==cap){
	 		cap=2*cap+1;
//	 		T *temp=new T[cap];
//	 		for(int i=0;i<n;i++) temp[i]=buf[i];
//	 		if(buf) delete[] buf;
//				buf=temp;
			T*temp=buf;
			buf=new T[cap];
			for(int i=0;i<n;i++) buf[i]=temp[i];
			if(temp) delete []temp;
	 	
		 }
	 	buf[n++]=x;
	 }
	 void pop(){
	 	n--;
	 }
	 T &top(){
	 	return buf[n-1];
	 }
	 int size(){
	 	return n;
	 }
	 bool empty(){
	 	return n==0;
	 }
};
#endif


