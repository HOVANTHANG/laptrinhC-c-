#include<bits/stdc++.h>
using namespace std;
int partition1(int a[],int l,int r){
	int pivot=a[l];
	int i=l-1,j=r+1;
	while(1){
		do{
			++i; 
		}while(a[i]<pivot);
		do{
			--j; 
		}while(a[j]>pivot);
		if(i<j){
			swap(a[i],a[j]); 
		}else return j; 
	} 
} 
//phan hoach lumoto
int partition2(int a[],int l,int r){
	int i=l-1;
	int pivot=a[r];
	for(int j=l;j<r;j++){
		if(a[j]<=pivot){
			++i;
			swap(a[i],a[j]); 
		} 
	}
	++i;
	swap(a[i],a[r]);
	return i; 
} 
void quick_sort(int a[],int l,int r){
	if(l>=r) return ;
	int p= partition2(a,l,r);
	quick_sort(a,l,p-1);
	quick_sort(a,p+1,r); 
} 

int main()
{
	int a[]={8,7,1,5,2,3,4},n=sizeof(a)/sizeof(int);
	quick_sort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" "; 
	} 
	return 0; 
 } 
