#include<bits/stdc++.h>
#include<vector>
using namespace std;
//vec to la 1 cau truc du lieu tuyen tinh,truu tuong,co kha nang them bot
//o cuoi va co kha nang duyet (theo chi so va duyet xuoi va duyet nguoc)*
//Luu tru voi so luong khong gioi han
/*int main(){
	vector<int> v;//vecto rong
	vector<int> A(3);//Vector A co 3 phan tu
	vector<int> B(5,1);//Vector B co 5 so 1
	int x[]={4,7,2,8,1,6,8,9,0};
	vector<int> c(x+1,x+5);//7,2,8,1
	vector<int> D(c.begin(),c.end());//D=C
	vector<int> E=D;
	cout<<"\nB: ";for(int i=0;i<B.size();i++) cout<<B[i]<<" ";//Duyet theo chi so
	cout<<"\nC: ";for(auto x:c) cout<<x<<" ";//Duyet xuoi
	cout<<"\nD: ";for(vector<int>::iterator it=D.begin();it!=D.end();it++) cout<<*it<<" ";//Duyet Xuoi
	E.resize(10,3);
	E.push_back(-2); 
	cout<<"\nNguoc E:";
	for(vector<int>::reverse_iterator it=E.rbegin();it!=E.rend();it++) cout<<*it<<" ";
	E.front()=E.back()=-3;
	cout<<"\nE :";for(auto x: E) cout<<x<<" ";
	cout<<"\nE.size :";cout<<E.size();
	cout<<"\nE.cap :";cout<<E.capacity();
}
*/
//Tong 3 da thuc
/*int main(){
	int m,n,k;
	cin>>n;vector<double> A(n+1); for(auto &x:A) cin>>x;
	cin>>m;vector<double> B(m+1); for(auto &x:B) cin>>x;
	cin>>k;vector<double> C(k+1); for(auto &x:C) cin>>x;
	
	vector<double> D(1+max({n,m,k}),0);
	for(int i=0;i<A.size();i++) D[i]+=A[i];
	for(int i=0;i<B.size();i++) D[i]+=B[i];
	for(int i=0;i<C.size();i++) D[i]+=C[i];
	while(D.size()>1 && D.back()==0) D.pop_back();
	for(auto x:D) cout<<setprecision(3)<<fixed<<x<<" ";
		
}*/
//Vd giai thua so lon
int main(){
	long n,m;
	cin>>n;
	vector<int> A(1,1);
	for(;n>1;n--){
		m=0;
		for(auto &x:A){
			m+=x*n;
			x=m%10;
			m/=10;
		}
	  for(;m>0;m/=10) A.push_back(m%10);
	}
	reverse(A.begin(),A.end());
	for(auto x:A) cout<<x;
}
