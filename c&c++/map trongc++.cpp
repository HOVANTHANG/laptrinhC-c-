#include<bits/stdc++.h>
#include<map>
#include<multimap> 
using namespace std;

// map<int,int> mp
// size
//insert
//count
//find
//erase
//multimap
//unordered_map 
/*main(){
	map<int,int> mp;
	mp.insert({100,200});
	mp.insert({200,300});
	mp[300]=400;
	mp[400]=500 ;
//	for(pair<int,int> x : mp){
//		cout<<x.first<<" "<<x.second<<endl; 
//	} 
//	for(auto x : mp){
//		cout<<x.first<<" "<<x.second<<endl; 
//	} 
//	for(map<int,int>::iterator x =mp.begin();x!=mp.end();++x){
//		cout<<(*x).first<<" "<<(*x).second<<endl; 
//	} 

//    if(mp.count(100)!=0){
//    	cout<<"Found"; 
//	} else
//	  cout<<"Not Found"; 
//        if(mp.find(500)!=mp.end()){
//        	cout<<"Found"; 
//		} else 
//		cout<<"Not found"; 
        cout<<mp[100]<<endl;
	
} */
main(){
	int n;cin>>n;
	int a[n]; 
	map<int ,int> mp; 
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++; 	 
	} 
//	for(auto x :mp){
//		cout<<x.first<<" "<<x.second<<endl; 
//	} 
	for(int i=0;i<n;i++){
		if(mp[a[i]]!=0){
			cout<<a[i]<<" "<<mp[a[i]]<<endl; 
			mp[a[i]]=0; 
		} 
	} 
	
	
} 
