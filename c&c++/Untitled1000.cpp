/*#include<bits/stdc++.h>
using namespace std;
void merger(int a[],int l,int r,int m){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	
	 int i=0,j=0;
	 while(i<x.size()&&j<y.size()){
	 	if(x[i]>y[j]) {
	 		a[l++]=y[j++] ;
		 }else
		    a[l++]=x[i++];
	 } 
	 while(i<x.size()){
	 	a[l++]=x[i++]; 
	 }
	 while(j<y.size()){
	 	a[l++]=y[j++]; 
	 } 
} 
void  merger_sort(int a[],int l,int r){
	if(l>=r){
		return ; 
	} 
	int m=(l+r)/2; 
	merger_sort(a,l,m);
	merger_sort(a,m+1,r);
	merger(a,l,r,m); 
} 
main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	merger_sort(a,0,n-1); 
	for(int i=0;i<n;i++){
		cout<<a[i]<<" "; 
	} 	
} */
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
main(){
	char s[1000];
	scanf("%s",s);
     
	 for(int i=0;i<strlen(s)-1;i++){
	 	printf("%c",s[i]); 
	 } 
	
	
	
} 
