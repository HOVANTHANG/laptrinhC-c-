#include<bits/stdc++.h>
using namespace std;
/*class Dathuc{
	private:
	 int n;
	 double *hs;
	 public:
	 Dathuc(){
	 	n=4;
		hs = new double[n+5]; 
	 } 
	 void nhap() {
	 	cout<<"Nhap bac cua da thuc:" ;cin>>n;
		 for(int i=0;i<=n;i++) cin>>hs[i] ;
	 }
	 void xuat() {
	 	cout<<hs[0];
	 	for(int i=1;i<=n;i++){
	 		cout<<"+"<<hs[i]<<"*X^"<<i; 
		 }
	 }
	  double Tinhgiatri(double k) {
	  	double sum=0;
		  for(int i=0;i<=n;i++) sum+=hs[i]*pow(k,i) ;
             return sum; 
	  }
}; 



int main(){
	Dathuc dt;
	dt.nhap();
	dt.xuat();
	double d1;
	cout<<"\nNhap d1:" ;
	cin>>d1; 
	cout<<dt.Tinhgiatri(d1) ; 
}
*/
class MatHang{
	friend class DsMayTinh; 
	private:
	    string maHang;
		string tenHang;
		string nhaSanXuat;
		int soLuong;
		double donGia;
		public:
		MatHang(string mh="",string th="",string nsx="",int sl=1,double dg=1000) 
	     {
	     	maHang=mh;
			 tenHang=th;
			 nhaSanXuat=nsx;
			 soLuong=sl;
			 donGia=dg; 
		 }
	    void nhap() {
	    	cin.ignore(1) ;
	    	cout<<"Nhap ma hang:" ;getline(cin,maHang) ;
	    	cout<<"Nhap ten hang:" ;getline(cin,tenHang) ;
	    	cout<<"Nhap nha san xuat:" ;getline(cin,nhaSanXuat) ;
	    	cout<<"Nhap so luong:";cin>>soLuong;
			cin.ignore(1) ;
			cout<<"Nhap don gia:";cin>>donGia; 	
		}
	     void xuat() {
	     	cout<<maHang<<" "<<tenHang<<" "<<nhaSanXuat<<" "<<soLuong<<" "<<fixed<<setprecision(2)<<donGia; 
		 }
}; 
class MayTinh:public MatHang{
	friend class DsMayTinh; 
	private:
	   string loaiCPU;
	   string heDieuHanh;
	   double trongluong; 
	public:
	MayTinh(string mh="",string th="",string nsx="",int sl=1,double dg=1000,
	string loai="",string hdh="",double tl=2) :MatHang(mh,th,nsx,sl,dg) 
	{
		loaiCPU=loai;
		heDieuHanh=hdh;
		trongluong=tl; 
	}
	void nhapmaytinh() {
		MatHang::nhap();
		cin.ignore(1) ;
		cout<<"Nhap loai CPU:" ;getline(cin,loaiCPU) ;
		cout<<"Nhap he dieu hanh:" ;getline(cin,heDieuHanh) ;
		cout<<"Nhap trong luong:";cin>>trongluong; 
	}
	void xuatMayTinh(){
		MatHang::xuat() ;
		cout<<" "<<loaiCPU<<" " <<heDieuHanh<<" "<<trongluong; 	
		cout<<"\n" ;
	}
	 
}; 
class  DsMayTinh{
	private:
	  int n;
	  MayTinh *ds;
	  public:
	  void nhapds() ;
	  void xuatds();
	  void locdanhsach() ;
	  void locWindown() ;	
}; 
void DsMayTinh::nhapds(){
	cout<<"Nhap so luong may tinh:" ;cin>>n;
	 ds= new MayTinh[n+5] ;
	 for(int i=1;i<=n;i++){
	 	ds[i].nhapmaytinh();
	 }	
} 
void DsMayTinh::xuatds(){
	for(int i=1;i<=n;i++) {
		ds[i].xuatMayTinh();
	}
} 
void DsMayTinh::locdanhsach(){
	for(int i=1;i<=n;i++) {
		if(ds[i].soLuong==0) {
			ds[i].xuatMayTinh();
		}
	}	
} 
void DsMayTinh::locWindown(){
	double max=0; 
	for(int i=1;i<=n;i++) {
		if(ds[i].heDieuHanh.compare("windows")==0&& ds[i].donGia >max) {
			max= ds[i].donGia;
		}
	}
	for(int i=1;i<=n;i++) {
		if(ds[i].heDieuHanh.compare("windows")==0&& ds[i].donGia==max) {
		    ds[i].xuatMayTinh();
		}
	}
} 




int main() 
{
	DsMayTinh ds;
	ds.nhapds();
	ds.xuatds();
	ds.locdanhsach();
	ds.locWindown(); 
	
}




