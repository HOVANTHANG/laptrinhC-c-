#include<bits/stdc++.h>
using namespace std;
void select_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min =i;
		for(int j=i+1;j<n-1;j++){
			if(a[i]>a[j]){
				min=j; 
			} 
		} swap(a[i],a[min]); 
	} 
} 
void buble_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]); 
			} 
		} 
	}
} 
void insert_sort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i],pos = i-1; 
	while(pos>=0 && x<a[pos]){
		a[pos+1]=a[pos];
	    	--pos; 
	} 
	 a[pos+1]=x; 
		} 
}

/*main(){
   int n;cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
   	cin>>a[i]; 
   }	
  // select_sort(a,n);
//  buble_sort(a,n); 
       insert_sort(a,n); 
   for(int i=0;i<n;i++){
   	cout<<a[i]<<" "; 
   } 
} */



int cnt[100001];
main(){
	int n;cin>>n;
	int a[n];
//	int m = INT_MIN; 
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		m=max(m,a[i]) ;
//		cnt[a[i]]++; 
//	} 
//	 for(int i=0;i<=m;i++){
//	 	if(cnt[i]!=0){
//	 		for(int j=0;j<cnt[i];j++){
//	 			cout<<i<<" "; 
//			 } 
//		 } 
//	 } 
//     map<int ,int> mp;
//	 for(int i=0;i<n;i++){
//	 	cin>>a[i];
//		 mp[a[i]]++; 
//	 } 
//	 for(auto x : mp){
//	 	if(x.second!=0){
//	 		for(int j=0;j<x.second;j++){
//	 			cout<<x.first<<" "; 
//			 } 
//		 }  	
//	 } 
//	 

} 
