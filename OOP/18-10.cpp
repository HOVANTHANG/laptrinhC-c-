#include<bits/stdc++.h>
using namespace std;
class Book{
	private:
		string masach;
		string tensach;
		string tentacgia;
		int namxb;
		string nhaXb;
		public:
			Book(string masach="",string tensach="",string tentg="",int nam=2020,string nhaxb=""){
				masach=masach;
				tensach=tensach;
				tentacgia=tentg;
				namxb=nam;
				nhaXb=nhaxb;
			}
			void nhap();
			void xuat();
		//	void timkiem(string tentg);
		string getHovaten(){
			return tentacgia;
		}
};
void Book::nhap(){

	cout<<"Nhap ma sach:";getline(cin,masach);
	cout<<"\nNhap ten sach:";getline(cin,tensach);
	cout<<"\nNhap ten tac gia:";getline(cin,tentacgia);
	cout<<"\nNhap nam Xuat ban:";cin>>namxb;
		cin.ignore(1);
	cout<<"\nNhap nha xuat ban:";getline(cin,nhaXb);
	

	
}
void Book::xuat(){
	cout<<masach<<" "<<tensach<<" "<<tentacgia<<" "<<namxb<<" "<<nhaXb;
	cout<<"\n";
}
int main(){
	Book *ds;
	int n;
	cout<<"Nhap so luong sach:";
	cin>>n;
	ds = new Book[n+5];
	cin.ignore(1);
	for(int i=1;i<=n;i++){
		ds[i].nhap();
	}
	for(int i=1;i<=n;i++){
		ds[i].xuat();
	}
	string s;
	int dem=0;
	cout<<"\nNhap ten tac gia:";getline(cin,s);
	
	for(int i=1;i<=n;i++){
		if(ds[i].getHovaten().compare(s)==0){
			 ds[i].xuat();
			 dem++;
		}
	}
	if(dem==0){
		cout<<"Khong tim thay!";
	}
}


