#include<bits/stdc++.h>
using namespace std;
struct sophuc{
	int a,b;
	
	void nhap(){
		cin>>a>>b; 
	} 
	void in(){
		cout<<a<<" "<<b; 
	}
	sophuc operator +(const sophuc x){
		sophuc c;
		c.a=a+x.a;
		c.b=b + x.b; 
		return c; 
	} 	 
	sophuc operator -(const sophuc x){
		sophuc c;
		c.a=a-x.a;
		c.b=b - x.b; 
		return c; 
	} 	 
}; 
int main(){
	sophuc a1,a2,a3;
	a1.nhap();
	a2.nhap(); 
	a3=a1+a2;
	a3.in(); 
}


