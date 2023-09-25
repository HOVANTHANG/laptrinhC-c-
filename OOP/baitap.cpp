#include<math.h>
#include<iostream>
using namespace std;

class DaThuc{
	int bac;
	float *hs;
//public:
void nhap(char kt){
do{

	cout<<"nhap bac cua da thuc ";cin>>bac;
}while(bac<0);
	P.hs=new float[bac+1];
	for(int i=0;i<=bac;i++){
		cout<<kt<<i<<":";
		cin>>hs[i];
	}
}
friend int main();
void xuat(){
	for(int i=0;i<=bac;i++){
		cout<<hs[i]<< " ";
	}
}
float giatri(float d){
	float  gt=0;
	for(int i=0;i<=bac;i++){
		gt+=hs[i]*pow(d,i);
	}
	return gt;

}
};
int main(){
	DaThuc P,Q;
	float d1,d2,Pd,Qd;
	int n,m;
	P.nhap('P');
	P.xuat();
	cout<<endl;
	Q.nhap('Q');
	Q.xuat();
	cout<<"\n nhap d1,d2:";
	cin>>d1>>d2;
	Pd=P.giatri(d1);
	Qd=Q.giatri(d2);
	if(Pd-Qd<0) cout<<"\n BT am";
	else cout<<sqrt(Pd-Qd)-2023;
	return 0;
}
