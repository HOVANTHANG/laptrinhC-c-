#include<bits/stdc++.h>
using namespace std;
struct ps{
	int t,m;
	void nhap(){
		cout<<"Tu so :";cin>>t;
		cout<<"Mau so :";cin>>m;
	}
};
struct diem{
	double x,y;
	void nhap(){
		cout<<"nhap toa do :";cin>>x>>y;
	}
	void xuat(){
		cout<<"("<<x<<","<<y<<")";
	}
    double kc(diem M){
    	return sqrt((x-M.x)*(x-M.x)+(y-M.y)*(y-M.y));
	}
	double dt(diem M){
		return x*M.y-y*M.x;
	}	
};

struct tamgiac{
	diem A,B,C;
	void nhap();
	double chuvi();
	double dientich();
	
	
	
};

void tamgiac::nhap(){
	A.nhap();
	B.nhap();
	C.nhap();
}
double tamgiac::chuvi(){
	return A.kc(B)+B.kc(C)+C.kc(A);
}
double tamgiac::dientich(){
	return abs(A.dt(B)+B.dt(C)+C.dt(A))/2;
}



int main(){
	/*ps A;
	A.t=A.m=5;
	cout<<A.t<<"/"<<A.m<<"\n";
	A.nhap();
	cout<<A.t<<"/"<<A.m<<"\n";
	ps *B =&A,*C=new ps;
	B->nhap();
	C->nhap();
	cout<<A.t<<"/"<<A.m<<"\n";
	cout<<C->t<<"/"<<C->m<<"\n";
	
	delete C;*/
	
	/*diem A,B;
	A.nhap();
	B.nhap();
	cout<<"\nA :";A.xuat();
	cout<<"\nB :";B.xuat();
	cout<<"\nkhoang cach tu A-> B "<<A.kc(B);
	cout<<"\nkhoang cach tu B-> A "<<B.kc(A);*/
	tamgiac P;
	P.nhap();
	cout<<"\nChu vi tam giac"<<P.chuvi();
	cout<<"\nDien tich tam giac:"<<P.dientich()<<endl;
	
}


