#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	friend class DSSV;
	private:
		string ht,msv;
		float diem;	
	public:
		sinhvien(){
			msv="";
			ht="";
			diem=0;
		}
	friend istream &operator>>(istream &cin,sinhvien &x);
	friend ostream &operator<<(ostream &cout,sinhvien x);	
}; 
istream &operator>>(istream &cin,sinhvien &x){
	cout<<"Nhap msv:";cin>>x.msv;
	cin.ignore(1);
	cout<<"Nhap ho va ten:";getline(cin,x.ht);
	cout<<"Nhap diem:";cin>>x.diem;
}
ostream &operator<<(ostream &cout,sinhvien x){
	cout<<x.msv<<" "<<x.ht<<" "<<fixed<<setprecision(2)<<x.diem<<endl;
}

class DSSV{
	private:
		int n;
		sinhvien *sv,t;
	public:
		void nhapDSSV();
		void inDSSV();
		void Svmax();
		void Svhoclai();
};
void DSSV::nhapDSSV(){
	cout<<"Nhap so luong sinh vien:";cin>>n;
	sv=new sinhvien[n+5];
	for(int i=1;i<=n;i++) cin>>sv[i]; 
}
void DSSV::inDSSV(){
	for(int i=1;i<=n;i++){
		cout<<sv[i]<<endl;
	}
}
void DSSV::Svmax(){
	for(int i=1;i<n;i++) {
		for(int j=i+1;j<=n;j++){
			if(sv[i].diem<sv[j].diem) t=sv[i],sv[i]=sv[j],sv[j]=t;
		}
	}
	cout<<"Sinh vien co diem cao nhat:";
	cout<<sv[1];
}
void DSSV::Svhoclai(){
	cout<<"\nDanh sach sinh vien hoc lai:";
	for(int i=1;i<=n;i++){
		if(sv[i].diem<=4){
			cout<<sv[i];
		}
	}
}
int main(){
/*	sinhvien x;
	cin>>x;
	cout<<x;*/
	DSSV x;
	x.nhapDSSV();
	x.inDSSV();
	x.Svmax();
	x.Svhoclai();
	
}


