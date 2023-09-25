#include<bits/stdc++.h>
#include<map>
#include<set>
using namespace std;
/*main(){
	int n;cin>>n;
//	map<int,int> mp;
//	for(int i=0;i<n;i++){
//		int x;cin>>x;
//		mp[x]++;
//	} 
//	cout<<mp.size()<<endl; 
//	set<int> set;
//	for(int i=0;i<n;i++){
//		int x; cin>>x;
//		set.insert(x); 
//	} 
//	cout<<set.size() <<endl; 
	 
} */
/*main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n]; 
	    set<int> s ;
		for(int &x:a){
			cin>>x; 
			s.insert(x); 
		} 
//		sort(a,a+n);
//		int q;
//		cin>>q;
//		while(q--){
//			int k;cin>>k;			
//				if(binary_search(a,a+n,k)){
//					cout<<"YES"; 
//				} else 
//				cout<<"No"; 
//		} 

      int q;cin>>q;
	  while(q--){
	  	int x;cin>>x;
		  if(s.count(x)!=0){
		  	   cout<<"YES\n" ;
		  } else cout<<"NO\n"; 
	  } 
	} 
} */
/*main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>m>>n;
		int a[n],b[m];
		
		set<int> s;
		for(int i=0;i<m;i++){
			cin>>b[i];
			s.insert(b[i]); 
		} 
		for(int i=0;i<n;i++){
			cin>>a[i]; 
		} 
		for(int i=0;i<n;i++){
			if(s.find(a[i])==s.end()) {
				cout<<a[i]<<" "; 
			}	
		} 
	} 	
} 
*/
/*main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n]; 
		map<int ,int> mp; 
		for(int &x:a){
			cin>>x; 
			mp[x]++; 
		} 
//		int max1=INT_MIN;
//		for(int i=0;i<n;i++){
//			if(mp[a[i]]!=0){
//				max1=max(max1,mp[a[i]]);
//				mp[a[i]]=0; 
//			}
//		} 
	  int res; int max1=INT_MIN;
	  for(auto x :mp){
	  	if(x.second>max1){
	  		max1=x.second;
			  res=x.first; 
		  } 
	  } 
		
		cout<<res<<" "<<max1<<endl; 
	} 	
} 
*/
/*main(){
	int t;cin>>t;
	cin.ignore(); 
	while(t--){
		string s;
		getline(cin,s); 
		map<char,int> mp;
		for(char x:s){
			mp[x]++; 
		} 
		 char res;int max1=INT_MIN;
		 for(auto x:mp){
		 	if(x.second>max1) {
		 		max1=x.second;
				 res=x.first; 
			 }	
		 } 
		 cout<<res<<endl; 
		
	} 	
} */






