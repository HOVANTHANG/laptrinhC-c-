#include<bits/stdc++.h>
#include<list> 
using namespace std;

class SinhVien
{
		private:
			string maSinhVien;							                                                       
			string  hoVaTen;				    			
			string queQuan;								
			int namSinh;								
			float diem;							 		

		public:
		SinhVien(string msv="",string qq="",string hvt="",int t=10,float d=10)        
			{										
				maSinhVien=msv;							
				hoVaTen=hvt;								
				queQuan=qq;																		
				namSinh=t;								
				diem=d;								
			}
		friend istream&operator>>(istream &cin,SinhVien &x) 		
		{
		cin.ignore(1);							
		cout<<"\nNhap ma sinh vien:";getline(cin,x.maSinhVien);	
		cout<<"Nhap ho va ten:";getline(cin,x.hoVaTen);		
		cout<<"Nhap que quan:";getline(cin,x.queQuan);			
		cout<<"Nhap nam sinh:";cin>>x.namSinh;				
		cout<<"Nhap diem:";cin>>x.diem;		
		return cin;			
		}
		friend ostream &operator<<(ostream &cout,SinhVien x)	
		{
		cout<<x.maSinhVien<<" "<<x.hoVaTen<<" "<<x.queQuan<<" "<<x.namSinh<<" "<<fixed<<setprecision(2)<<x.diem;		
		cout<<"\n";	
		return cout;								
		}
		bool operator < (SinhVien &x)					
		{
		return diem > x.diem;							
		}
		string getHovaTen()							
		{
		return hoVaTen;								
		}
		float getDiem() 								
		{
		return diem;									
		}
		string getQueQuan(){							
		return queQuan;								
		}
} ;

class DanhSach
{
private:
    	
list<SinhVien> sv;								
public:
	void ThemSinhVien(SinhVien &sv1) 				
	{
	sv.push_back(sv1);								
	}
	void XuatSinhVien() 							
	{
	for(auto item:sv){								
	cout<<item<<"\n";
	}
	}
	void SapXep() 							
	{
	sv.sort();								
	}
	void TimKiem(string name) 					
	{
	int dem=0;									
	for(auto item :sv){								
	if(item.getHovaTen().compare(name)==0)				
	{
	dem++;									
	cout<<"\nSinh vien nay ton tai!\n";					
	cout<<item;									
	}
	}
	if(dem==0) cout<<"\nKhong tim thay!";			
	}
	void DsHocSinhCoDiemMax() 					
	{
	float max=0;								
	for(auto item :sv)	
	{							
	if(item.getDiem() > max){					
	max=item.getDiem();							
	}
	}
	for(auto item :sv)							
	{										
	if(item.getDiem()==max){						
	cout<<item<<"\n";								
	}
	}
	}
	void DsHocSinhCoDiemMin() 						
	{
	float min=1000;							
	for(auto item :sv)								
	{
	if(item.getDiem() < min){						
	min=item.getDiem();							
	}
	}
	for(auto item :sv)								
	{
	if(item.getDiem()==min){						
	cout<<item<<"\n";							
	}
	}
	}

	void DsTrungTuyen() 							
	{
	int dem=0;									
	cout<<"\nDanh sach sinh vien trung tuyen:\n";			
	for(auto item : sv)								
	{
	if(item.getDiem()>=5)							
	{
	dem++;									
	cout<<item<<"\n";							
	}
	}
	if(dem==0)									
	{
	cout<<"\nKhong co sinh vien nao trung tuyen!";			
	}
	}
	void ThongKe(){ 							
	int dem=0,dem1=0,dem2=0;						
	for(auto item:sv){								
	if(item.getQueQuan()=="NA") dem++;				
	else if(item.getQueQuan()=="HT") dem1++;				
	else dem2++;								
	}
	cout<<"\nSo ban sinh vien nghe an: "<<dem;			
	cout<<"\nSo ban sinh vien ha tinh: "<<dem1;		
	cout<<"\nSo ban sinh vien tinh khac:  "<<dem2;			
	}
	void Erase(){
		string name;
		cin.ignore(1); 
		cout<<"\nNhap ten hoc sinh ban muon xoa:";getline(cin,name); 
	  int dem=0; 
		for(auto it=sv.begin();it!=sv.end();it++){
			if(it->getHovaTen().compare(name)==0){
				dem++;
				sv.erase(it); 
			} 
		} 
		if(dem==0){
			cout<<"\nKhong ton tai sinh vien nay!"; 
		}else{
			cout<<"\nDa Xoa" ;
		} 
	} 
	float diemchuan(){
		float diemchuan=0;
		sv.sort();
		int count=0;
		for(auto item:sv){
			count++;
			if(count==9){
				diemchuan=item->getDiem();
			}
		}
		return diemchuan;
	  
} ;

class App
{
private:
DanhSach ds;								

public:
void run()									
{
int luachon;									
do{

cout<<"\n|----------------------------------LuaChon-------------------------------|";
cout<<"\n|chon 1.Them Sinh Vien!                                                  |";
cout<<"\n|chon 2.Xuat sinh Vien!                                                  |";
cout<<"\n|chon 3.Sap Xep Sinh Vien Theo Diem!                                     |";
cout<<"\n|chon 4.Tim Kiem sinh Vien!                                              |";
cout<<"\n|chon 5.Tim sinh vien co diem max!                                       |";
cout<<"\n|Chon 6.Tim sinh vien co diem min!                                       |";
cout<<"\n|chon 7.Danh sach sinh vien trung tuyen!                                 |";
cout<<"\n|chon 8.Thong ke sinh vien theo que quan!                                |";
cout<<"\n|chon 9.Xoa sinh vien theo ten!                                          |";                                         
cout<<"\n|chon 10.Thoat khoi chuong trinh!                                        |";
cout<<"\n|--------------------------------!!!!!!!!!!------------------------------|";
cout<<"\nNhap lua chon cua ban:";cin>>luachon;			

switch (luachon)								
{
case 1:	{
SinhVien sv1 = SinhVien("","","",0,0);				
cin>>sv1;									
ds.ThemSinhVien(sv1);							
break;
}
case 2:
ds.XuatSinhVien();							
break;
case 3:
cout<<"\nDanh sach sinh vien theo diem giam dan!\n";		
ds.SapXep();								
ds.XuatSinhVien();						
break;
case 4:{
string s;								
cout<<"\nNhap ho va ten can tim:";cin.ignore(1);getline(cin,s);	
ds.TimKiem(s);							
break;
}
case 5:
ds.DsHocSinhCoDiemMax();					
break;
case 6:
ds.DsHocSinhCoDiemMin();						
break;
case 7:
ds.DsTrungTuyen();						
break;
case 8:
ds.ThongKe();							
break;
case 9:
ds.Erase();							
break;
case 10:
cout<<"\nExit ProGram!" ;					
break;
default:
cout<<"\nNhap Khong hop le!" ;					
}
}while(luachon!=10);							
}
};
int main(){
App ungdung;								
ungdung.run();
}


