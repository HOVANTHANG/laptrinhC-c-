#include<bits/stdc++.h>
using namespace std;
main(){
	/*int n;
	cin>>n; 
	vector<int> v;
	int x; 
	for(int i=0;i<n;i++){
		cin>>x;
		if(x==1){
			int a;
			cin>>a;
			v.push_back(a); 
		} else if(v.size()!=0&&x==2){
			v.pop_back(); 
		} 
	} 
	if(v.empty()){
		cout<<"EMPTY"; 
	} else{
		for(auto k : v){
			cout<<k<<" "; 
		} 
	} 
	*/
	int n;
	cin>>n; 
   set<int> se; 
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		se.insert(a); 
	} 
	cout<<se.size()<<endl; 
	if(se.find(8)==se.end()){
		cout<<"NO"; 
	} else {
		cout<<"YES"; 
	} 
	if(se.count(4)!=0){
		cout<<"YES" ;
	} else{
		cout<<"NO"; 
	} 
	
	
	
	
	
	
	
} 
