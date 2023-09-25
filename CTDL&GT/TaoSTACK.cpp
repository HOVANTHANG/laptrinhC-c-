#include<bits/stdc++.h>
using namespace std;
#define MAX_VOL 1000  
template <class T>
struct STACK
{
	int n;
	 T buf[MAX_VOL];
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
	STACK<string> s;
	for(auto x:{"ha","noi","mua","khai","giang"}) s.push(x);
	s.top()="truong";
	while(not s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}


