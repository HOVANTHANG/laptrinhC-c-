/*#include<bits/stdc++.h>
using namespace std;
class Dsnguyen{
	private:
	   int n;
	   int *hs;
	   public:
	   
	   friend istream &operator>>(istream &cin,Dsnguyen &x);
	   friend ostream &operator<<(ostream &cout,Dsnguyen x) ;
	   double trungBinhCong() ;
	   int demsopt() ;
}; 
istream &operator>>(istream &cin,Dsnguyen &x){
	cout<<"Nhap so phan tu:" ;cin>>x.n;
	x.hs = new int[x.n+5] ;
	for(int i=1;i<=x.n;i++) cin>>x.hs[i];
}
ostream &operator<<(ostream &cout,Dsnguyen x){
	for(int i=1;i<=x.n;i++) cout<<x.hs[i] <<" ";
}
double Dsnguyen::trungBinhCong(){
	int sum=0,dem=0; 
	for(int i=1;i<=n;i++) {
		if(hs[i]>0) sum+=hs[i]; dem++; 
	}
	return (double)sum/dem; 	
} 
bool sochinhphuong(int n){
	for(int i=2;i<=sqrt(n);i++) 
	{
		if(i*i == n) {
		return true; 
		}
	}
	return false; 
}


int Dsnguyen::demsopt(){
	int dem=0; 
	for(int i=1;i<=n;i++) 
	{
		if(sochinhphuong(n)==true){
		 dem++; }
	}
	return dem; 
} 


int main(){
	Dsnguyen ds;
	cin>>ds;
	cout<<ds;
	cout<<ds.trungBinhCong()<<endl;
	cout<<ds.demsopt() ;
	
}
*/
#include<bits/stdc++.h> 
using namespace std;
class MonHoc{
	private: 
	   string maMon;
	   string tenMon;
	   int sotc;
	   public:
	     void nhap() {
	     	cin.ignore(1) ;
	     	cout<<"Nhap ma mon hoc:" ;getline(cin,maMon) ;
	     	cout<<"Nhap ten mon hoc:" ;getline(cin,tenMon) ;
	     	cout<<"Nhap so tin chi:" ;cin>>sotc;
		 }
		 void xuat() {
		 	cout<<maMon<<" "<<tenMon<<" "<<sotc; 
		 }	
}; 
class DKHP{
	private:
	  string mainhVien;
	  string teninhVien;
	  MonHoc *ds;
	  public:	
	  
}; 
class Ungdung{
	
	
	
	
	
}; 




int main() {
	
}

 

