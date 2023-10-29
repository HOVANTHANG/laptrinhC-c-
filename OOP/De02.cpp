#include<bits/stdc++.h>
using namespace std;
/*class Phanso{
	private:
		double tuso;
		double mauso;
	  public: 
	  Phanso(double ts=1,double ms=2) {
	  	tuso=ts;
		  mauso=ms; 
	  }
	  void nhap() {
	  	cout<<"Nhap tu so va mau so:" ;cin>>tuso>>mauso; 
	  }
	void xuat() {
		cout<<tuso<<"/"<<mauso; 
	}
	Phanso operator + (const Phanso a) {
		Phanso t;
		t.mauso = mauso*a.mauso;
		t.tuso = tuso*a.mauso + a.tuso*mauso; 
		return t; 
	}
}; 

int main(){
	Phanso ps1,ps2,ps3;
	ps1.nhap();
	ps2.nhap(); 
	ps3=ps1+ps2;
	ps3.xuat(); 
}*/
class QuanLyHang{
	private:
	    string maHang;
		string tenHang; 
		string xuatXu;
		int loaiHang;
		int soLuong; 
		public :
		QuanLyHang(string mh="",string th="",string xx="",int lh=1,int sl=1) 
		{
			maHang=mh;
			tenHang=th;
			xuatXu=xx;
			loaiHang=lh;
			soLuong=sl; 
		}
		
		void nhap() {
			cin.ignore(1) ;
			cout<<"Nhap ma hang:" ;getline(cin,maHang) ;
			cout<<"Nhap ten hang:" ;getline(cin,tenHang) ;
			cout<<"Nhap xuat xu:" ;getline(cin,xuatXu) ;
			cout<<"Nhap loai hang:" ;cin>>loaiHang;cin.ignore(1) ;
			cout<<"Nhap so luong " ;cin>>soLuong;cin.ignore(1) ;
		}
		
}; 
class DienTu:public QuanLyHang{
	private:
	  int thoiGianBH;
	  public :
	  DienTu(string mh="",string th="",string xx="",int lh=1,int sl=1,int tg=1) 
	{
		thoiGianBH=tg; 
	}
	
	
	
}; 






