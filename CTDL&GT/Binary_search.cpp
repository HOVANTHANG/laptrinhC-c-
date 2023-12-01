#include<bits/stdc++.h>
using namespace std;
bool binary_search(int a[],int n,int k){

	int l=0,r=n-1;
	while(l<=r){
			int m=(l+r)/2;
			if(a[m]==k){
				return true; 
			}else if(a[m]>k){
				r=m-1; 
			}else{
				l=m+1; 
			} 
	} 
	return false; 
} 
bool Binary_search(int a[],int l,int r,int x){
	if(l>r) return false;
	int m=(l+r)/2;
	if(a[m]==x){
		return true; 
	} 
	else if(a[m]<x){
		return Binary_search(a,m+1,r,x); 
	}else{
		return Binary_search(a,l,m-1,x); 
	} 
} 

int main(){
	int a[]={1,2,3,4,5,6,7},n=sizeof(a)/sizeof(int);
	cout<<Binary_search(a,0,n,9); 
	 
}


