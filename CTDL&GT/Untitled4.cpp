#include<bits/stdc++.h>
using namespace std;

int main(){
/*	stack<char> t; 
	string s;
	 cin>>s;
	  for(auto x:s){
	  	if(x=='('||x=='['||x=='{'){
	  		t.push(x);  
		  }else if(x==')'){if(t.top()!='(') break;else t.pop();}
		   else if(x==']'){if(t.top()!='[') break;else t.pop();}
		   else if(x=='}'){if(t.top()!='{') break;else t.pop();}
	  }
	  if(t.empty()){
	  	cout<<"Hop le!" ;
	  }else{
	  	cout<<"Khong hop le!"; 
	  } */
	  /*queue<int> q;
	  int n;
	  cin>>n;int a[n];
	  for(int i=1;i<=n;i++){
	  	cin>>a[i]; 
	  } 
	  int res=0; 
	  for(int i=1;i<=n;i++){
	  	q.push(a[i]);
		  if(q.front()>=a[i]+3){
		  	q.pop(); 
		  } else{
		  	res+=q.front() ; 
		  } 
	  } 
	  cout<<q.size()<<" "<<res; */
	  map<char,int> k={{'C',12},{'H',1},{'O',16},{'(',0}};
	  stack<int> t; 
	  string s;
	  cin>>s; 
	  for(auto x:s){
	  	if(x=='C'||x=='H'||x=='O'||x=='('){
	  		t.push(k[x]); 
		  }else if(x==')'){
			int sum=0;
			while(t.top()!='('){
				sum+=t.top() ;
				t.pop(); 
			} 
			t.top()=sum; 
		  }else{
		  	t.top()*=x-'0'; 
		  } 
	  }
	  int sum=0; 
	  while(t.size()){
	  	sum+=t.top() ;
		  t.pop(); 
	  } 
	  cout<<"\n"<<sum; 
	  
	  
	  
}


