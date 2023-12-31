#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int a[],int l,int r,int k){
	if(l>=r) return 0;
	int m= (l+r)/2;
	if(a[m]==k){
		return 1; 
	}else if(a[m]<k){
		BinarySearch(a,m+1,r,k); 
	}else{
		BinarySearch(a,l,m-1,k); 
	} 
	
	
} 
int BinarySearch2(int a[],int n,int k){
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==k){
			return 1; 
		}else if(a[m]<k){
			l=m+1; 
		}else{
			r=m-1; 
		} 
	}
	return 0; 
} 
template<class T,class K=less<T>>
void select_sort(T *L,T *R,K cmp=less<T>()){
	for(T *i=L;i<R;i++){
		T *p=i;
		for(T *j=i+1;j<R;j++){
			if(cmp(*j,*p)) p=j; 
		} 
		swap(*i,*p); 
	} 
} 
template<class T,class K=less<T>>
void Buble_sort(T *L,T *R,K cmp=less<T>()){
	for(T *i=L;i<R;i++){
		for(T *j=R-1;j>i;j--){
			if(cmp(*j,*(j-1))) swap(*j,*(j-1)); 
		} 
	} 
} 
void merger(int a[],int l,int m,int r){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i=0,j=0;
	while(i<x.size()&&j<y.size()){
		if(x[i]<y[j]){
			a[l++]=x[i++]; 
		}else {
			a[l++]=y[j++]; 
		} 
	}
	while(i<x.size()){
		a[l++]=x[i++]; 
	} 
	while(j<y.size()){
		a[l++]=y[j++]; 
	} 	
} 
void merger_sort(int a[],int l,int r){
	if(l>=r) return ;
	int m=(l+r)/2;
	merger_sort(a,l,m);
	merger_sort(a,m+1,r);
	merger(a,l,m,r);  
} 
void Heapify(int a[],int n,int i){
	int largest=i;
	int l=2*i+1,r=2*i+2;
	if(l<n&&a[l]>a[largest]){
		largest=l; 
	} 
	if(r<n && a[r]>a[largest]){
		largest=r; 
	} 
	if(largest!=i){
		swap(a[i],a[largest]);
		Heapify(a,n,largest); 
	} 
} 
void Heap_sort(int a[],int n){
	for(int i=n/2-1;i>=0;i--){
		Heapify(a,n,i); 
	} 
	for(int i=n-1;i>=0;i--){
		swap(a[0],a[i]);
		Heapify(a,i,0); 
	} 
	
	
} 
int parttition(int a[],int l,int r){
	int pivot=a[l],i=l-1,j=r+1;
	while(1){
		do{
			++i; 
		}while(a[i]<pivot);
		do{
			--j; 
		}while(a[j]>pivot); 
		if(i<j){
			swap(a[i],a[j]); 
		}else{
			return j; 
		} 
	} 
} 
void Quick_sort(int a[],int l,int r){
	if(l>=r) return ;
	int p = parttition(a,l,r);
	Quick_sort(a,l,p);
	Quick_sort(a,p+1,r); 
} 
template<class T,class K=less<T>>
void Insert_Sort(T *L,T *R,K cmp=less<T>()){
	for(T *i=L+1;i<R;i++){
		T x=*i,*j=i-1;
		while(j>=L&&cmp(x,*j)){
			*(j+1)=*j;
			  --j; 
		} 
		*(j+1)=x; 
	} 
} 


int main(){
	int a[]={1,4,6,5,7,3,8,2,9},n = sizeof(a)/sizeof(int);
	//cout<<BinarySearch(a,0,n-1,-21);
	//cout<<BinarySearch2(a,n,-21); 
	//select_sort(a,a+n); 
	//Buble_sort(a,a+n); 
	//merger_sort(a,0,n-1);  
	//Heap_sort(a,n); 
	//Quick_sort(a,0,n-1); 
	Insert_Sort(a,a+n); 
	for(auto x:a){
		cout<<x<<" "; 
	} 
}


