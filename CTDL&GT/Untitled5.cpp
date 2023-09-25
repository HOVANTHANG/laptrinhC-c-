#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
	string s;
	stack<int> a;
	map<char,int> k={{'C',12},{'H',1},{'O',16},{'(',0}};
	cin>>s;
	for(char x:s)
	if(x=='C'|| x=='H' || x=='O' || x=='(')   a.push(k[x]);
	else if(x==')')
	{
			int t=0;
			while(a.top()!=0){
				t+=a.top();a.pop();}
				a.top()=t;
			
	} else a.top()*=x-'0';
	int t=0;
	while(a.size()){t+=a.top();a.pop();}
	cout<<t;
}


