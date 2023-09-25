#include<bits/stdc++.h>
#include<stack>
using namespace std;
//BAI1-thuat toan chuyen trung to sang hau to
//b1 nhap input
//b2 stack rong
//b3 duyet ptu cua input
//+Neu so thi dua vao output
//+Neu ( thi vao stack
//+Neu ) lay het cac ptoan den ( trong stack dua sang output bo ( khoi stack
//+Neu ptoan-Lay cac ptoan uu tien cao hon hoac bang kho stack va sua ptoan vao stack
//b4 Lay tat ca cac ptoan trong stack dua sang ouput
//B5 Xuat out
map<char,int> UT={{'(',0},{'+',1},{'-',1},{'*',2},{'/',2}};
string hauto(string in){
	string out;
	stack<char> s;
	for(char c:in)
	if('0'<=c&&c<='9') out+=c;
	else if(c=='(') s.push(c);
	else if(c==')')
	{
		while(s.top()!='('){
			out+=s.top();s.pop();
		}
		s.pop();
	}
	else 
	{
		while(s.size()&& UT[s.top()]>=UT[c]){
			out+=s.top();s.pop();
		}
		s.push(c);
	}
	while(s.size()){
		out+=s.top();s.pop();
	}
	return out;
}
int tinh(string in)
{
	stack<int> s;
	for(char c:in)
	if('0'<=c&&c<='9') s.push(c-'0');
	else 
	{
	   int b=s.top();s.pop();	
	   int a=s.top();s.pop();
	   if(c=='+') s.push(a+b);
	   else if(c=='-') s.push(a-b);
	   else if(c=='*') s.push(a*b);
	   else s.push(a/b);
	}
	return s.top();
}
//Bai thuat toan DFS
//+Bai toan moi duong ve 0
//cho n=a*b(a<=b)
//thi n sinh ra m=(a-1)(b+1)
//B1 Nhap s,f
//B2 khoi tao stack rong
//B3 khai bao mang d[s+5] toan 0
//B4 dua s vao stack va d[s]=1
//B5 lay u ra khoi stack
//+Duyet a tu 1->can u neu u chia het cho a thi v=(a-1)(u/a+1) Neu d[v]=0 thi d[v]=1 dua v vao stack neu v=f tra ve true
//B6 Lap lai B5 toi khi stack rong thi tra ve false

bool DFS(int s,int f)
{
	int d[s+5]={};//toan 0
	//fill(d,d+s+5,0);
	stack<int> S;
	d[s]=1;
	S.push(s);
	while(S.size()){
		int u=S.top();S.pop();
		for(int a=1;a*a<=u;a++)
			if(u%a==0){
				int v=(a-1)*(u/a+1);
				if(d[v]==0&&v>=f){
					d[v]=1;
					S.push(v);
					if(v==f) return true;
				}
			}
	//	if(d[f]==1) return true;
	}
	return false;
}
int main(){
	int s=1000,f=10;
	if(DFS(s,f)) cout<<"Di Duoc";
	else cout<<"Khong di duoc";
}



/*int main(){
	string x="7+4*(6-2*3)+(2+3)*5";
	cin>>x;
	string y=hauto(x);
	cout<<"Bieu thuc hau to:"<<hauto(x)<<endl;
	cout<<"Bieu thuc gia tri:"<<tinh(y);
}*/


