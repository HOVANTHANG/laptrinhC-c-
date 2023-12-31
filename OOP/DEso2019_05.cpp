//#include<bits/stdc++.h>
//using namespace std;
//class PhanSo{
//	private:
//	 double tuSo;
//	 double mauSo;
//	 public:
//	 void nhap(){
//	 	cout<<"Nhap tu so:";cin>>tuSo;
//		 cout<<"Nhap mau so:";cin>>mauSo; 
//	 } 
//	void xuat(){
//		cout<<tuSo<<"/"<<mauSo; 
//	} 
//	double operator *(PhanSo a){
//		return (tuSo*a.tuSo)/(mauSo*a.mauSo);
//	} 	
//};
//int main(){
//	PhanSo p1,p2,p;
//	p1.nhap();
//	p2.nhap();
//	cout<<fixed<<setprecision(2)<<p1*p2; 
//}
#include<bits/stdc++.h>
using namespace std;

class Book{
	private:
	 string maSach;
	 string tenSach;
	 string tenTacGia;
	 int namXuatBan;
	 string nhaXuatBan;
	public:
		Book(string ms="",string ts="",string ttg="",int nxb=0,string nhaxb=""){
			maSach=ms;
			tenSach=ts;
			tenTacGia=ttg;
			namXuatBan=nxb;
			nhaXuatBan=nhaxb; 
		} 
		void Nhap(){
			cin.ignore(1); 
			cout<<"Nhap ma sach:";getline(cin,maSach);
			cout<<"Nhap ten sach:";getline(cin,tenSach);
			cout<<"Nhap ten tac gia:";getline(cin,tenTacGia);
			cout<<"Nhap nam xuat ban:";cin>>namXuatBan;cin.ignore(1); 
			cout<<"Nhap nha xuat ban:";getline(cin,nhaXuatBan); 
		} 
		void Xuat(){
			cout<<"\n"<<maSach<<" "<<tenSach<<" "<<tenTacGia<<" "<<namXuatBan<<" "<<nhaXuatBan; 
		} 
		int getNamXB(){
			return namXuatBan; 
		}   
}; 
class QLBook{
	private:
		int n;
		Book *ds,t;
		public:
			void Nhapds(){
				cout<<"Nhap so luong sach:";cin>>n;
				ds=new Book[n+5]; 
				for(int i=1;i<=n;i++){
					ds[i].Nhap(); 
				} 
			} 
			void xuatds(){
				for(int i=1;i<=n;i++){
					ds[i].Xuat(); 
				} 
			} 
			void CheckNam(int nam){
				for(int i=1;i<=n;i++){
					if(ds[i].getNamXB()==nam){
						ds[i].Xuat(); 
					} 
				} 
			} 
			void sapXepTheoNam(){
				for(int i=1;i<n;i++){
					for(int j=i+1;j<=n;j++){
						if(ds[i].getNamXB()>ds[j].getNamXB()){
							t=ds[i];
							ds[i]=ds[j];
							ds[j]=t; 
						} 
					} 
				} 
			} 			 
}; 


int main(){
	QLBook b;
	b.Nhapds();
	b.xuatds();
	int nam;
	cout<<"\nNhap nam xuat ban can tim:";cin>>nam;
	b.CheckNam(nam);
	b.sapXepTheoNam();
	b.xuatds(); 
} 

