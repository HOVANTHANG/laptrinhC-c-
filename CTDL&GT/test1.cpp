/*#include<bits/stdc++.h>
using namespace std;
#define Maxvol 1000
template<class T>
struct STACK{
	int n;
	T buf[Maxvol];
	STACK(){
		n=0;
	}
	void push(T x){
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
int main(){
	STACK<string> T;
	for(auto x:{"xin","chao","moi","nguoi"}) T.push(x);
	T.top()="vat";
	while(!T.empty()){
		cout<<T.top();
		T.pop();
	}
}

*/
/*#include<bits/stdc++.h>
using namespace std;
#ifndef __STACK__cpp__
#define __STACK__cpp__ 
template <class T>
class STACK{
	int n,cap;
	T *buf;
	public:
	STACK(){
		n=cap=0;
		buf=NULL;
	}
	STACK (STACK<T> &z){
		this->n=z.n;
		this->cap=z.cap;
		this->buf=new T[cap];
		for(int i=0;i<n;i++) this->buf[i]=z.buf[i];
	}
	STACK<T> &operator =(STACK<T> &z){
		this->n=z.n;
		this->cap=z.cap;
		this->buf=new T[cap];
		for(int i=0;i<n;i++) this->buf[i]=z.buf[i];
		return *this;
	}
	~STACK(){
		if(buf) delete[] buf;
	}
	void push(T x){
		if(n==cap){
			cap=2*cap+1;
			T*temp=buf;
			buf=new T[cap];
			for(int i=0;i<n;i++) buf[i]=temp[i];
			if(temp) delete[] temp;
		}
		buf[n++]=x;
	}
	void pop(){
		n--;
	}
	int size(){
		return n;
	}
	bool empty(){
		return n==0;
	}
	T &top(){
		return buf[n-1];
	}
};
#endif
*/
#include<bits/stdc++.h>
using namespace std;
#ifndef __STACK__cpp__
#define __STACK__cpp__
template <class T>
class STACK{
	int n,cap;
	T *buf;
	public:
	STACK(){
		n=cap=0;
		buf=NULL;
	}
	STACK (STACK<T> &z){
		cout<<"copy";
		this->n=z.n;
		this->cap=z.cap;
		this->buf=new T[cap];
		for(int i=0;i<n;i++) this->buf[i]=z.buf[i];
	}
	STACK<T> &operator=(STACK<T> &z){
		cout<<"gan";
		this->n=z.n;
		this->cap=z.cap;
		this->buf=new T[cap];
		for(int i=0;i<n;i++) this->buf[i]=z.buf[i];
		return *this;
	}
	void push(T x){
		if(n==cap){
			cap=2*cap+1;
			T*temp=buf;
			buf=new T[cap];
			for(int i=0;i<n;i++) buf[i]=temp[i];
			if(temp) delete[] temp;
		}
		buf[n++]=x;
	}
	void pop(){
		n--;
	}
	int size(){
		return n;
	}
	T &top(){
		return buf[n-1];
	}
	bool empty(){
		return n==0;
	}
}; 
#endif















