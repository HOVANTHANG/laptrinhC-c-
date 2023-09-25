#include<bits/stdc++.h>
using namespace std;
//ham trung ten
// dieu kien:cac ham co so doi hoac kieu doi khac nhau
//ham inline
//ham toan tu(operator pt(ds doi))
//viet ham toan tu nhap
/*istream & operator>>(istream &inp,Type &x)
{
	return inp;
}
ostream & operator<<(ostream &outp, const Type &x)
{
	return outp;
}*/
//viet ham toan tu nhap xuat da thuc,thi sinh,1 day thi sinh,1 phan so:


struct phanso{
	int ts,ms;
};
istream & operator>>(istream &inp,phanso &x)
{
	cout<<"Nhap tu so";inp>>x.ts;
	do{
		cout<<"nhap ms";inp>>x.ms;
	}while(x.ms==0);
	return inp;
}
ostream & operator<<(ostream &outp, const phanso &x)
{
	outp<<x.ts<<"/"<<x.ms;
	return outp;
}
struct Dathuc{
	int bac;
	float *hs;
};
istream & operator>>(istream & cin,Dathuc &x){
	do{
	cout<<"nhap bac cua da thuc:";
	cin>>x.bac;
     }while(x.bac<0);
     x.hs=new float[x.bac+1];
     for(int i=0;i<=x.bac;i++){
     	cout<<"Nhap hs thu"<<i<<" :";
     	cin>>x.hs[i];
	 }
}
ostream & operator <<(ostream &cout,const Dathuc &x){
	for(int i=0;i<=x.bac;i++){
		cout<<x.hs[i]<<" ";
	}
}

struct Thisinh{
	string sbd,ht;
	float diem;
};
istream & operator>>(istream & cin,Thisinh &x){
	cout<<"Nhap so bao danh:";getline(cin,x.sbd);
	cout<<"\nNhap ho va ten thi sinh:";getline(cin,x.ht);
	cout<<"nhap diem cua thi sinh:";
	cin>>x.diem;
}
ostream & operator <<(ostream &cout,const Thisinh &x){
	cout<<"SBD:"<<x.sbd<<endl;
	cout<<"Ho va ten:"<<x.ht<<endl;
	cout<<"Diem:"<<x.diem<<endl;
}
struct DSTS{
	int n;
	Thisinh *ds;
};
istream & operator>>(istream & cin,DSTS &x){
	cout<<"Nhap so thi sinh:";
	cin>>x.n;
	cin.ignore(1);
	x.ds=new Thisinh[x.n+5];
	for(int i=0;i<x.n;i++){
	   cin>>x.ds[i];
	   cin.ignore(1);	
	}
	
	
}
ostream & operator<<(ostream & cout,DSTS &x){

	for(int i=0;i<x.n;i++){
	  cout<<x.ds[i];
	}
	
}
int main(){
	/*phanso p;
	cin>>p;
	cout<<p;*/
	/*Thisinh ts;
	cin>>ts;
	cout<<ts;*/
	DSTS p;
	cin>>p;
	cout<<p;
	
}


