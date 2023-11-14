#include<bits/stdc++.h>
#include<list>
using namespace std;
class SinhVien
{
	private:
	   string maSinhVien;
	   string  hoVaTen;
	   int tuoi;
	   float diem;
	public:
	   SinhVien(string msv="",string hvt="",int t=10,float d=10)	
	   {
	   	maSinhVien=msv;
		   hoVaTen=hvt;
		   tuoi=t;
		   diem=d; 
	   }
	   friend istream&operator>>(istream &cin,SinhVien &x)
	   {
	   	cin.ignore(1); 
	   	cout<<"\nNhap ma sinh vien:";getline(cin,x.maSinhVien);
		   cout<<"Nhap ho va ten:";getline(cin,x.hoVaTen);
		   cout<<"Nhap tuoi:";cin>>x.tuoi;
		   cout<<"Nhap diem:";cin>>x.diem; 
		}
		friend ostream &operator<<(ostream &cout,SinhVien x)
		{
			cout<<x.maSinhVien<<" "<<x.hoVaTen<<" "<<x.tuoi<<" "<<fixed<<setprecision(2)<<x.diem; 
		    cout<<"\n"; 
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
				  	cout<<"\nSinh vien nay ton tai!";
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
			cout<<"\n|chon 3.Sap Xep Sinh Vien!                                               |";
			cout<<"\n|chon 4.Tim Kiem sinh Vien!                                              |" ;
			cout<<"\n|chon 5.Tim sinh vien co diem max!                                       |";
			cout<<"\n|Chon 6.Tim sinh vien co diem min!                                       |";
			cout<<"\n|chon 7.Danh sach sinh vien trung tuyen!                                 |";
			cout<<"\n|chon 8.Thoat khoi chuong trinh                                          |" ;
			cout<<"\n|--------------------------------!!!!!!!!!!------------------------------|"; 
			cout<<"\nNhap lua chon cua ban:";cin>>luachon; 
			
			switch (luachon)
			{
				case 1:{				
					SinhVien sv1 = SinhVien("","",0,0);
					cin>>sv1; 
					ds.ThemSinhVien(sv1);	
				     break;}
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
				    cout<<"\nExit ProGram!" ;
					break; 
			    default:
				   cout<<"\nNhap Khong hop le!" ;		
			 } 
		 }while(luachon!=8); 
		} 
}; 
int main(){
	App ungdung;
	ungdung.run(); 
}


