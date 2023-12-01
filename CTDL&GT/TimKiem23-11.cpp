#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={3,5,7,8,15,25,36,48,49,57,59,68,78,89},n=sizeof(a)/sizeof(int);
	int x=25;
	int *p=lower_bound(a,a+n,x);//con tro tra ve vi tri phan tu dau tien >=x
	int *q=upper_bound(a,a+n,x);//con tro tra ve vi tri phan tu dau tien >x;
	cout<<"\nVi tri dau tien >=x:"<<p-a<<" co gia tri "<<*p;
		cout<<"\nVi tri dau tien >x:"<<q-a<<" co gia tri "<<*q;

}


