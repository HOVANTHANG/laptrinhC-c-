#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//c=a+b
//substr(int a,int b)
//a.compare(b)
//a==b
//a>b 
//a<b 
//s.length
//s.size
//stoi
//stroll
// stringstream 

main(){
	//length();size();
/*	string s;
	int n;cin>>n;
	cin.ignore(1); 
	getline(cin,s);
	cout<<s; 
	cout<<s.length();
	cout<<s.size(); 
	int x = stoi(s);
	;
	cout<<x ;*/
	string s="hello moi nguoi";
	//tach tung tu 
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		cout<<tmp<<endl; 
	} 
	
	 
} 
