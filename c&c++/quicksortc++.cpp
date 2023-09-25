#include<bits/stdc++.h>
using namespace std;
int partion(int a[],int l,int r){
	int pivot=a[r];
	int i=l-1;
	for(int j=l;j<r;j++){
		if(a[j]<=pivot){
			i++;
			swap(a[j],a[i]); 
		} 
	} 
	i++;
	swap(a[i],a[r]);
	return i; 
}
void quicksort(int a[],int l,int r) {
	if(l>=r){
		return; 
	} 
	int q= partion(a,l,r);
	quicksort(a,l,q-1);
	quicksort(a,q+1,r); 
}
main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	quicksort(a,0,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "; 
	 } 
} 
