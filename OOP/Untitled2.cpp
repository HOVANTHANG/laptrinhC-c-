/*#include<bits/stdc++.h>
using namespace std;
class Diem{
	private:
		double hoanhDo,tungDo;
	public:
	void Nhap(){
		cout<<"Nhap hoanh do,tung do:";cin>>hoanhDo>>tungDo; 
	} 
	double tinhdodai(Diem x){
		return sqrt((hoanhDo-x.hoanhDo)*(hoanhDo-x.hoanhDo)
		+(tungDo-x.tungDo)*(tungDo-x.tungDo)); 
	} 
}; 
class UngDung{
	private:
	int n;
	Diem *ds;
	public:
	void Nhapds(){
		cout<<"Nhap so luong diem:";cin>>n;
		ds = new Diem[n+5];
		for(int i=1;i<=n;i++){
			ds[i].Nhap(); 
		} 
	} 
	double Tong(){
		double sum=0; 
		for(int i=2;i<=n;i++){
			if(i!=n){
			sum+=ds[i].tinhdodai(ds[i+1]); 
			}else{
				sum+=ds[i].tinhdodai(ds[1]); 
			} 
		}
		return sum; 
	} 
}; 
int main(){
	UngDung ud;
	ud.Nhapds();
	cout<<fixed<<setprecision(2)<<ud.Tong(); 
}*/
/*#include<bits/stdc++.h>
using namespace std;
class NGUOI{
	private:
	string hoVaTen;
	int tuoi;
	public:
	NGUOI(){
		hoVaTen="";
		tuoi=0; 
	} 
	NGUOI(string hvt="",int t=0){
		hoVaTen=hvt;
		tuoi=t ;
	} 
	void nhap(){
		cin.ignore(1);
		cout<<"Nhap ho va ten:";getline(cin,hoVaTen);
		cout<<"Nhap tuoi:";cin>>tuoi; 
	} 
	void xuat(){
		cout<<hoVaTen<<" "<<tuoi; 
	} 
	string getHoVaTen(){
		return hoVaTen; 
	} 
	int getTuoi(){
		return tuoi; 
	} 
}; 
class QLNV:public NGUOI{
	private:
		int snct;
		double luong;
		public:
		QLNV(string hvt="",int t=0,int sn=0,double l=0):NGUOI(hvt,t){
			snct=sn;
			luong=l; 
		}
		void NhapNV(){
			NGUOI::nhap();
			cout<<"Nhap so nam cong tac:";cin>>snct;
			cout<<"Nhap so tien luong:";cin>>luong; 
		} 
		void XuatNV(){
			NGUOI::xuat(); 
			cout<<" "<<snct<<" "<<luong<<endl; 
		} 
		double getLuong(){
			return luong; 
		} 
		int getNamCT(){
			return snct; 
		} 
}; 
class UngDung{
	private:
		int n;
		QLNV *ds;
		public:
		void Nhapds(){
			cout<<"Nhap so luong nhan vien:";cin>>n;
			ds = new QLNV[n+5];
			for(int i=1;i<=n;i++){
				ds[i].NhapNV(); 
			} 
		}
		void Xuatds(){
			for(int i=1;i<=n;i++){
				ds[i].XuatNV() ;
			} 
		} 
		double Salary(){
			double sum=0;
			for(int i=1;i<=n;i++) {
				sum+=ds[i].getLuong(); 
			}
			return (double)sum/n; 
		} 
		
		void find(){
			int max=0;
			for(int i=1;i<=n;i++){
				if(ds[i].getNamCT()>max){
					max= ds[i].getNamCT();
				} 
			}
			for(int i=1;i<=n;i++){
				if(ds[i].getNamCT()==max){
					ds[i].XuatNV(); 
				} 
			} 
		} 
}; 
int main(){
	UngDung ud;
	ud.Nhapds();
	ud.Xuatds();
	cout<<"\nluong trung binh:"<<ud.Salary(); 
	ud.find(); 
} */
#include<bits/stdc++.h>
using namespace std;
class DaThuc{
	private:
	int n;
	double *ds;
	public:
		DaThuc(){
			n=0;
			ds=NULL; 
		} 
	DaThuc(const DaThuc &x){
			n=x.n;
			ds= new double[x.n+5];
			for(int i=0;i<=x.n;i++){
				ds[i]=x.ds[i];
			} 
		} 
	DaThuc operator =(const DaThuc &x){
			n=x.n;
			ds= new double[x.n+5];
			for(int i=0;i<=x.n;i++){
				ds[i]=x.ds[i];
			} 
		} 
	void Nhap(){
		cout<<"Nhap bac cua da thuc:";cin>>n;
		ds= new double[n+5];
		for(int i=0;i<=n;i++){
			cin>>ds[i]; 
		} 
	} 
	void in(){
		cout<<ds[0]; 
		for(int i=1;i<=n;i++){
			cout<<"+"<<ds[i]<<"*x^"<<i; 
		} 
	} 
	double Tinh(double d){
		double dum=0;
		for(int i=0;i<=n;i++){
			dum+=ds[i]*pow(d,i); 
		}
		return dum; 
	} 
	DaThuc operator+(DaThuc x){
		DaThuc t;
		int max=(n>x.n)?n:x.n;
		int min=(n<x.n)?n:x.n;
		t.n=max;
		t.ds = new double[t.n+5];
		for(int i=0;i<=min;i++){
			t.ds[i]= ds[i]+ x.ds[i]; 
		} 
		for(int i=min+1;i<=max;i++){
			if(n>x.n){
				t.ds[i] =ds[i]; 
			}else{
				t.ds[i]= x.ds[i]; 
			} 
		} 
		return t;
		 
	} 
	
}; 




int main(){
	DaThuc dt,k,l;
	dt.Nhap();
	dt.in();
	int d;
	cout<<"\nNhap d:";cin>>d; 
	cout<<"\n"<<dt.Tinh(d); 
	DaThuc c=dt; 
	cout<<"\n";c.in(); 
	l=dt; 
	cout<<"\n";l.in(); 
	k=c+l;
	cout<<"\n";k.in(); 
} 



















