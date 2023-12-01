#include<bits/stdc++.h>
using namespace std;
/*void insert_sort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i],pos =i-1;
		while(pos>=0&&x<a[pos]){
			a[pos+1]=a[pos];
			--pos; 
		}
		a[pos+1]=x; 
	} 
} */
template<class T,class K=less<T>>
void insert_sort(T *L,T* R,K cmp=less<T>()){
	for(T *i=L+1;i<R;i++){
		T x=*i,*j=i-1;
		while(j>=L&&cmp(x,*j)){
			*(j+1)=*j;
			--j; 
		} 
		*(j+1)=x; 
	} 
} 
template <class T, class K = less<T>> 
void insertion_sort(T *L, T *R, K cmp= less<T>()){ 
    for(T *i=L+1; i<R; i++){
        T x = *i, *j=i-1;
        while(j>=L && cmp(x, *j)) *(j+1) = *(j--);
        *(j+1) = x;
    }
}
/*void merge(int a[],int l,int m,int r){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1); 
	int i=0,j=0; 
	while(i<x.size()&& j<y.size()){
		if(x[i]<=y[j]){
			a[l++]=x[i++];
		}else{
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
void merge_sort(int a[],int l,int r){
	if(l>=r) return;
	int m=(l+r)/2;
	merge_sort(a,l,m);
	merge_sort(a,m+1,r);
	merge(a,l,m,r); 
} */


int main(){
	int a[]={2,5,4,3,8,9,56,5,4,6,4,6,67,4},n=sizeof(a)/sizeof(int);
//	select_sort(a,a+n);
//	select_sort(a,a+n,greater<int>());
//	Bsort(a,a+n);
//	 Bsort(a,a+n,greater<int>()); 
//	insertion_sort(a,a+n); 
//	insert_sort(a,a+n); 
	merge_sort(a,0,n); 
	for(int x:a) cout<<x<<" "; 
}


