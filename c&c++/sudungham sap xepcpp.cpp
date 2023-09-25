#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b; 
} 
bool cmp1(int a,int b){
	return abs(a)<abs(b); 
} 
bool cmp2(string a,string b){
	return a.length()>b.length(); 
} 
main(){
//    int n;cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i]; 
//	} 
//	sort(a,a+n,greater<int>());
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" "; 
//	} 

//    string s;
//	getline(cin,s);
//	sort(s.begin(),s.end(),greater<char>());
//	cout<<s<<endl; 
//      int n;cin>>n; 
//      string a[n];
//      for(int i=0;i<n;i++){
//      	cin>>a[i]; 
//	  } 
//	  sort(a,a+n);
//	  for(int i=0;i<n;i++){
//	  	cout<<a[i]<<" "; 
//	  } 
//       int n;cin>>n; 
//      vector<int> a(n);
//	  for(int i=0;i<n;i++){
//	  	   cin>>a[i]; 
//	  }
//	  sort(a.begin(),a.end());
//	  for(int i=0;i<n;i++){
//	  	  cout<<a[i]<<" "; 
//	  } 
     int n;cin>>n;
	 int a[n];
	 for(int i=0;i<n;i++){
	 	cin>>a[i]; 
	 } 
	 sort(a,a+n,cmp1);
	 for(int x:a){
	 	cout<<x<<" "; 
	 } 
	 //stable_sort() giup thu tu on dinh giong ban dau nhung dc sap xep  
} 
