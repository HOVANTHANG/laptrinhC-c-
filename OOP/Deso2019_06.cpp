//#include<bits/stdc++.h>
//using namespace std;
//class Dathuc{
//	private:
//		int n;
//		float *hs;
//		public:
//		void NhapDT(){
//			cout<<"Nhap bac cua da thuc:";cin>>n;
//			hs= new float[n+5];
//			for(int i=0;i<=n;i++){
//				cin>>hs[i]; 
//			} 
//		} 
//		void InDT(){
//			cout<<"\n"<<hs[0]; 
//			for(int i=1;i<=n;i++){
//				cout<<"+"<<hs[i]<<"*x^"<<i; 
//			} 
//		} 
//		float TinhGiaTri(float d){
//			float sum=0;
//			for(int i=0;i<=n;i++){
//				sum+=hs[i]*pow(d,i); 
//			}
//			return sum; 
//		} 
//}; 
//
//
//
//int main(){
//	Dathuc x;
//	x.NhapDT();
//	x.InDT();
//	float d;
//	cout<<"\nNhap d:";cin>>d;
//	cout<<x.TinhGiaTri(d); 
//	 
//}
#include<bits/stdc++.h>
using namespace std;
class QLH{
	private:
		string maHang;
		string tenHang;
		string xuatXu;
		char loaiHang;
		int soLuong;
	public:
		QLH(string mh="",string th="",string xx="",char lh='0',int sl=0){
			maHang=mh;
			tenHang=th;
			xuatXu=xx;
			loaiHang=lh;
			soLuong=sl; 
		} 
		void nhap(){
			cin.ignore(1);
			cout<<"Nhap ma hang:";getline(cin,maHang);
			cout<<"Nhap ten hang:";getline(cin,tenHang);
			cout<<"Nhap noi xuat xu:";getline(cin,xuatXu);
			cout<<"Nhap loai hang:";cin>>loaiHang;
			cout<<"Nhap so luong:";cin>>soLuong; 
		} 
		void xuat(){
			cout<<maHang<<" "<<tenHang<<" "<<xuatXu<<" "<<loaiHang<<" "<<soLuong; 
		} 
		char getLoaiHang(){
			return loaiHang; 
		} 
}; 
class DienTu:public QLH{
	private:
		int thoiGianBH;
		public:
			DienTu(string mh="",string th="",string xx="",char lh='0',int sl=0,int tgbh=0):QLH(mh,th,xx,lh,sl){
				thoiGianBH=tgbh; 
			} 
			void NhapHang(){
				QLH::nhap();
				cout<<"Nhap thoi gian bao hanh:";cin>>thoiGianBH; 
			} 
			void XuatHang(){
				QLH::xuat();
				cout<<" "<<thoiGianBH<<endl; 
			} 
			int getThoiGianBH(){
				return thoiGianBH; 
			} 
}; 
class UngDung{
	private:
		int n; 
		DienTu *ds;
		public:
		void Nhapds(){
			cout<<"Nhap so luong mat hang:";cin>>n;
			ds=new DienTu[n+5];
			for(int i=1;i<=n;i++){
				ds[i].NhapHang(); 
			} 
		} 
		void Xuatds(){
			cout<<"\nDanh sach mat hang:\n";
			for(int i=1;i<=n;i++){
				ds[i].XuatHang(); 
			} 
		} 
		void ThongKe(){
			int dem=0,dem1=0,dem2=0;
			for(int i=1;i<=n;i++){
				if(ds[i].getLoaiHang()=='1'&&ds[i].getThoiGianBH()>=12){
					dem++; 
				}else if(ds[i].getLoaiHang()=='2'&&ds[i].getThoiGianBH()>=12) 
				{
					dem1++; 
				}else if(ds[i].getLoaiHang()=='3'&&ds[i].getThoiGianBH()>=12)
				{
					dem2++; 
				 } 
			} 
			cout<<"\nTong so luong mat hang 1 co tgbh >=12 la:"<<dem; 
			cout<<"\nTong so luong mat hang 2 co tgbh >=12 la:"<<dem1; 
			cout<<"\nTong so luong mat hang 3 co tgbh >=12 la:"<<dem2; 
		}
		void Check(){
			int min=ds[1].getThoiGianBH();
			for(int i=1;i<=n;i++){
				if(ds[i].getThoiGianBH()>=min){
					min=ds[i].getThoiGianBH(); 
				} 
			} 
			cout<<"\nDanh Sach dien tu co thoi gian bao hanh lau nhat la:";
			for(int i=1;i<=n;i++){
				if(ds[i].getThoiGianBH()==min){
					ds[i].XuatHang(); 
				} 
			} 
		} 
}; 


int main(){
	UngDung ud;
	ud.Nhapds();
	ud.Xuatds();
	ud.ThongKe();
	ud.Check(); 
	 
} 

