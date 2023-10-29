#include<bits/stdc++.h>
using namespace std;
class Dathuc{
	private:
	   int n;
	   double *hs; 
	public:
	   Dathuc(){
	     n=1;
		 hs = new double [n+5];
	   } 
	  
	   void Nhap();
	   friend ostream &operator<<(ostream &count,Dathuc x);
	   double TinhGiaTri(double k);	
}; 
void Dathuc::Nhap(){
	cout<<"Nhap bac cua da thuc:" ;cin>>n;

	cout<<"\nNhap he so cua da thuc:";
	for(int i=0;i<=n;i++){
		cin>>hs[i] ;
	}
} 
ostream &operator<<(ostream &cout,Dathuc x){
	for(int i=0;i<=x.n;i++) {
		cout<<x.hs[i]<<" ";
	}
}
double Dathuc::TinhGiaTri(double k){
	double sum=0;
	for(int i=0;i<=n;i++) {
		sum+=hs[i]*pow(k,i) ;
	}
	return sum; 
}



int main(){
	Dathuc dt;
	dt.Nhap();
	cout<<dt;
	double d1,d2;
	cout<<"\nNhap d1 va d2:" ;
	cin>>d1>>d2;
	if(dt.TinhGiaTri(d1)-dt.TinhGiaTri(d2)<0) {
		cout<<"Khong xac dinh";
	}else{
		cout<<sqrt(dt.TinhGiaTri(d1)-dt.TinhGiaTri(d2)) ;
	} 
}


