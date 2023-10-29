#include<bits/stdc++.h>
using namespace std;
class NgayThang{
	int ngay,thang,nam;
	public:
		NgayThang(int d=11,int m=10,int y=2023){
			ngay=d;
			thang=m;
			nam=y;
		}
		friend istream &operator>>(istream &cin,NgayThang &d){
			cout<<"\nNhap ngay :";cin>>d.ngay;
			cout<<"Nhap thang:";cin>>d.thang;
			cout<<"Nhap nam ";cin>>d.nam;
			return cin; 
					}
		friend ostream &operator <<(ostream &cout,const NgayThang &d)
		{
			cout<<d.ngay<<"/"<<d.thang<<"/"<<d.nam;
			return cout;
		}
};
class Nguoi{
	friend class KhachHang;
	private:
		string hovaten;
		NgayThang ngaysinh;
		string diachi;
	public:
		Nguoi(string ht="",NgayThang ngaysinh=NgayThang(11,10,2023),string dc=""){
			hovaten=ht;
			this->ngaysinh=ngaysinh;
			diachi=dc;
		}
		void nhap(){
			cin.ignore(1) ;
			cout<<"Nhap ht:";getline(cin,hovaten);
			cout<<"Nhap ngay sinh:";cin>>ngaysinh;
			cout<<"Nhap dia chi:";cin.ignore();getline(cin,diachi);
		}
		void xuat()
		{
			cout<<hovaten<<" "<<ngaysinh<<" "<<diachi;
		}
		string gethoten(){
			return hovaten;
		}
};
class KhachHang:public Nguoi{
	private:
		string makhachhang;
		int chiSoTruoc;
		int chiSoSau;
	public:
		KhachHang(string ma="",string ht="",NgayThang ngaysinh=NgayThang(1,1,2023),string dc="",int truoc=0,int sau=100):Nguoi(ht,ngaysinh,dc)
		{
			makhachhang=ma;
			chiSoTruoc=truoc;
			chiSoSau =sau;
		}
		double TinhTienDien(){
			int sodien=chiSoSau-chiSoTruoc;
			double tien=0;
			if(sodien<=50) tien =sodien*1678;
			else if(sodien<=100) tien=50*1678+(sodien -50)*1738;
			else if(sodien<=200) tien =50*1678+50*1738+(sodien-100)*2014;
			else if(sodien<=300) tien=50*1678+50*1738+100*2014+(sodien-200)+2536;
			else
			tien =50*1678+50*1738+100*2014+2536*100+(sodien-300)*2834;
			return tien;
		}
		void nhap(){
			Nguoi::nhap();
			cout<<"Nhap ma khach hang:";getline(cin,makhachhang);
			cout<<"Nhap chi so truoc,so sau:";cin>>chiSoTruoc>>chiSoSau;
		}
		void xuat(){
			cout<<makhachhang<<" "<<TinhTienDien()<<" ";
		}
		int bacTieuthu(){
			int sodien=chiSoSau-chiSoTruoc;
			if(sodien<=50) return 1;
			else if(sodien<=100) return 2;
			else if(sodien<=200) return 3;
			else if(sodien<=300) return 4;
			else return 5;
		}
};

class Ungdung{
     int n;
     KhachHang *ds;
     public:
     	void nhap();
     	void timkiem(string ht);
     	void thongke();
};
void Ungdung::nhap(){
	cout<<"Nhap so luong khach hang:";cin>>n;
       ds = new KhachHang[n+5];
    for(int i=1;i<=n;i++){
        ds[i].nhap();
	}
	for(int i=1;i<=n;i++){
		ds[i].xuat();
	}
}
void Ungdung::timkiem(string ht){
	int k=0;
	for(int i=1;i<=n;i++){
		if(ds[i].gethoten().compare(ht)==0){
			k=1;
			cout<<"\nCo Ton tai khach hang nay!"; 
			ds[i].xuat();
		}
	}
	if(k==0) cout<<"Khong tim thay:"<<ht;
}
void Ungdung::thongke(){
	int dem[6];
	for(int i=1;i<=5;i++){
		dem[i]=0;
		for(int j=1;j<=n;j++)
			if(ds[i].bacTieuthu()==i)
			   dem[i]++;
		cout<<"\nBac Tieu Thu "<<i<<" co "<<dem[i]<<" Khach Hang";
	}
}
int main(){
	Ungdung ud;
	ud.nhap();
	string ht;
	cout<<"\nNhap ho ten khach hang tim kiem:";cin.ignore();getline(cin,ht);
	ud.timkiem(ht);
	ud.thongke(); 
}



/*class KhachHang {
		friend class KhachHangBoSung;
	private:
	   string maKhachhang;
	   string HovaTen;
	   string diachi; 
	   int soThangTruoc;
	   int soThangSau;
	   public:
	   KhachHang(string maKH="",string HvT ="",string dc="",int SoTr=1,int soTs=100){
	   	maKhachhang = maKH;
		  HovaTen = HvT;
		  diachi = dc; 
		  soThangTruoc=SoTr;
		  soThangSau=soTs; 
	   } 
	   void nhap(); 
	   void xuat();
	   int TinhTien(){
	   	int sum=0;
		   sum=(soThangSau-soThangTruoc)*3000; 
		   return sum; 
	   } 
	   string getHovaTen(){
	   	return HovaTen; 
	   } 
	    
}; 
void KhachHang::nhap(){
		cin.ignore(1); 
	cout<<"Nhap ma khach hang:";getline(cin,maKhachhang) ;
	cout<<"\nNhap Ho va Ten:";getline(cin,HovaTen);
	cout<<"\nNhap Dia chi:" ;getline(cin,diachi) ;
	cout<<"\nChi So Thang truoc:";cin>>soThangTruoc;
	cout<<"\nChi so thang sau:";cin>>soThangSau; 
	cin.ignore(1); 
} 
void KhachHang::xuat(){
	cout<<maKhachhang<<" "<<HovaTen<<" "<<diachi<<" "<<soThangTruoc<<" "<<soThangSau; 
} 
class KhachHangBoSung:public KhachHang{
	private: 
	     int UT;
    public :
    	KhachHangBoSung( string maKH="",string HvT ="",string dc="",int SoTr=1,int soTs=100,int uut=1):KhachHang(maKH, HvT, dc, SoTr, soTs)
		{
    		UT=uut; 
		}
        void nhapKH();
		void xuatKH(); 
		int TinhSoTienNuoc() ;
}; 
void KhachHangBoSung::nhapKH(){
	KhachHang::nhap();
	cout<<"\nNhap do uu tien:"; cin>>UT; 
} 
void KhachHangBoSung::xuatKH(){
	KhachHang::xuat();
	cout<<" "<<UT<<" "<<TinhSoTienNuoc()<<endl; 
} 
int KhachHangBoSung::TinhSoTienNuoc(){
	int sum1=0;
	if(UT==0){
		sum1=TinhTien(); 
	} else if(UT==1){
		sum1= TinhTien()-((5*TinhTien())/100); 
	} else {
		sum1= TinhTien()-((10*TinhTien())/100); 
	}
	return sum1; 
} 

class UngDung{
	private:
	  int n;
	  KhachHangBoSung *ds,t;
	  public:
	  void nhap();
	  void xuat();
	  void sapxep();
	  void TimKiem(string TenKH); 
} ;
void UngDung::nhap(){
	cout<<"\nNhap so Luong Khach Hang:";
	cin>>n;
	ds = new KhachHangBoSung[n+5];
	for(int i=1;i<=n;i++) {
		ds[i].nhapKH(); 
	}
} 
void UngDung::xuat(){
	for(int i=1;i<=n;i++){
		ds[i].xuatKH(); 
	} 
} 

void UngDung::sapxep(){
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].TinhSoTienNuoc() < ds[j].TinhSoTienNuoc()) {
				t = ds[i];
				ds[i] = ds[j];
				ds[j] = t; 
			}
		} 
	} 
} 
void UngDung::TimKiem(string TenKH){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(ds[i].getHovaTen().compare(TenKH)==0){
			dem++; 
			ds[i].xuatKH(); 
		}
	}
	if(dem==0){
		cout<<"\nKhong tim thay khach hang" ;
	} 
} 
int main(){
	UngDung ud;
	string ten; 
	ud.nhap();
	ud.xuat(); 
	cout<<"\n";
	ud.sapxep();
	ud.xuat();
    cout<<"\n";
	cout<<"\nNhap ho va ten tim kiem:";cin.ignore(1);getline(cin,ten);
	ud.TimKiem(ten); 
	
	
} */
