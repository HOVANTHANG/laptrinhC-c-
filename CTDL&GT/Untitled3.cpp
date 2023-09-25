#include<bits/stdc++.h>
#include"test1.cpp"
using namespace std;
int main(){
	STACK<string> s;
	for(auto x:{"ha","noi","mua","khai","giang"}) s.push(x);
	STACK<string> Z=s;

	s.top()="truong";
	while(not s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}

