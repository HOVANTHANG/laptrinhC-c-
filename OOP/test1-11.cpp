#include<bits/stdc++.h>
using namespace std;
class Diem{
	friend class DanhSachDiem; 
	private:
		string tenDiem; 
	   float hoanhdo,tungdo,caodo;
	   int mau;
	public:
	    Diem(string tdiem="",float hd=1,float td=1,float cd=1,int mau=1)
		{
			tenDiem = tdiem; 
			hoanhdo=hd;
			tungdo=td;
			caodo=cd;
			mau=mau; 
		 } 
	 
	   friend istream &operator>>(istream &cin,Diem &x)
	   {
	   	   cin.ignore(1); 
	   	   cout<<"\nNhap ten diem:";getline(cin,x.tenDiem) ;
	   	   cout<<"Nhap hoanh do:";cin>>x.hoanhdo;
		   cout<<"Nhap tung do:";cin>>x.tungdo;
		   cout<<"Nhap cao do:";cin>>x.caodo;
		   cout<<"Nhap mau:";cin>>x.mau; 
		} 
		void Xuat() {
			cout<<tenDiem<<" "<<hoanhdo<<" "<<tungdo<<" "<<caodo<<" "<<mau;
			cout<<"\n" ;
		}
	    friend  float KhoangCach(Diem a){
	    	return (abs(a.hoanhdo)+abs(a.tungdo)+abs(a.caodo))/3; 
		} 
}; 
 
class DanhSachDiem{
	private:
	int n;
	Diem *ds;
	public:
	
	void NhapDS(){
	cout<<"Nhap so luong diem:";
	cin>>n;
	   ds = new Diem[n+5];
	   for(int i=1;i<=n;i++){
	   	     cin>>ds[i];
	   } 
	} 
	void XuatDs(){
		for(int i=1;i<=n;i++){
			ds[i].Xuat(); 
		} 	
	} 
	
	void TimDiem(){
		float max =0;
		for(int i=1;i<=n;i++) {
			if(ds[i].mau==1 && KhoangCach(ds[i])>max) {
				max=  KhoangCach(ds[i]);
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(KhoangCach(ds[i])==max) {
				ds[i].Xuat(); 
			}
		 } 
	} 
	float TongKhoangcach(){
		float sum=0;
		for(int i=1;i<=n;i++){
			if(ds[i].mau==2){
				sum+=KhoangCach(ds[i]); 
			} 
		} 
		return sum; 
		
	} 
}; 
 
int main(){
	DanhSachDiem ds;
	ds.NhapDS();
	ds.XuatDs();
	cout<<"\nDiem do max:" ;
	ds.TimDiem();
	cout<<"\nTong khoang cach vang:"<<ds.TongKhoangcach(); 
}


