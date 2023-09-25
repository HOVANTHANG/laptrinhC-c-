#include<bits/stdc++.h>
using namespace std;
//pair<datatype1,datatype2> v;
//make_pair(a,b)
//v.first
//v.second
//{} 
main(){
	// pair dung de luu 2 gia tri di voi nhau nhu diem dau,diem cuoi ... 
//	pair<int ,int> v = make_pair(100,200);
//	 cout<<v.first<<endl;
//	 cout<<v.second<<endl; 
// 	pair<int ,int> v = {100,200};
// 	cout<<v.first<<endl;


    tuple<int ,int ,int> v{1,2,3};
	cout<<get<0>(v)<<endl;
	cout<<get<1>(v)<<endl; 
	tuple<string,int,string> t = make_tuple("java",50,"hello");
	cout<<get<0>(t)<<endl;
	cout<<get<1>(t)<<endl; 

} 
