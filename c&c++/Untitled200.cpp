#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main(){
		int n,k;
	
	int a[1001]; 
	cin>>n>>k;
	n*=n;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	 sort(a,a+n);
	cout<<a[k-1]<<endl; 
} 
