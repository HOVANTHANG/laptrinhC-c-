#include<bits/stdc++.h>
using namespace std;
class MonHoc{
	friend class DKHP; 
	private:
	string maMon;
	string tenMon;
	int soTinChi;
	public:
	void Nhap(){
		cin.ignore(1);
		cout<<"Nhap ma mon:";getline(cin,maMon);
		cout<<"Nhap ten mon:";getline(cin,tenMon);
		cout<<"Nhap so tin chi:";cin>>soTinChi; 
	} 
	void xuat(){
		cout<<maMon<<" "<<tenMon<<" "<<soTinChi; 
	} 
	string getMaMon(){
		return maMon; 
	} 
	string gettenMon(){
		return tenMon; 
	} 
	int getsoTC(){
		return soTinChi; 
	}

};

class DKHP{
	private:
	string maSinhVien;
	string tenSinhVien;
	int *check;
	public:
	DKHP(string msv="",string tsv="",int soMon=0){
		maSinhVien=msv;
		tenSinhVien=tsv;
		check= new int[soMon]; 
	} 
	void Nhap(){
		cout<<"Nhap ma sinh vien:";getline(cin,maSinhVien);
		cout<<"Nhap ten sinh vien:";getline(cin,tenSinhVien);
		for(int i=1;i<=check.length;i++){
			
		} 
	} 
	 
	
	
}; 


int main(){
}


