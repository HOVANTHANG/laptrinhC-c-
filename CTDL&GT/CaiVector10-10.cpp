//Cai ??t vector
#include<bits/stdc++.h>
using namespace std;
#ifndef __STACK__cpp__
#define __STACK__cpp__ 
template<class T>
class rit
{
   T *curr;
   public:
   	T * &getcurr(){
   		return curr;
	   }
   rit(){
   	curr=NULL;
   }	
   rit (T *c){
   	curr=c;
   }
   rit<T> &operator =(rit<T> ri){
   	curr = ri.getcurr();
   }
   T& operator*(){
   	return *curr;
   }
   rit<T> operator ++(int){
   	return curr--;
   }
   rit<T> operator ++(){
   	return --curr;
   }
   bool operator!=(rit<T> ri){
   	return curr!=ri.getcurr();
   }
};
template<class T>
class VECTOR{
    int n, cap;
    T *buf;
    void expand(int new_cap){ //M? r?ng b? nh?
        if(new_cap < cap) return;
        T *tem = buf;
        cap = new_cap;
        buf = new T[cap];
        for(int i=0; i<n; i++){
            buf[i] = tem[i];
        }
        if(tem) delete []tem;
    }
    public:
        
        VECTOR(){
            n = cap = 0; 
            buf = NULL;
        }
        VECTOR(int num,T x=0){ //Tao vector co num so x
        	n=cap=0; buf=NULL;
        	expand(num);
        	n=num;
        	for(int i=0;i<n;i++) buf[i]=x;
		}
	

        ~VECTOR(){
            if(buf) delete[]buf;
        }
        int size(){
            return n;
        }

        bool empty(){
            return n==0;
        }

        void push_back(T x){
            if(n==cap){
                expand(cap*2+1);
                buf[n++] = x;
            }
        }

        T &back(){
            return buf[n-1];
        }

        void pop_back(){
            n--;
        }

        T &front(){
            return buf[0];
        }

        T &operator[] (int k){
            return buf[k];
        }

        void resize(int new_size, T x=0){
            
            if(cap < new_size) expand(new_size);
            for(int i=n; i<new_size; i++) buf[i] = x;
            n = new_size;
        }
        typedef T* iterator;
        iterator begin(){
            return buf;
        }

        iterator end(){
            return buf+n;
        }
        void erase(iterator it)
        {
        	for(iterator it1 = it ;it1!=end;it1++){
        		*it1=*(it1+1);
        		n--;
			}
		}
		void insert(iterator &it,T x){
			if(n==cap){
				int k=it-buf;
			 expand(cap*2+1);
		  it=buf+k;	 
		}
		for(iterator it1 = buf+(n-1);it1>=it;it1--) *(it1+1)=*it1;
		*it=x;
		it+=1;
		n++;			
		}
		
		typedef rit<T> reverse_iterator;
		reverse_iterator rbegin(){
			return buf+(n-1);
		}
		reverse_iterator rend(){
			return buf-1;
		}		
};
#endif
