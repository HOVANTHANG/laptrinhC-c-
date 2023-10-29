#include<bits/stdc++.h>
using namespace std;
class diem{
	friend class DS;
	private:
		double hd,td;
};
class diemmoi: public diem{
	friend class DS;
	private:
		string color;
};
class DS{
	int n;
	diemmoi *hs;
	public:
		void nhap();
		void xuat();
		void thongke();
		void diemdoMax();
};

void DS::nhap(){
	cout<<"Nhap danh sach so diem:";cin>>n;
	hs=new diemmoi[n+5];
	for(int i=1;i<=n;i++){
		cout<<"\nNhap hoang do diem"<<i<<":";
		cin>>hs[i].hd;
			cout<<"Nhap tung do diem"<<i<<":";
			cin>>hs[i].td;
				cout<<"Nhap mau sac diem"<<i<<":";
				cin>>hs[i].color;
		
	}
}
void DS::xuat(){
		for(int i=1;i<=n;i++){
		cout<<hs[i].hd<<" "<<hs[i].td<<" "<<hs[i].color;
	}
}
void DS::thongke(){
	int dem=0,dem1=0,dem2=0;
	for(int i=1;i<=n;i++){
		if(hs[i].color=="red"){
			dem++;
		}else if(hs[i].color=="green"){
			dem1++;
		}else {
		dem2++;}
	}
	cout<<"\nSo diem mau red:"<<dem;
	cout<<"\nSo diem mau green:"<<dem1;
	cout<<"\nSo diem mau yellow:"<<dem2;
}
void DS::diemdoMax(){
	int dem=0;
	int max=-10e9;
	for(int i=1;i<=n;i++){
		if(hs[i].color=="red"){
			if(hs[i].hd*hs[i].hd+hs[i].td*hs[i].td>=max){
				max=hs[i].hd*hs[i].hd+hs[i].td*hs[i].td;
			}
			dem++;
		}
	}
	if(dem==0) {
	cout<<"Khong co diem do!";
	}else{
	cout<<"\nDiem do xa toa do nhat:";
	for(int i=1;i<=n;i++){
	           
			if(hs[i].hd*hs[i].hd+hs[i].td*hs[i].td==max){
			 cout<<"("<<hs[i].hd<<","<<hs[i].td<<")";
			 break;
		}
	}
	}
}



int main(){
	DS a;
	a.nhap();
	a.xuat();
	a.thongke();
	a.diemdoMax();
}


