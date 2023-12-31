#include<bits/stdc++.h>
using namespace std;
template<class T,class K=less<T>>
void selection_sort(T *L,T *R,K cmp=less<T>()){
	for(T*i=L;i<R;i++){
		T*p=i;
		for(T *j=i+1;j<R;j++){
			if(cmp(*j,*p)) p=j; 
		} 
		swap(*i,*p); 
	} 
} 
template<class T,class K=less<T>>
void bublesort(T *L,T *R,K cmp=less<T>()){
	for(T*i=L;i<R;i++){
		for(T*j=R-1;j>i;j--){
			if(cmp(*j,*(j-1))) swap(*j,*(j-1)); 
		} 
	} 
} 
template<class T,class K=less<T>>
void insert_sort(T *L,T*R,K cmp=less<T>()){
	for(T*i=L;i<R;i++){
		T x=*i,*j=i-1;
		while(j>=L&&cmp(x,*j)){
			*(j+1)=*j;
			--j; 
		} *(j+1)=x; 
	} 
}
template<class T,class K=less<T>>
void QSort(T*L,T*R,K cmp=less<T>()){
	if(L>=R-1) return;
	T *i=L;
	for(T*j=L+1;j<R;j++){
		if(cmp(*j,*L))
		{
			swap(*++i,*j); 
		 } 
	} 
	swap(*i,*L);
	QSort(L,i,cmp);
	QSort(i+1,R,cmp); 
} 
void merge(int a[],int L,int M,int R){
	vector<int> x(a+L,a+M+1);
	vector<int> y(a+M+1,a+R+1);
	int i=0,j=0;
	while(i<x.size()&&j<y.size()){
		if(x[i]<y[j]){
			a[L++]=x[i++]; 
		}else{
			a[L++]=y[j++]; 
		} 
	} 
	while(i<x.size()){
		a[L++]=x[i++]; 
	} 
	while(j<y.size()){
		a[L++]=y[j++]; 
	} 
} 
void merge_sort(int a[],int l,int r){
	if(l>=r) return ;
	int m=(l+r)/2;
	merge_sort(a,l,m);
	merge_sort(a,m+1,r);
	merge(a,l,m,r); 
} 
void heapify(int a[],int n,int i){
	int largest=i;
	int l=2*i+1,r=2*i+2;
	if(l<n&&a[l]>a[largest]){
		largest=l; 
	} 
	if(r<n&&a[r]>a[largest]){
		largest=r; 
	} 
	if(largest!=i){
		swap(a[i],a[largest]);
		heapify(a,n,largest); 
	} 
} 
void Heap_sort(int a[],int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(a,n,i); 
	} 
	for(int i=n-1;i>=0;i--){
		swap(a[i],a[0]);
		heapify(a,i,0); 
	} 
} 
int binarysearch(int a[],int n,int x){
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			return 1; 
		}else if(a[m]<x){
			l=m+1; 
		}else{
			r=m-1; 
		} 
	} 
	return 0; 
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
int main(){
	int a[]={4,7,2,8,4,8,3,2,4,9},n=sizeof(a)/sizeof(int);
	//QSort(a,a+n,greater<int>());
	//selection_sort(a,a+n); 
	//bublesort(a,a+n); 
	//insert_sort(a,a+n); 
	//merge_sort(a,0,n-1); 
	Heap_sort(a,n); 
	for(auto x:a) cout<<x<<" ";
	cout<<"\n"<<binarysearch(a,n,9); 
}


