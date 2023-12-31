#include<bits/stdc++.h>
#include "CaiVector10-10.cpp" 
using namespace std;
int main(){
	VECTOR<int> v(10);
	v.push_back(1);

	v.push_back(3);
	v.push_back(4);
	for(auto x:v){
		cout<<x<<" "; 
	} 
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" "; 
	} 
}


