/*#include<bits/stdc++.h>
using namespace std;
class sophuc{
	private:
		double pt,pa;
	public:
		friend istream&operator>>(istream &cin,sophuc &x);
		friend ostream&operator<<(ostream &cout,sophuc x);
		sophuc operator +(sophuc);
};
istream&operator>>(istream &cin,sophuc &x){
	cout<<"Nhap pt,pa:";cin>>x.pt>>x.pa;
}
ostream&operator<<(ostream &cout,sophuc x){
	cout<<x.pt<<"+"<<x.pa<<"i"<<endl;
}
sophuc sophuc::operator +(sophuc x){
	sophuc r;
	r.pt=x.pt+this->pt;
	r.pa=x.pa+this->pa;
	return r;
}
int main(){
	sophuc x,y,z;
	cin>>x;
	cout<<x;
	cin>>y;
	cout<<y;
	z=x+y;
	cout<<z;
}*/
#include<bits/stdc++.h>
using namespace std;
class dathuc{
	private:
		int n;
		double *hs;
	public:
		friend istream&operator>>(istream &cin,dathuc &x);
		friend ostream&operator<<(ostream &cout,dathuc x);
		double tinhgiatri(double);
		dathuc operator +(dathuc);
};
istream&operator>>(istream &cin,dathuc &x){
	cout<<"Nhap bac cua dathuc:";cin>>x.n;
	x.hs=new double[x.n+1];
	for(int i=0;i<=x.n;i++) cin>>x.hs[i];
}
ostream &operator <<(ostream &cout,dathuc x){
	for(int i=0;i<=x.n;i++)
		cout<<x.hs[i]<<" ";
}
double dathuc::tinhgiatri(double k){
	double sum=0;
	for(int i=0;i<=n;i++){
		sum+=hs[i]*pow(k,i);
	}
	return sum;
}
dathuc dathuc::operator +(dathuc x){
	dathuc tong;
	int min=(x.n>n)?n:x.n;
	int max=(x.n>n)?x.n:n;
	tong.hs=new double[x.n+n];
	for(int i=0;i<=min;i++){
		tong.hs[i]=hs[i]+x.hs[i];
	}
	for(int i=min+1;i<=max;i++){
		if(x.n>n){
			tong.hs[i]=x.hs[i];
		}else 
		   tong.hs[i]=hs[i];
	}
	return tong;
}


int main(){
	dathuc x,y,z;
	cin>>x;
	cout<<x;
	cin>>y;
	cout<<y;
	z=x+y;
	cout<<z;
	double tong=x.tinhgiatri(10.00)+y.tinhgiatri(10.00);
	cout<<tong<<endl;
}



