#include<bits/stdc++.h>
using namespace std;
class doanvien{
	private:
		string hten;
	   char *qq;
	   int nam;
	   char madoanvien[30];
	public:
		doanvien();
		doanvien(string ht,char *q,int nam,char *mdv);
		doanvien& operator =(const doanvien &x){
			nam=x.nam;
			qq= new char[strlen(x.qq)];
			strcpy(qq,x.qq);
			hten=x.hten;
			strcpy(madoanvien,x.madoanvien);
		}
		doanvien(const doanvien &x){
			nam=x.nam;
			qq= new char[strlen(x.qq)];
			strcpy(qq,x.qq);
			hten=x.hten;
			strcpy(madoanvien,x.madoanvien);
		}
		void nhap(){
			cout<<"\nNhap ho va ten:" ;getline(cin,hten) ;
			cout<<"Nhap que quan:" ;gets(qq) ;
			cout<<"Nhap nam vao doan:" ;cin>>nam;cin.ignore(1) ;
			cout<<"Nhap ma doan vien:" ;gets(madoanvien) ;
		}
		
		
		void in();
};
doanvien::doanvien(){
	hten="Ho van Thang";
	qq=new char[30];
	strcpy(qq,"nghe an");
	this->nam=2004;
	strcpy(qq,"ASD");
}
doanvien::doanvien(string ht,char *q,int nam,char *mdv){
	this->hten=ht;
	qq=new char[30];
	strcpy(qq,q);
	this->nam=nam;
	strcpy(madoanvien,mdv) ;
}
void doanvien::in(){
	cout<<hten<<" "<<qq<<" "<<nam<<madoanvien;
}
int main(){
	doanvien b("Ho van A","Dien Chau",2004,"ASD"),a;
	  a=b;
	a.in() ;
	doanvien c;
	c.nhap();
	doanvien  d=c;
	d.in();
	
}


