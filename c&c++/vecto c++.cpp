#include<bits/stdc++.h>
using namespace std; 
//vector<type data> tenvecto;
//push_back() day gia tri vao
// v.size()  kichthuoc
//truy cap thong qua chi so
// Duyet thong qua index
//Duyet thong qua foreach
//Duyet thong qua iterator
//Duyet thong qua auto
// vector<int> v(int n,value)
// vector<int> v(n)
main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	cout<<v[0];
	int x =v.size();
	cout<<x<<endl; 
//	for(int i=0;i<v.size();i++){
//		cout<<v[i]; 
//	} 
//    for(int x: v){
//    	cout<<x; 
//	} 
//    for(vector<int>::iterator it =v.begin();it!=v.end();it++ ){
//    	cout<<*it<<endl; 
//	} 
//    for(auto it = v.begin();it!=v.end();it++){
//    	cout<<*it<<endl ;
//	} 
//    cout<<v[1];
//	cout<<*(v.begin()+1); 
   string s=" ngon ngu lap trinh";
   stringstream ss(s);
   string tmp;
   vector<string> l ;
   while(ss >> tmp){
   	   l.push_back(tmp); 
   } 
   for(string x: l){
   	  cout<<x<<endl; 
   } 




} 

 
