#include<bits/stdc++.h>
using namespace std;
/*struct hinhtron{
	double x,y,r;
};
struct DSHT{
	int n;
	hinhtron *ht;
   friend istream&operator>>(istream &cin,DSHT &T){
		cout<<"Nhap  so luong hinh tron:";cin>>T.n;
		T.ht = new hinhtron[T.n+1];
		for(int i=1;i<=T.n;i++){
			cin>>T.ht[i].x>>T.ht[i].y>>T.ht[i].r;
		}
	}
	friend ostream &operator<<(ostream &cout,DSHT T){
		for(int i=1;i<=T.n;i++){
			cout<<T.ht[i].x<<" "<<T.ht[i].y<<" "<<T.ht[i].r<<endl;
		}
	}
	void tinhkc(){
		for(int i=1;i<=n;i++){
			cout<<sqrt(ht[i].x*ht[i].x+ht[i].y*ht[i].y)<<endl;
		}
	}
};

int main(){
	DSHT x;
	cin>>x;
	cout<<x;
	x.tinhkc();
}*/
class danhsach;
class sinhvien;
class sinhvien{
	friend class danhsach;
	private:
		string sbd,ht,truong;
		double diem;
	public:
		friend istream&operator>>(istream &cin,sinhvien &x){
			cout<<"Nhap sbd:";cin>>x.sbd;
			cin.ignore(1);
			cout<<"Nhap ho va ten:";
			getline(cin,x.ht);
			cout<<"Nhap truong:";
			cin>>x.truong;
			cout<<"Nhap diem:";
				cin>>x.diem;
		}
		friend ostream&operator<<(ostream &cout,sinhvien x);
};

ostream&operator<<(ostream &cout,sinhvien x){
	cout<<x.sbd<<" "<<x.ht<<" "<<x.truong<<" "<<fixed<<setprecision(2)<<x.diem<<endl;
}
class danhsach{
	private:
		int n;
		sinhvien *sv;
	public:
		friend istream&operator>>(istream &cin,danhsach &x){
			cout<<"Nhap so sinh vien:";cin>>x.n;
			x.sv=new sinhvien[x.n+1];
			for(int i=1;i<=x.n;i++){
				cin>>x.sv[i];
			}
		}
	   friend ostream&operator<<(ostream &cout,danhsach x){
	   			for(int i=1;i<=x.n;i++){
				     cout<<x.sv[i];
			}
	   }
	   void tongdiem();
};
void danhsach::tongdiem(){
	double tong1=0,tong2=0,tong3=0;
	for(int i=1;i<=n;i++){
	    if(sv[i].truong=="A1"){
	    	tong1+=sv[i].diem;
		}
		if(sv[i].truong=="A2"){
	    	tong1+=sv[i].diem;
		}
		if(sv[i].truong=="A3"){
	    	tong1+=sv[i].diem;
		}
	}
	cout<<tong1<<" "<<tong2<<" "<<tong3;
}
int main(){
	danhsach x;
	cin>>x;
	cout<<x;
	x.tongdiem();
	
	
}

