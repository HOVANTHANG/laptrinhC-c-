#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
	//stack<sinhvien> s;
//	stack<int> s;
	/*for(int x:{3,7,2,1,4,7,2,8}) s.push(x);//push day vao
	s.top()=9;
	while(s.size())//while(not s.empty())
	{
		cout<<s.top()<<" ";//top xem dinh ma khong lay ra
		s.pop();//pop lay ra
	}*/
	//vidu doi 1 so sang co so 2
	/*int n;
	stack<int>  s;
	cin>>n;
	while(n){
		s.push(n%2);
		n=n>>1;//n/=2 dich bit
	}
	while(s.size()){
		cout<<s.top();
		s.pop();
	}*/
	//vidu doi 1 so sang co so 16
/*	int n;
	string hex="0123456789ABCDEF";
	stack<int> s;
	cin>>n;
	printf("\nn:=%X",n);//c1
	cout<<"\nn = "<<setbase(16)<<n;//c2
	cout<<"\nDoi :"; //c3
	while(n){
		s.push(n%16);
		n=n>>4;
	}
	while(s.size()){
		cout<<hex[s.top()];
		s.pop();
	}*/
	//bt kiem tra hop le cua dau ngoac
	string s;
	cin>>s;
	stack<char> a;
	for(char x:s){
		if(x=='('||x=='{'||x=='[') a.push(x);
		 else if(x==')'){if(a.top()!='(') break; else a.pop();}
		 else if(x=='}'){if(a.top()!='{') break; else a.pop();}
		 else if(x==']'){if(a.top()!='[') break; else a.pop();}
	} 
		cout<<(a.empty()?"hop le":"khong hop le");
}


