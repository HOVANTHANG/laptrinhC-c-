/*#include<bits/stdc++.h>
using namespace std;
class SoPhuc{
	private:
		double soThuc;
		double soAo;
		public:
		SoPhuc(){
			soThuc=0;
			soAo=0; 
		} 
		SoPhuc(double st,double sa){
			soThuc=st;
			soAo=sa; 
		} 
		friend istream &operator>>(istream &cin,SoPhuc &x){
			cout<<"Nhap so thuc:";cin>>x.soThuc;
			cout<<"Nhap so ao:";cin>>x.soAo; 
		}
		friend ostream &operator<<(ostream &cout,SoPhuc x){
			cout<<x.soThuc<<"+"<<x.soAo<<"i"; 
		} 
		SoPhuc operator+(SoPhuc a){
			SoPhuc b;
			b.soThuc=soThuc+a.soThuc;
			b.soAo=soAo+a.soAo;
			return b; 
		} 
		SoPhuc operator-(SoPhuc a){
			SoPhuc b;
			b.soThuc=soThuc-a.soThuc;
			b.soAo=soAo-a.soAo;
			return b; 
		}	
		SoPhuc operator*(SoPhuc a){
			SoPhuc b;
			b.soThuc=  soThuc*a.soThuc-soAo*a.soAo;
			b.soAo =  soThuc*a.soAo+soAo*a.soThuc;
			return b; 
		} 
		SoPhuc operator/(SoPhuc a){
			SoPhuc b;
			b.soThuc=  (a.soThuc*soThuc+a.soAo*soAo)/(a.soThuc*a.soThuc +a.soAo*a.soAo);
			b.soAo =  (a.soThuc*soAo-a.soAo*soThuc)/(a.soThuc*a.soThuc +a.soAo*a.soAo);
			return b; 
		} 
}; 
int main(){
	SoPhuc a(2,3),a1,a2,a3,a4,a5;
	cin>>a1;
	a2=a+a1;
	a3=a-a1;
	a4=a*a1;
	a5=a/a1; 
	cout<<"\n"<<a; 
	cout<<"\n"<<a1; 
	cout<<"\nTong 2 so phuc:"; 
	cout<<"\n"<<a2; 
	cout<<"\nHieu 2 so phuc:"; 
	cout<<"\n"<<a3; 
	cout<<"\nNhan 2 so phuc:"; 
	cout<<"\n"<<a4; 
	cout<<"\nChia 2 so phuc:"; 
	cout<<"\n"<<a5; 
}
*/
#include<bits/stdc++.h>
using namespace std;
class CongTy{
	private:
		string tenCongTy;
		string diaChi;
		int namTL;
		public:
		 CongTy(string tct="",string dc="",int n=0){
		 	tenCongTy=tct;
			 diaChi=dc;
			 namTL=n; 
		 } 
		 void Nhap(){
		 	cin.ignore(1);
			 cout<<"Nhap ten cong ty:";getline(cin,tenCongTy);
			 cout<<"Nhap dia chi:";getline(cin,diaChi);
			 cout<<"Nhap nam thanh lap:";cin>>namTL; 
		 } 
		 void Xuat(){
		 	cout<<tenCongTy<<" "<<diaChi<<" "<<namTL; 
		 } 
		 int getNam(){
		 	return namTL; 
		 } 		
}; 
class CTYPMTH:public CongTy{
	private:
		 int soLapTrinhVien;
		 public:
		 CTYPMTH(string tct="",string dc="",int n=0,int ltv=0):CongTy(tct,dc,n){
		 	soLapTrinhVien=ltv; 
		 } 
		 void NhapCTPMTH(){
		 	CongTy::Nhap();
			 cout<<"Nhap so lap trinh vien:";cin>>soLapTrinhVien; 
		 } 
		 void XuatCTPMTH(){
		 	CongTy::Xuat();
			 cout<<" "<<soLapTrinhVien<<endl; 
		 } 
		 int getoLTV(){
		 	return soLapTrinhVien; 
		 } 
	
}; 
class CTYVTHH:public CongTy{
	private:
		int soOT;
		public:
		CTYVTHH(string tct="",string dc="",int n=0,int s=0):CongTy(tct,dc,n){
			soOT=s; 
		} 
		void NhapCTVTHH(){
			CongTy::Nhap();
			cout<<"Nhap so o to cho hang:";cin>>soOT; 
		} 
		void XuatCTVTHH(){
			CongTy::Xuat();
			cout<<" "<<soOT<<endl; 
		} 
		int getSoOt(){
			return soOT; 
		} 
}; 
class UngDung{
	private:
		int n,m;
		CTYPMTH *ds1;
		CTYVTHH *ds2;
		public:
		void NhapDS1(){
			cout<<"Nhap so luong cong ty phan mem:";cin>>n;
			ds1= new CTYPMTH[n+5];
			for(int i=1;i<=n;i++){
				ds1[i].NhapCTPMTH(); 
			} 
		} 
		void XuatDs1(){
			for(int i=1;i<=n;i++){
				ds1[i].XuatCTPMTH(); 
			} 
		} 
		void NhapDs2(){
			cout<<"Nhap so luong cong ty Van tai:";cin>>m;
			ds2= new CTYVTHH[m+5];
			for(int i=1;i<=m;i++){
				ds2[i].NhapCTVTHH(); 
			} 
		} 
		void XuatDs2(){
			for(int i=1;i<=m;i++){
				ds2[i].XuatCTVTHH(); 
			} 
		} 
		void inCTPM(){
			int dem=0; 
			for(int i=1;i<=n;i++){
				if(ds1[i].getNam()<2000||ds1[i].getoLTV()>20){
					dem++; 
					ds1[i].XuatCTPMTH(); 
				} 
			} 
			if(dem==0){
				cout<<"\nKhong ton tai cong ty nao!"; 
			} 
		} 
		void inCTVT(){
			int dem=0; 
			int max= ds2[1].getSoOt(); 
			for(int i=1;i<=m;i++){
				if(ds2[i].getSoOt()>max){
					max=ds2[i].getSoOt(); 
				} 
			}
			for(int i=1;i<=m;i++){
				if(ds2[i].getNam()>2000&&ds2[i].getSoOt()==max){
					dem++; 
					ds2[i].XuatCTVTHH(); 
				} 
			} 
			if(dem==0){
				cout<<"\nKhong ton tai cong ty nao!"; 
			} 
		} 
	
}; 
int main(){
	UngDung ud;
	ud.NhapDS1();
	ud.NhapDs2();
	ud.XuatDs1();
	ud.XuatDs2();
	ud.inCTPM();
	ud.inCTVT(); 
} 

