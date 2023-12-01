#include<bits/stdc++.h>
using namespace std;
void heapfy(int *a, int n, int k){
    if(2*k+1 >= n) return;
    int p=2*k+1;
    if(p+1<n && a[p] < a[p+1]) p++;
    if(a[k] < a[p]){
        swap(a[p], a[k]);
        heapfy(a,n,p);
    }
}

void Heap_sort(int *a, int n){
    for(int i=n-1; i>=0; i--) heapfy(a,n,i);
    for(int i=n-1; i>0; i--){
        swap(a[0], a[i]);
        heapfy(a,i,0);
    }
}

//Heap sort v2
template<class T, class K>
void heapfy_v2(T *L, T *R, T *p, K cmp){
    int k = p - L;
    if(p+2*k+1 >= R) return;
    T *q=L+2*k+1;
    if(q+1<R && cmp(*q, *(q+1))) q++;
    if(cmp(*p,*q)){
        swap(*p, *q);
        heapfy_v2(L,R,q,cmp);
    }
}
template<class T, class K = less<T>>
void Heap_sort_v2(T *L, T *R, K cmp = less<T>()){
    for(T *i=R-1; i>= L; i--) heapfy_v2(L,R,i,cmp);
    for(T *i=R-1; i>L;i--){
        swap(*L, *i);
        heapfy_v2(L,i,L,cmp);
    }
}
int main(){
	int a[]={15,13,27,49,53,20,68,11,35,53},n=sizeof(a)/sizeof(int);
	Heap_sort_v2(a,a+n);
	for(auto x:a) cout<<x<<" "; 
}


