/*#include<bits/stdc++.h>
using namespace std;
class Ngaysinh{
	private:
	   int ngay;
	   int thang;
	   int nam;
	  public:
	  Ngaysinh(int d=23,int m=10,int y=2023){
	  	ngay=d;
		  thang=m;
		  nam=y; 
	  }
	  friend istream &operator>>(istream &cin,Ngaysinh &x);
	  friend ostream &operator<<(ostream &cout,Ngaysinh x) ;
}; 

istream &operator>>(istream &cin,Ngaysinh &x){
	cout<<"\nNhap ngay sinh:";
	cin>>x.ngay; 
	cout<<"Nhap thang sinh:";
	cin>>x.thang; 
	 cout<<"Nhap nam sinh:";
	 cin>>x.nam; 
}
ostream &operator<<(ostream &cout,Ngaysinh x){
	cout<<x.ngay<<"/"<<x.thang<<"/"<<x.nam; 
}


class Nguoi{
	private:
	    string hovaten;
		string diachi;
		Ngaysinh ngaysinh;
		public:
		   Nguoi(string hvt="",string dc="",Ngaysinh date = Ngaysinh(23,10,2023)){
		   	hovaten=hvt;
			   diachi=dc;
			   ngaysinh= date; 
		   } 
	    void nhap(){
	    	cin.ignore(1) ;
	    	cout<<"\nNhap ho va ten:";
	    	getline(cin,hovaten);
			cout<<"Nhap dia chi:";
			getline(cin,diachi);
			cout<<"Ngay sinh:";
			cin>>ngaysinh; 
		}
		
		void xuat(){
			cout<<hovaten<<" "<<diachi<<" "<<ngaysinh;  
		} 
	    
	    string gethovaten(){
	    	return hovaten; 
		} 
}; 

class KhachHang:public Nguoi{
	private:
	   string maKh;
	   int cstruoc;
	   int csSau; 
	public:
	     KhachHang(string makh="",string hvt ="",string dc="",Ngaysinh ns = Ngaysinh(23,10,2023),int cst=1,int css=100):Nguoi(hvt,dc,ns)
	     {
	     	maKh=makh;
			 cstruoc = cst;
			 csSau = css; 
		 }
	     void nhapKh(){
	        Nguoi::nhap(); 
	        cin.ignore(1);
			 cout<<"\nNhap ma khach hang:";
			 getline(cin,maKh);
			 cout<<"Nhap chi so truoc,sau:";cin>>cstruoc>>csSau; 
		 }
		 double TinhTienDien(){
			int sodien=csSau-cstruoc;
			double tien=0;
			if(sodien<=50) tien =sodien*1678;
			else if(sodien<=100) tien=50*1678+(sodien -50)*1738;
			else if(sodien<=200) tien =50*1678+50*1738+(sodien-100)*2014;
			else if(sodien<=300) tien=50*1678+50*1738+100*2014+(sodien-200)+2536;
			else
			tien =50*1678+50*1738+100*2014+2536*100+(sodien-300)*2834;
			return tien;
		}
		 
		 int bacTieuthu(){
			int sodien=csSau-cstruoc;
			if(sodien<=50) return 1;
			else if(sodien<=100) return 2;
			else if(sodien<=200) return 3;
			else if(sodien<=300) return 4;
			else return 5;
		} 
	     void xuatkh(){
	     	Nguoi::xuat();
			 cout<<maKh<<" "<<TinhTienDien()<<" ";
		 } 	
}; 

class Ungdung{
	private:
	 int n;
	 KhachHang *kh; 
	public:
	  void nhap(){
	  	cout<<"Nhap so luong khach hang:";cin>>n;
		  kh= new KhachHang[n+5] ;
		  for(int i=1;i<=n;i++){
		  	  kh[i].nhapKh() ;
		  } 
	  }
	   void xuat(){
	   	for(int i=1;i<=n;i++){
		  	  kh[i].xuatkh() ;
		  	  cout<<"\n" ;
		  } 
	   } 
	  void Timkiem(string name){
	  	int dem=0;
		   for(int i=1;i<=n;i++){
		   	if(kh[i].gethovaten().compare(name)==0) {
		   		dem++;
				   cout<<"\nKhach hang nay ton tai!";
				   kh[i].xuatkh(); 
			   }
		   } 
	  	if(dem==0) 
	  	cout<<"\nKhach hang nay khong ton tai!" ;
	  }
	  
	  void Thongke(){
	  	int dem[6];
		  for(int i=1;i<=5;i++){
		  	dem[i] =0;
			  for(int j=1;j<=n;j++){
			  	if(kh[j].bacTieuthu()==i) {
			  		dem[i]++; 
				  }
			  } 
			  cout<<"\nBac tieu thu thu "<<i<<" co"<<dem[i]<<"Khach Hang!";
		  } 
	  }   
}; 
int main() {
	Ungdung ud;
	ud.nhap();
	ud.xuat();
	string s;
	cout<<"\nNhap ten can tim kiem:";cin.ignore(1);
	getline(cin,s);
	ud.Timkiem(s) ;
	ud.Thongke(); 
	
}*/
#include<bits/stdc++.h>
using namespace std;
class Book{
	friend class Danhsach;
	private:
	   string maSach;
	   string tenSach;
	   string tenTacgia;
	   int namxb;
	   string nhaxuatban;
	   
	  public:
	  Book(string maSach="",string tensach="",string tentacgia="",int nam =2023,string nhaxb =""){
	  	maSach=maSach;
	  	tenSach=tensach;
	  	tenTacgia=tentacgia;
	  	namxb=nam;
	  	nhaxuatban=nhaxb;
	  } 
	  void nhap(){
	  cin.ignore(1);
	  	cout<<"Nhap ma sach:";getline(cin,maSach);
	  	cout<<"Nhap ten sach:";getline(cin,tenSach);
	  	cout<<"Nhap ten tac gia:";getline(cin,tenTacgia);
	  	cout<<"Nhap nam xuat ban:";cin>>namxb;cin.ignore(1);
	  	cout<<"Nhap nha xuat ban:";getline(cin,nhaxuatban);
	  }
	  void xuat(){
	  	cout<<maSach<<" "<<tenSach<<" "<<tenTacgia<<" "<<namxb<<" "<<nhaxuatban;
	  }
	  string gethovaten(){
	  	return tenTacgia;
	  }
}; 
class Danhsach{
	private:
		int n;
		Book *ds;
	public:
		void nhapds(){
			cout<<"Nhap so luong sach:";
			cin>>n;
			ds = new Book[n+5];
			for(int i=1;i<=n;i++){
				ds[i].nhap();
			}
		}
	     void xuatds(){
	     	for(int i=1;i<=n;i++){
	     		ds[i].xuat();
	     		cout<<"\n";
			 }
		 }
		 void Timkiem(string name){
		 	int dem=0;
		 	for(int i=1;i<=n;i++){
		 		if(ds[i].gethovaten().compare(name)==0){
		 			dem++;
		 			cout<<ds[i].tenSach;
				 }
			 }
			 if(dem==0){
			 	cout<<"Khong ton tai tac gia nay!";
			 }
		 }
	
};

int main(){
      Danhsach ds;
	  ds.nhapds();
	  ds.xuatds();
	  string s;
	  cout<<"\nNhap ten tac gia:";
	  getline(cin,s);
	  ds.Timkiem(s);
	  
	  
	  	
	
	
	
	
	
	
	
	
}

 
