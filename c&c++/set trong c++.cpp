#include<bits/stdc++.h>
#include<set> 
using namespace std;
//insert
//size
//find()
//count()
//erase
 // multiset cho phep luu phan tu giong nhau 
//unordered_set<> 
main(){
//	set<int> s;
//	
//	for(int i=0;i<10;i++){
//		s.insert(i); 
//	} 
//	for(int x:s){
//		cout<<x<<" "; 
//	} 
//	cout<<endl; 
//	for(auto x : s){
//		cout<<x<<" "; 
//	} 
//	cout<<endl; 
//	for(set<int>:: iterator it=s.begin();it!=s.end();++it){
//		cout<<*it<<" "; 
//	} 
      //cout<<s.size();
//	  if(s.count(5)!=0){
//	  	cout<<"found\n"; 
//	  } else
//	   cout<<"Not found"; 
//      if(s.find(20)!=s.end()){
//      	cout<<"found"; 
//	  } else cout<<"Not found"; 
//         s.erase(5);  
//         for(auto x :s){
//         	cout<<x<<" "; 
//		 } 
//		 s.insert(5);  
//		 s.erase(s.find(5)); 
//		  for(auto x :s){
//         	cout<<x<<" "; 
//		 } 
//		 cout<<*s.begin()<<endl;
//		 cout<<*s.find(1)<<endl;
//		 cout<<*s.rbegin()<<endl; 
//		 cout<<*(s.end()--)<<endl; 

         multiset<int> ms;
         int n,k; 
		cin>>n>>k; 
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		} 
		for(int i=0;i<k;i++){
			ms.insert(a[i]); 
		} 
		
		for(int i=k;i<n;i++){
			cout<<*(ms.rbegin()); 
			ms.erase(ms.find(a[i-k]));
			ms.insert(a[i]); 
		} 
		
		cout<<*(ms.rbegin())<<endl; 
		

} 
