#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	    int kc1=a.first*a.first+a.second*a.second;
		int kc2=b.first*b.first+b.second*b.second;
	    if(kc1!=kc2){
	    	return kc1<kc2; 
		}else if(a.first!=b.first){
			return kc1<kc2; 
		} else if(a.second!=b.second){
			return kc1<kc2; 
		} 
} 
int tong(int n){
	int dem=0;
	while(n){
		int k=n%10; 
		if(k%2==1){
			dem++; 
		} 
		n/=10; 
	} 
	return dem; 
} 
bool cmp1(int a,int b){
      if(tong(a)!=tong(b)){
      	return tong(a)<tong(b); 
	  }	else {
	  	return a<b; 
	  } 
} 
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0; 
		} 
	} 
	return  1; 
} 
int dem(int n){
	int dem=0;
	while(n){
		if(snt(n%10)==1){
			dem++; 
		}  
		n/=10; 
	} 
	return dem; 
} 
bool cmp2(int a,int b){
	return dem(a)<dem(b); 
} 









main(){
	/*int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	sort(a,a+n);
	for(int x:a){
		cout<<x<<" "; 
	} 
	sort(a,a+n,greater<int>());
	for(int i=0;i<n;i++){
		cout<<a[i]<<" "; 
	} */
	
	/*int n;
	cin>>n; 
	vector<int> a(n); 
	
     for(int i=0;i<n;i++){
     	cin>>a[i]; 
	 } 
	sort(a.begin(),a.end(),greater<int>());
	for(auto x :a){
		cout<<x<<" ";
	} 
	*/
	/*int n;
	cin>>n; 
	vector<char> a(n); 
	
     for(int i=0;i<n;i++){
     	cin>>a[i]; 
	 } 
	sort(a.begin(),a.end(),greater<int>());
	for(auto x :a){
		cout<<x<<" ";
	} */
	/*int n;
	cin>>n; 
	vector<string> a(n); 
	
     for(int i=0;i<n;i++){
     	cin>>a[i]; 
	 } 
	sort(a.begin(),a.end(),greater<string>());
	for(auto x :a){
		cout<<x<<" ";
	} */
	
	/*int n;
	cin>>n; 
	vector<pair<int,int>> a(n); 
	
     for(int i=0;i<n;i++){
     	cin>>a[i].first>>a[i].second; 
	 } 
	sort(a.begin(),a.end());
	for(auto x :a){
		cout<<x.first<<" "<<x.second;
	} 
	*/
   /*int n;
   cin>>n;
   vector<pair<int,int>> a(n);
   for(int i=0;i<n;i++){
   	  cin>>a[i].first>>a[i].second; 
   }	
	sort(a.begin(),a.end(),cmp);
	
	for(auto x :a){
		cout<<x.first<<" "<<x.second<<endl; 
	} */
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	stable_sort(a,a+n,cmp2); 
	for(int i=0;i<n;i++){
		cout<<a[i]<<" "; 
	} 













	
} 
