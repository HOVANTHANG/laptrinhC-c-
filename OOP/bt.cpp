
#include<bits/stdc++.h>
using namespace std;
class Nguoi{
	friend class DSBN; 
	private:
	   string hoVaTen;
	    int namSinh;
	public:
		Nguoi(string hvt="",int ns=0){
			hoVaTen=hvt;
			namSinh=ns; 
		} 
		void Nhap(){
		  cin.ignore(); 
			cout<<"Nhap ho va ten:";getline(cin,hoVaTen);
			cout<<"Nhap nam sinh:" ;cin>>namSinh;cin.ignore() ;
		} 
		void Xuat(){
			cout<<hoVaTen<<" "<<namSinh; 
		} 
}; 
class BenhNhan:public Nguoi{
	friend class DSBN; 
	private:
		char benh;
	public:
	BenhNhan(string hvt="",int ns=0,char b='0'):Nguoi(hvt,ns){
	   benh=b; 
	} 
	void nhap(){
		Nguoi::Nhap();
		cout<<"Nhap benh:";cin>>benh; 
	
	} 
	void xuatbn(){
		Nguoi::Xuat();
		cout<<" "<<benh; 
	} 
	char getbenh(){
		return benh; 
	} 
	
}; 
class DSBN{
	private:
	  int n;
	  BenhNhan *bn;
	  public:
	  void Nhapds(){
	  	cout<<"Nhap so luong benh nhan:";cin>>n;
		  bn = new BenhNhan[n+5];
		  for(int i=1;i<=n;i++) {
		  	  bn[i].nhap(); 
		  }
	  } 
	  void Xuatds(){
	  	for(int i=1;i<=n;i++) {
		  	  bn[i].xuatbn(); 
		  }
	  } 
	  void ThongKe() {
	  	int dem=0,dem1=0,dem2=0,dem3=0; 
	  	for(int i=1;i<=n;i++){
	  		if(bn[i].getbenh()=='A') {
			  	dem++; 
				  }
			else if(bn[i].getbenh()=='B'){
			 dem1++; }
			else if(bn[i].getbenh()=='C') {
			dem2++; }
			else  dem3++; 
		  }
		  cout<<"\nSo benh nhan benh A"<<dem; 
		  cout<<"\nSo benh nhan benh B"<<dem1; 
		  cout<<"\nSo benh nhan benh C"<<dem2; 
		  cout<<"\nSo benh nhan benh D"<<dem3; 
	  }
	  void TimKiem(){
	  	int min=bn[1].namSinh; 
	  		for(int i=1;i<=n;i++){
			  if(bn[i].namSinh>=min &&bn[i].getbenh()=='D'){
			  	min=bn[i].namSinh; 
			  } 
			}
			for(int i=1;i<=n;i++){
				  if(bn[i].namSinh==min && bn[i].getbenh()=='D'){
				  	cout<<"\n"; 
				  	bn[i].xuatbn(); 
				  }
	  } 
	  }
}; 
int main(){
	DSBN a;
	a.Nhapds();
	a.Xuatds(); 
	a.ThongKe();
	a.TimKiem(); 
} 

