#include<bits/stdc++.h>
using namespace std;

//set<string> convert(string s){
//	stringstream ss(s);
//	string word;
//	set<string> se; 
//	while(ss>>word){
//		se.insert(word); 
//	} 
//	return se; 
//} 
//main(){
//        string s1,s2;
//		getline(cin,s1);
//		getline(cin,s2); 
//		set<string> se1 = convert(s1);
//		set<string> se2 = convert(s2);
//		
//		for(auto x:se1){
//			if(se2.find(x)==se2.end()){
//				cout<<x<<" "; 
//			} 
//		} cout<<endl; 	 
//} 

main(){
	string s;
	getline(cin,s);
	if(s[0]=='0'){
		cout<<"-1";  
	} 
	set<char> se;
	for(char it : s){
		if(!isdigit(it)){
			cout<<"-1"; 
		} else
		  se.insert(it); 
	} 
	if(se.size()==10){
		cout<<"YES" ;
	} else cout<<"NO"; 
	
	
	
	
	
	
} 
