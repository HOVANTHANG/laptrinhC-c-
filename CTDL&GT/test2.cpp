#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int dem=0;
	cin>>n;
	if(n%1000==0){
	while(n!=0){
		if(n>=500000) n-=500000, dem++; 
		else if(n>=200000) n-=200000 ,dem++;
		else if(n>=100000) n-=100000,dem++; 
		else if(n>=50000)	n-=50000,dem++; 
		else if(n>=20000) n-=20000,dem++; 
		else if(n>=10000)  n-=10000,dem++; 
		else if(n>=5000)   n-=5000,dem++; 
		else if(n>=2000)    n-=2000,dem++; 
		else if(n>=1000)     n-=1000,dem++; 
	} cout<<dem;
	}else cout<<"-1";
}
