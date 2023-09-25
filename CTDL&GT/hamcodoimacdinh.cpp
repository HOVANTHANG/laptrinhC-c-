#include<bits/stdc++.h>
using namespace std;
//ham co doi mac dinh
int tong(int a=2,int b=3);
int tong(int a,int b){
	return a+b;
}
//tim max cua gia tri |ai-aj|
void nhap(int &n,int *&a){
	cout<<"Nhap n=";
	cin>>n;
    a=new int[n+5];
}
int *nhap(int &n,char ten='a'){
	cout<<"Nhap so phan tu cua day "<<ten<<" ";
	cin>>n;
	int *a=new int [n+5];
	for(int i=1;i<=n;i++){
		cout<<ten<<"["<<i<<"] = ";cin>>a[i];
	}
	return a;
}
int maxmin(int n,int *a,int ok=true){
	int s=a[1];
	for(int i=2;i<=n;i++)
	if(s<a[i]==ok) s=a[i];
	return s;
}
//Ham co doi la ham khac


double tong(int n,double f(double))
{
     double s=0;
	 for(int i=1;i<=n;i++){
	 	s+=f(i);
	 }	return s;
}
double bp(double x){
	return x*x;
}
double ff(double x){
	return x*x+x;
}
bool cmp(int a,int b){
	return a<b;
}
bool sosanh(int a,int b){
	return a%2==b%2?a<b:a%2<b%2;
}
void sapxep(int n,int *a,bool ss(int,int))
{
      for(int i=0;i<n;i++){
      	for(int j=i+1;j<n;j++){
      		if(ss(a[j],a[i])) 
      		{
      				swap(a[i],a[j]);
      		//	a[i]^=a[j];a[j]^=a[i];a[i]^=a[j];
			  }
      	
		  }
	  }	
}
//ham mau
/*template <typename T>
T gcd(T a,T b){
	while(b){
		T r=a%b;
		a=b;
		b=r;
	}
	return a;
}*/
template <class T>
int nhap1(T *&a){
	int n;
	cin>>n;
	a=new T[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	return n;
}

template <class k>
k tong(int n,k *a){
	k s=0;
	for(int i=1;i<=n;i++){
		s+=a[i];
	}
	return s;
}

int main(){
	/*int n,*a,m,*b;
	a=nhap(n);
	b=nhap(m,'b');
	cout<<"\nDo lech cua day:"<<maxmin(n,a)-maxmin(n,a,false);
	delete []a;
	delete []b;
	*/
	/*int n;
	cin>>n;
	cout<<"s1="<<tong(n,bp)<<endl;
	cout<<"s2="<<tong(n,sin)<<"\n";
	cout<<"S3="<<tong(n,sqrt)<<"\n";
//	cout<<"s4="<<tong(n,ff)<<"\n";
	cout<<"s4="<<tong(n,[](double x) {return x*x+x;})<<"\n";*/
	
/*	int a[]={42,63,64,775,84,581,4,53}, n=sizeof(a)/sizeof(a[0]);
	sapxep(n,a,cmp);
//	sapxep(n,a,sosanh);
	for(auto x:a){
		cout<<x<<" ";
	}*/
//	cout<<gcd<long long>(27,72);
	
	int n,m,k,*a;
	double *b;
	complex<double> *c;
	n=nhap1(a); cout<<"\nTong day a="<<tong(n,a)<<"\n";delete []a;
		m=nhap1(b); cout<<"\nTong day b="<<tong(m,b)<<"\n";delete []b;
			k=nhap1(c); cout<<"\nTong day c="<<tong<complex<double>>(k,c)<<"\n";delete []c;
}


