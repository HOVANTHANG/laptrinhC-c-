#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//linear_search 
bool ls(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return true; 
		} 
	} return false; 
} 
//binary_search 
bool bs(int a[],int n,int x){
	int l=0,r=n-1; 
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			return true; 
		} else if(a[m]<x){
			l=m+1; 
		} else
		   r=m-1; 
	} return false; 
} 
bool binary_search(int a[],int l,int r,int x){
	if(l>r){
		return false; 
	} 
	int m=(l+r)/2;
	if(a[m]==x){
		return true; 
	} else if(a[m]<x){
		return binary_search(a,m+1,r,x); 
	} else
	  return binary_search(a,l,m-1,x); 
	
} 
//tim phan tu xuat hien dau tien; 
int  bss(int a[],int n,int x){
	int res=-1;
	int l=0,r=n-1; 
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			r=m-1; 
		} else if(a[m]<x){
			l=m+1; 
		} else 
		r=m-1; 	
	} 
	return res; 
} 
int bss2(int a[],int n,int x){
	int l=0,r=n-1;
	int res=-1; 
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			l=m+1; 
		} else if(a[m]<x){
			l=m+1; 
		} else
		   r=m-1; 
	} 
	return res; 
	
} 
//binary_search(v.begin(),v.end(),x);
//binary_search(v.begin+x,v.begin()+y,x); 
//tim vi tri dau tien cua phan tu > x trong mang da sap xep
// tim vi tri dau tien cua phan tu < x trong mang da sap xep
//tim vi tri cuoicung cua phan tu > x trong mang da sap xep
//tim vi tri cuoicung cua phan tu < x trong mang da sap xep

int first(int a[],int n,int x){
	int l=0,r=n-1;
	int res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			l=m+1; 
		} else if(a[m]<x){
			l=m+1; 
		} else 
		r=m-1; 	 
	} 
	return res+1; 
} 
int  first2(int a[],int n,int x){
	int res=-1;
	int l=0,r=n-1; 
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			r=m-1; 
		} else if(a[m]<x){
			l=m+1; 
		} else 
		r=m-1; 	
	} 
	return res-1; 
} 
//lower_bound(iter1,iter2,key)==> tra ve gia tri dau tien >=key trong mang sap xep 
//upper_bound(iter1,iter2,key) ==> tra ve gia tri dau tien > key trong man sap xep 

main(){
	int n,x;cin>>n>>x;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	auto it = lower_bound(a.begin(),a.end(),x);
	cout<<*it<<endl;
	cout<<it-a.begin()<<endl; 
//	int a[n];
//	for(int &x:a){
//		cin>>x; 
//	}
//   int x;cin>>x;
//   sort(a,a+n); 
// 	  auto it = lower_bound(a,a+n,x);
//		cout<<*it<<endl;
//  	 cout<<it-a<<endl; 
//   if(it==a+n){
//   	    cout<<"khong co phan tu >=:"<<x<<endl; 
//   } 
//   auto it = upper_bound(a,a+n,x);
//   cout<<*it<<endl;
//   cout<<it-a<<endl; 
   
   
   
} 
