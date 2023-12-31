/*#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		double tuSo;
		double mauSo;
		public:
		PhanSo();
		PhanSo(int ts,int ms);
		void Nhap(){
			cout<<"Nhap tu so:";cin>>tuSo;
			cout<<"Nhap mau so:";cin>>mauSo; 
		} 
		double UCLN(double a,double b){
			if(a==b) return a;
			else if(a>b) UCLN(a-b,b);
			else UCLN(a,b-a); 
		}
		friend ostream&operator<<(ostream &cout,PhanSo x){
			cout<<x.tuSo/x.UCLN(x.tuSo,x.mauSo)<<"/"<<x.mauSo/x.UCLN(x.tuSo,x.mauSo); 
		} 
		PhanSo operator*(PhanSo a){
			PhanSo c;
			c.tuSo=tuSo*a.tuSo;
			c.mauSo=mauSo*a.mauSo;
			return c; 
		} 
}; 
PhanSo::PhanSo(){
	tuSo=10;
	mauSo=20; 
} 
PhanSo::PhanSo(int ts,int ms){
	tuSo=ts;
	mauSo=ms; 
} 
int main(){
		
	 PhanSo p1(5,6),p2,p;
	 p2.Nhap();
	 p=p1*p2; 
	 cout<<"Phan so p1,p2,p:\n"; 
	 cout<<p1<<endl;
	 cout<<p2<<endl;
	 cout<<p; 
}

*/
#include<bits/stdc++.h>
using namespace std;
class MatHang{
	private:
		string maHang;
		string tenHang;
		string nhaSanXuat;
		int soLuong;
		double donGia;	
	public:
	MatHang(string mh="",string th="",string nsx="",int sl=0,double dg=0){
		maHang=mh;
		tenHang=th;
		nhaSanXuat=nsx;
		soLuong=sl;
		donGia=dg; 
	}	
	void Nhap(){
		cin.ignore(1);
		cout<<"Nhap ma hang:";getline(cin,maHang);
		cout<<"Nhap ten hang:";getline(cin,tenHang);
		cout<<"Nhap nha san xuat:";getline(cin,nhaSanXuat);
		cout<<"Nhap so luong:";cin>>soLuong; 
		cout<<"Nhap don gia:";cin>>donGia; 
	} 
	void xuat(){
		cout<<maHang<<" "<<tenHang<<" "<<nhaSanXuat<<" "<<soLuong<<" "<<donGia; 
	} 	
	string getMaHang(){
		return maHang; 
	}
	string getTenHang(){
		return tenHang; 
	} 
	double getDonGia(){
		return donGia; 
	} 
}; 
class MayTinh:public MatHang{
	private:
		string loaiCPU;
		string heDieuHanh;
		double trongLuong;
	public:
		MayTinh(string mh="",string th="",string nsx="",int sl=0,double dg=0,string lcpu="",
		string hdh="",double tl=0):MatHang(mh,th,nsx,sl,dg){
			loaiCPU=lcpu;
			heDieuHanh=hdh;
			trongLuong=tl; 
		} 
		void NhapMT(){
			MatHang::Nhap();
			cin.ignore(1); 
			cout<<"Nhap loaiCPU:";getline(cin,loaiCPU);
			cout<<"Nhap he dieu hanh:";getline(cin,heDieuHanh);
			cout<<"Nhap trong luong:";cin>>trongLuong; 
		} 
		void XuatMT(){
			MatHang::xuat();
			cout<<" "<<loaiCPU<<" "<<heDieuHanh<<" "<<trongLuong<<endl; 
		} 
	
}; 
class UngDung{
	private:
		int n; 
		MayTinh *ds;
		public:
			void Nhapds(){
				cout<<"Nhap so luong may tinh:";cin>>n;
				ds=new MayTinh[n+5];
				for(int i=1;i<=n;i++){
					ds[i].NhapMT(); 
				} 
			} 
			void Xuatds(){
				for(int i=1;i<=n;i++){
					ds[i].XuatMT(); 
				} 
			} 
			
			void TimMayTinh(string filter){
				for(int i=1;i<=n;i++){
					if(ds[i].getMaHang()==filter||ds[i].getTenHang()==filter){
						ds[i].XuatMT(); 
					} 
				} 
			}
			void inds(){
				 double max=ds[1].getDonGia();
				 for(int i=1;i<=n;i++){
				 	if(ds[i].getDonGia()>max){
				 		max=ds[i].getDonGia(); 
					 } 
				 }
				 cout<<"\nDanh sach may tinh co gia cao nhat:\n"; 
				 for(int i=1;i<=n;i++)
				 {
				 	if(ds[i].getDonGia()==max){
				 		ds[i].XuatMT(); 
					 } 
				  } 
			} 
			
}; 
int main(){
	UngDung ud;
	ud.Nhapds();
	ud.Xuatds();
	string filter;
	cout<<"\nNhap ma hang hoac ten hang:";cin.ignore();getline(cin,filter); 
	ud.TimMayTinh(filter);
	ud.inds(); 
	
}
