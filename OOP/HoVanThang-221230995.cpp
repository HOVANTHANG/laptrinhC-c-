#include<bits/stdc++.h>
using namespace std;
class NhanVien
{
	private:
		string maNhanVien;
		string hoVaTen;
		int namSinh;
		public:
			NhanVien(string mnv="",string hvt="",int ns=1){
				maNhanVien=mnv;
				hoVaTen=hvt;
				namSinh=ns;
			}
			void Nhap(){
				cin.ignore(1);
				cout<<"Nhap ma nhan vien:";getline(cin,maNhanVien);
				cout<<"Nhap ho va ten:";getline(cin,hoVaTen);
				cout<<"Nhap nam sinh:";cin>>namSinh;
			}
			void Xuat(){
				cout<<maNhanVien<<" "<<hoVaTen<<" "<<namSinh;
		
			}		
			string getHovaten(){
				return hoVaTen;
			}
			int getNamSinh(){
				return namSinh;
			}
};
class HopDong:public NhanVien
{
	private:
	long tiencong;
	int ngaycong;
	public :
		HopDong(string mnv="",string hvt="",int ns=1,long tc=1000,int nc=1):NhanVien(mnv,hvt,ns)
		{
			tiencong=tc;
			ngaycong=nc;
		}
		void NhapHd(){
			NhanVien::Nhap();
			cout<<"Nhap tien cong:";cin>>tiencong;
			cout<<"Nhap ngay cong:";cin>>ngaycong;
		}
	     void XuatHopDong()
	     {
	     	NhanVien::Xuat();
	     	cout<<" "<<tiencong<<" "<<ngaycong;
	     	cout<<"\n";
		 }
	     long long tinhluong(){
	     	return tiencong*ngaycong;
		 }
};
int main(){
	int n;
	HopDong *ds,t;
	cout<<"Nhap so luong hop dong:";cin>>n;
	ds= new HopDong[n+5];
	for(int i=1;i<=n;i++){
		ds[i].NhapHd();
	}
	for(int i=1;i<=n;i++){
		ds[i].Xuat();
		cout<<" "<<ds[i].tinhluong();
		cout<<"\n";
	}
	int dem=0;
	string s;
	cout<<"\nNhap ten cua sinh vien:";cin.ignore(1);
	getline(cin,s);
	for(int i=1;i<=n;i++){
		if(ds[i].getHovaten().compare(s)==0){
			dem++;
			cout<<"\nTon tai sinh vien nay!";
			ds[i].XuatHopDong();
		}
	}
	if(dem==0){
		cout<<"\nKhong ton tai sinh vien nay!";
	}
     
    int min=ds[1].getNamSinh();
    for(int i=1;i<=n;i++){
    	if(ds[i].getNamSinh()>=min){
    		min=ds[i].getNamSinh();
		}
	}
	cout<<"\nSinh vIen tre tuoi nhat:";
	for(int i=1;i<=n;i++){
		if(ds[i].getNamSinh()==min){
		ds[i].XuatHopDong();
	   }
	}
	
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].tinhluong()<ds[j].tinhluong()){
				t=ds[i];
				ds[i]=ds[j];
				ds[j]=t;
			}
		}
	}
	cout<<"\nDanh sach nhan vien sau khi sap xep theo luong:";
	for(int i=1;i<=n;i++){
		ds[i].XuatHopDong();
	}
	
	
	
	
	
	
}

















