/*#include<bits/stdc++.h>
using namespace std;
class Book{
	friend class Ungdung; 
	private:
	     string tenSach;
		 string tenTacGia;
		 int namXuatBan;
		 string nhaXuatBan;
     public:
	 Book(string tsach="",string ttacgia="",int nam=2023,string nxuatban="") {
	 	tenSach=tsach;
		 tenTacGia=ttacgia;
		 namXuatBan=nam;
		 nhaXuatBan=nxuatban; 
	 }
	 friend istream&operator>>(istream &cin,Book &x){
	 	cin.ignore(1);
	 	cout<<"Nhap ten sach:" ;getline(cin,x.tenSach);
	 	cout<<"Nhap ten tac gia:" ;getline(cin,x.tenTacGia);
		 cout<<"Nhap nam xuat ban:";cin>>x.namXuatBan; cin.ignore(1);
		 cout<<"Nhap nha xuat ban:";getline(cin,x.nhaXuatBan); 
	 }
	 friend ostream &operator<<(ostream &cout,Book x){
	 	cout<<x.tenSach<<" "<<x.tenTacGia<<" "<<x.namXuatBan<<" "<<x.nhaXuatBan; 
	 }
};
class Ungdung{
	private:
	  int n;
	  Book *ds;
	  public: 
	  void nhapsach();
	  void xuatsach();
	  void timkiem(string name); 
}; 
void Ungdung::nhapsach(){
	cout<<"Nhap so luong sach:";cin>>n;
	ds = new Book[n+5] ;
	for(int i=1;i<=n;i++){
	    cin>>ds[i]; 
	} 
} 
void Ungdung::xuatsach(){
	for(int i=1;i<=n;i++){
		cout<<ds[i]; 
	} 
} 
void  Ungdung::timkiem(string name){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(ds[i].tenTacGia.compare(name)==0){
			dem++;
			cout<<ds[i]; 
		} 
	}
	if(dem==0) {
		cout<<"Khong ton tai tac gia nay!"; 
	}
} 
int main(){
	Ungdung ud;
	ud.nhapsach();
	ud.xuatsach();
	string s;
	cout<<"\nNhap ten tac gia:";
	getline(cin,s);
	ud.timkiem(s) ;
}

*/
#include<bits/stdc++.h> 
using namespace std;
class DoanVien{
	private:
       char *madoanvien; 
	  string ht;
	  int namvaodoan;
	  char diachi[30];
	public:
		 Doanvien() {
		 	madoanvien = new char[strlen(madoanvien)] ;
	     	strcpy(madoanvien,"123") ;
	     	ht=ht;
			 namvaodoan=2023;
			 strcpy(diachi,"nghe an");
		 }
	     DoanVien(char  *mdv="",string ht="",int namvd=2023,char *dc="") {
	     	madoanvien = new char[strlen(madoanvien)] ;
	     	strcpy(madoanvien,mdv) ;
	     	ht=ht;
			 namvaodoan=namvd;
			 strcpy(diachi,dc) 	;
		 }
		 DoanVien& operator =(const DoanVien &dv) 
		 {
		 		madoanvien = new char[strlen(dv.madoanvien)+1] ;
		 		strcpy(madoanvien,dv.madoanvien);
		 		ht=dv.ht;
				namvaodoan= dv.namvaodoan;
				strcpy(diachi,dv.diachi) ;
		 }
	     DoanVien(const DoanVien &dv) {
	     	madoanvien = new char[strlen(dv.madoanvien)+1] ;
		 		strcpy(madoanvien,dv.madoanvien);
		 		ht=dv.ht;
				namvaodoan= dv.namvaodoan;
				strcpy(diachi,dv.diachi) ;
		 }
	    void nhap(){
	    	cout<<"Nhap ma doan vien:"; gets(madoanvien) ;
	    	cout<<"Nhap ho va ten:"; getline(cin,ht);
	    	cout<<"Nhap nam vao doan:";cin>>namvaodoan;cin.ignore(1);
			cout<<"Nhap dia chi:" ;gets(diachi);
	    	
		}
	   void xuat() {
	   	cout<<madoanvien<<" "<<ht<<" "<<namvaodoan<<" "<<diachi; 
	   }
	
	
	
	
}; 

main() {
	DoanVien b("12","Ho van A",2004,"Dien Chau"),a;
	a=b;
	a.xuat() ;
	
}















