/*#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string hoVaTen;
		string maSinhVien;
		float diem;
	public:
		SinhVien(string hvt="",string msv="",float d=0){
			hoVaTen=hvt;
			maSinhVien=msv;
			diem=d; 
		} 
		friend istream &operator>>(istream &cin,SinhVien &x){
			cin.ignore(1); 
			cout<<"Nhap ho va ten:";getline(cin,x.hoVaTen);
			cout<<"Nhap ma sinh vien:";getline(cin,x.maSinhVien);
			cout<<"Nhap diem:";cin>>x.diem; 
		} 
		friend ostream &operator<<(ostream &cout,SinhVien x){
			cout<<x.maSinhVien<<" "<<x.hoVaTen<<" "<<x.diem<<endl; 
		} 
		float getDiem(){
			return diem; 
		} 
}; 
class Ungdung{
	private:
	int n;
	SinhVien *ds;
	public:
		void Nhap(){
		 cout<<"Nhap so luong sinh vien:";cin>>n;
		 ds= new SinhVien[n+5];
		 for(int i=1;i<=n;i++){
		 	cin>>ds[i]; 
		 } 
		}
		void xuat(){
			for(int i=1;i<=n;i++){
				cout<<ds[i]; 
			} 
		} 
		void DiemMax(){
			float max=ds[1].getDiem();
			for(int i=1;i<=n;i++){
				if(ds[i].getDiem()>max){
					max=ds[i].getDiem(); 
				} 
			} 
			for(int i=1;i<=n;i++){
				if(ds[i].getDiem()==max){
					cout<<ds[i]; 
				} 
			} 
		} 
		void SvHocLai(){
			int dem=0; 
			for(int i=1;i<=n;i++){
				if(ds[i].getDiem()<=4){
					dem++; 
					cout<<ds[i]; 
				} 
			}
			if(dem==0){
				cout<<"\nKhong co sv nao hoc lai!"; 
			} 
			
		} 
		void sapXep(){
			for(int i=1;i<n;i++){
				for(int j=i+1;j<=n;j++){
					if(ds[i].getDiem()>ds[j].getDiem()) swap(ds[i],ds[j]); 
				} 
			} 
		} 
}; 

int main(){
	Ungdung ud;
	ud.Nhap();
	ud.xuat();
	cout<<"\nSinh vien co diem max:\n"; 
	ud.DiemMax();
	cout<<"\nSinh vien hoc lai:\n"; 
	ud.SvHocLai();
	ud.sapXep(); 
	cout<<"\nSinh vien sau khi sap xep:\n"; 
	ud.xuat(); 
}

*/
#include<bits/stdc++.h>
using namespace std;
class MaTran{
	private:
		int m,n;
		double **a;
		public:
		friend istream &operator>>(istream &cin,MaTran &x){
			cout<<"Nhap so hang:";cin>>x.m;
			cout<<"Nhap so cot:";cin>>x.n;
			x.a= new double*[x.m+5];
			for(int i=0;i<x.m;i++){
				x.a[i]= new double[x.n+5]; 
			} 
			for(int i=0;i<x.m;i++){
				for(int j=0;j<x.n;j++){
					cin>>x.a[i][j]; 
				} 
			} 
		} 
		friend ostream &operator<<(ostream &cout,MaTran x){
			for(int i=0;i<x.m;i++){
				for(int j=0;j<x.n;j++){
					cout<<x.a[i][j]<<"\t"; 
				} 
				cout<<"\n"; 
			} 
		} 
		void TinhTong(){
			double sum=0;
			int dem=0; 
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					if(a[i][j]<0){
						sum+=a[i][j];
						dem++; 
					} 
				} 
			}
			if(dem==0){
				cout<<"\nKhong co phan tu am nao!"; 
			}else{
				 cout<<(double)sum/dem; 
			} 
		}
		void TinhTongTungHang(){
			for(int i=0;i<n;i++){
				double sum=0;
				for(int j=0;j<m;j++){
					sum+=a[i][j]; 
				} 
				cout<<"\n"<<sum; 
			} 
		}
		void TimPT(){
			int d,l; 
			int dem=0; 
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					if(a[i][j]<0){
						d=i;
						l=j; 
						dem++; 
						break; 
					} 
				} 
			} 
			if(dem==0){
				cout<<"\nKhong co pha tu am!"; 
			} else{
			double max=a[d][l]; 
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					if(a[i][j]>max&&a[i][j]<0){
						max=a[i][j]; 
					} 
				} 
			} 
			cout<<"\nPhan tu am lon nhat:"<<max; 
		
		}
		} 
		double operator !(){
			double sum=0;
			 for(int i=0;i<m;i++){
			 	for(int j=0;j<n;j++){
			 		sum+=a[i][j]; 
				 } 
			 } 
			 return sum; 
		} 
		void sapxep(){
			int k=m*n; 
			for(int i=0;i<k;i++){
				for(int j=i+1;j<k;j++){
					if(a[i/m][i%m]>a[j/m][j%m]){
						swap(a[i/m][i%m],a[j/m][j%m]);
					} 
				} 
			} 
		} 
		MaTran operator +(MaTran x){
			MaTran y;
			y.n=n;
			y.m=m;
			y.a = new double*[y.m+5];
			for(int i=0;i<m;i++){
				y.a[i] = new double[y.n+5]; 
			} 
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					y.a[i][j] = a[i][j]+x.a[i][j]; 
				} 
			} 
			return y; 
		} 
}; 



int main(){
	MaTran mt,mt1,mt2;
	cin>>mt;
	cout<<mt; 
	mt.TinhTong() ;
	mt.TinhTongTungHang();
	mt.TimPT(); 
	cout<<"\n"<<!mt<<endl; 
	mt.sapxep();
	cout<<mt; 
	cin>>mt1; 
	mt2=mt+mt1;
	cout<<"\n"<<mt2; 
	
	
	
	
	
	
	
}
