#include<bits/stdc++.h>
#include<math.h>
#include<iostream>
using namespace std; 
using ll =long long;

/*main(){
	int Tc;
	 cin>>Tc ;
	while(Tc--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i]; 
		} 
		int res = INT_MAX ;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				res = min(res,(max(a[i],a[j])-min(a[i],a[j]))) ;
				
			} 
		} 
		cout<< res<<endl; 
	} 
} 
main(){
	  int TC;
	  cin>>TC;
	  while(TC--){
	  	  int n;
	  	  int a[n]; 
			cin>>n;
			for(int i=0;i<n;i++){
				cin>>a[i]; 
			} 
			
		sort(a,a+n);
		int res= INT_MAX;
		for(int i=1;i<n;i++){
			res= min(res,a[i]-a[i-1]); 
		} 
		cout << res<<endl;	 
	  } 
} 
main(){
	  int TC;
	  cin>>TC;
	  while(TC--){
	  	  int n,k;
	  	  int a[n]; 
			cin>>n>>k;
			for(int i=0;i<n;i++){
				cin>>a[i]; 
			} 
		sort(a,a+n,greater<int>());
		for(int i=0;i<k;i--){
			cout <<a[i]<<" ";
		}
		cout<<endl; 
	  } 
} 
int cnt [100002]; 
main(){
	int n;
	int a[n];
	int dem=0; 
	cin>>n;

	memset(cnt,0,sizeof(cnt)) ;
	for(int i=0;i<n;i++){
		 cin>>a[i];
		 cnt[a[i]]++; 
	}
	for(int i=0;i<n;i++){
		if(cnt[a[i]]>=2) {
			dem++; 
		}
	} 
	cout <<dem <<endl; 
	 
} 
main(){
	int n;
	int a[n];
	int dem=0;
	int i; 
		cin>>n;
		
		map<int,int> mp ;
		for(int i=0;i<n;i++){
			cin>>a[i] ;
			mp[a[i]]++; 
			}
		for(int i=0;i<n;i++){
			if(mp[a[i]]>=2){
				dem++; 
			} 
		} 
		cout<<dem<<endl;	 
} 
*/




