#include<bits/stdc++.h>
using namespace std;
class MaTran{
	int m,n;
	double **a;
	public:
	friend istream &operator>>(istream &cin,MaTran &x){
		cout<<"Nhap so hang:";cin>>x.m;
		cout<<"Nhap so cot:";cin>>x.n;
		x.a = new double*[x.m+5];
		for(int i=0;i<x.m;i++) {
			x.a[i] = new double[x.n+5];   
		}
		for(int i=0;i<x.m;i++){
			for(int j=0;j<x.n;j++){
				cin>>x.a[i][j]; 
			} 
		} 	 
	} 
	friend ostream &operator<<(ostream &cout,MaTran x){
		for(int i=0;i<x.m;i++){
			for(int j=0;j<x.n;j++){
				cout<<x.a[i][j]<<"\t"; 
			} 
			cout<<"\n"; 
		} 
	} 
	double operator!(){
		double sum=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				sum+=a[i][j]; 
			} 
		} 
		return sum; 
	} 
	MaTran operator+(MaTran x){
		MaTran y;
		y.m =m;
		y.n=n;
		y.a = new double*[y.m+5];
		for(int i=0;i<y.m;i++){
			y.a[i]= new double[y.n+5]; 
		} 
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				y.a[i][j] = x.a[i][j]+ a[i][j]; 
			} 
		}
		return y; 	 
	} 
	void TongHang(){
		for(int i=0;i<m;i++){
			double sum=0;
			for(int j=0;j<n;j++){
				sum+=a[i][j]; 
			} 
			cout<<sum<<"\n"; 
		} 
	} 
	void sapxep(){
		int k=m*n;
		for(int i=0;i<k;i++){
			for(int j=i+1;j<k;j++){
				if(a[i/m][i%m]>a[j/m][j%m]) swap(a[i/m][i%m],a[j/m][j%m]); 
			} 
		} 
	} 
}; 
class SoPhuc{
	private:
	double soThuc,soAo;
	public:
	SoPhuc(){
		soThuc=soAo=1; 
	} 
	SoPhuc(double st,double sa){
		soThuc=st;
		soAo=sa; 
	} 
	void Nhap(){
		cout<<"Nhap so thuc:";cin>>soThuc;
		cout<<"Nhap so ao:";cin>>soAo; 
	} 
	void xuat(){
		cout<<soThuc<<"+"<<soAo<<"i"<<endl; 
	} 
	SoPhuc operator+(SoPhuc x){
		SoPhuc y;
		y.soThuc = soThuc+x.soThuc;
		y.soAo = soAo+ x.soAo ;
		return y; 
	} 
	SoPhuc operator-(SoPhuc x){
		SoPhuc y;
		y.soThuc = soThuc-x.soThuc;
		y.soAo = soAo-x.soAo ;
		return y; 
	} 
	SoPhuc operator*(SoPhuc x){
		SoPhuc y;
		y.soThuc = soThuc*x.soThuc-soAo*x.soAo;
		y.soAo = soThuc*x.soAo + x.soThuc*soAo; 
		return y; 
	} 
	SoPhuc operator/(SoPhuc x){
		SoPhuc y;
		y.soThuc = (soThuc*x.soThuc +soAo*x.soAo )/(x.soThuc*x.soThuc+x.soAo*x.soAo);
		y.soAo = (x.soThuc*soAo- x.soAo*soThuc)/(x.soThuc*x.soThuc+x.soAo*x.soAo);
		return y; 
	} 
	
}; 
class DaThuc{
	private: 
	int n;
	double *a;
	public:
	friend istream &operator>>(istream &cin,DaThuc &x){
			cout<<"Nhap bac cua da thuc:";cin>>x.n;
			x.a= new double[x.n+5];
			for(int i=0;i<=x.n;i++){
				cin>>x.a[i]; 
			} 
		}
	friend ostream &operator<<(ostream &cout,DaThuc x){
			cout<<x.a[0]; 
			for(int i=1;i<=x.n;i++){
				cout<<"+"<<x.a[i]<<"*x^"<<i; 
			} 
		} 
		double TongDT(double x){
			double sum=0;
			for(int i=0;i<=n;i++){
				sum+=a[i]*pow(x,i); 
			} 
			return sum; 
		} 
		DaThuc operator +(DaThuc x){
			DaThuc t;
			int max=(n>x.n)?n:x.n;
			int min=(n<x.n)?n:x.n;
			t.n=max; 
			t.a = new double[t.n+1];
			for(int i=0;i<=min;i++){
				t.a[i]= a[i]+x.a[i]; 
			} 
			for(int i=min+1;i<=max;i++){
				if(n>x.n){
					t.a[i]=a[i]; 
				}else{
					t.a[i]=x.a[i]; 
				} 
		}
			return t; 	
		} 
		DaThuc operator -(DaThuc x){
			DaThuc t;
			int max=(n>x.n)?n:x.n;
			int min=(n<x.n)?n:x.n;
			t.n=max; 
			t.a = new double[t.n+1];
			for(int i=0;i<=min;i++){
				t.a[i]= a[i]+x.a[i]; 
			} 
			for(int i=min+1;i<=max;i++){
				if(n>x.n){
					t.a[i]=a[i]-0; 
				}else{
					t.a[i]=0-x.a[i]; 
				} 
			}
			return t; 	
		} 
	    double TongDaoHam(double x){
	    	double sum=0; 
			for(int i=1;i<=n;i++){
				sum+= a[i]*i*pow(x,i-1); 
			} 
			return sum; 
		} 
}; 
class PhanSo{
	private:
	int tuSo,mauSo;
	public:
		PhanSo(){
			tuSo=mauSo=1; 
		} 
		PhanSo(int ts,int ms){
			tuSo=ts;
			mauSo=ms; 
		} 
		friend istream &operator>>(istream &cin,PhanSo &x){
			cout<<"Nhap tu so:";cin>>x.tuSo;
			cout<<"Nhap mau so:";cin>>x.mauSo; 
		} 
		friend ostream &operator<<(ostream &cout,PhanSo x){
			int ucln=x.UCLN(x.tuSo,x.mauSo);
			cout<<x.tuSo/ucln<<"/"<<x.mauSo/ucln<<endl; 
		} 
		int UCLN(int a,int b){
			int r=a%b;
			while(r!=0){
				a=b;
				b=r;
				r=a%b ;
			} 
			return b; 
		} 
	/*	double UCLN(double a,float b){
			if(a==b) return a;
			else if(a>b) UCLN(a-b,b);
			else UCLN(a,b-a);  
		} */
		PhanSo operator +(PhanSo a){
			PhanSo b;
			b.tuSo = tuSo*a.mauSo+a.tuSo*mauSo;
			b.mauSo = mauSo*a.mauSo;
			return b; 
		}
		PhanSo operator -(PhanSo a){
			PhanSo b;
			b.tuSo = tuSo*a.mauSo-a.tuSo*mauSo;
			b.mauSo = mauSo*a.mauSo;
			return b; 
		}
		PhanSo operator *(PhanSo a){
			PhanSo b;
			b.tuSo = tuSo*a.tuSo;
			b.mauSo = mauSo*a.mauSo;
			return b; 
		}
		PhanSo operator /(PhanSo a){
			PhanSo b;
			b.tuSo = tuSo*a.mauSo;
			b.mauSo = mauSo*a.tuSo;
			return b; 
		}
		
}; 
class DaySo{
	private:
	int n;
	int *a;
	public:
	friend istream &operator>>(istream &cin,DaySo &x){
		cout<<"Nhap n:";cin>>x.n;
		x.a= new int[x.n+5];
		for(int i=1;i<=x.n;i++){
			cin>>x.a[i];
		}
	}
	friend ostream &operator<<(ostream &cout,DaySo x){
		for(int i=1;i<=x.n;i++){
			cout<<x.a[i]<<" "; 
		} 
	} 
	void find(){
		int d; 
		int dem=0; 
		for(int i=1;i<=n;i++){
			if(a[i]%2!=0){
				d=i;
				dem++; 
				break; 
			} 
		} 
		
		if(dem==0){
			cout<<"\nKhong co so le!"; 
		}else{
			int max=a[d];
			for(int i=1;i<=n;i++){
				if(a[i]%2!=0&&a[i]>max){
					max =a[i]; 
				} 
			} 
			cout<<max; 
		} 
		
	} 
	
}; 


int main(){
	/*MaTran a,b,c;
	cin>>a;cout<<a;
	cin>>b;cout<<b;
	cout<<"\n"<<!a;
	cout<<"\n"<<!b;
	c=a+b;
	cout<<c;
	cout<<"\n"; 
	c.TongHang();
	c.sapxep();
	cout<<c; */
	/*SoPhuc a(5,6),b,c,d,e,f;
	b.Nhap();
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	c.xuat();d.xuat();e.xuat();f.xuat() ; */
	 /* DaThuc x,y,z,t;
	  cin>>x;
	  cin>>y;
	  cout<<"\n"<<x.TongDT(3);
	  z=x+y;
	  t=x-y;
	  cout<<"\n"; 
	  cout<<z;
	  cout<<"\n";
	  cout<<t; 
	  cout<<"\n"<<t.TongDaoHam(3); */
	  /*PhanSo a(3,4),b,c,d,e,f;
	  cin>>b;
	  c=a+b;cout<<c; 
	  d=a-b;cout<<d; 
	  e=a*b;cout<<e; 
	  f=a/b;cout<<f; */
	  
	  /* DaySo a ;
	   cin>>a;
	   cout<<a;
	   cout<<"\n";a.find(); */
	   
}


