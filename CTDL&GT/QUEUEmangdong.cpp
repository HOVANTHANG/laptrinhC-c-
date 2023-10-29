#include<bits/stdc++.h>
using namespace std;
//Cai dat hang cho bang mang dong
#ifndef __QUEUE__cpp__
#define __QUEUE__cpp__ 
template <class T>
class QUEUE{
	int n,cap,F,L;
	T *buf=0;
	public:
		QUEUE(){
			n=cap=0; F=L=0;buf=NULL;//n-size cap-capacity,F- phan tu dung dau,L-1 pt cuoi
		}
		~QUEUE(){
			if(buf) delete []buf;
		}
		bool empty(){
			return n==0;
		}
		int size(){
			return n;
		}
		T &front(){ return buf[F];}
		T &back(){return buf[(L?L:cap)-1];}
		void pop() {
			n--;F=(F+1)%cap;
		}
		void push(T x){
			if(n==cap){
				T *tem=buf;
				cap=cap*2+1;
				buf=new T[cap];
				for(int i=F,j=0;i<F+n;i++,j++) buf[j]=tem[i%cap];
				F=0;
				if(n==0) L=0;else L=n;
				if(tem) delete []tem;
			}
			buf[L]=x;
			L=(L+1)%cap;
			n++;
		}
};
#endif

