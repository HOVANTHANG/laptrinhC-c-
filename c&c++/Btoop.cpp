#include<bits/stdc++.h>
using namespace std;
/*struct Sophuc{
	double thuc,ao;
};
istream & operator>>(istream &cin,Sophuc &x)
{
	cout<<"Nhap phan thuc:";
      	cin>>x.thuc;
		cout<<"nhap phan ao:";
		cin>>x.ao;
}
ostream & operator<<(ostream &cout, const Sophuc &x)
{

	cout<<x.thuc<<"+"<<x.ao<<"i"<<endl;
   
}
Sophuc operator+(Sophuc p1,Sophuc p2){
	Sophuc p;
	p.thuc=p1.thuc+p2.thuc;
	p.ao=p1.ao+p2.ao;
	return p;
}
Sophuc operator-(Sophuc c1, Sophuc c2){
	Sophuc c;
	c.ao=c1.ao-c2.ao;
	c.thuc=c1.thuc-c2.thuc;
	return c;
} 
Sophuc operator*(Sophuc c1,Sophuc c2){
	Sophuc c;
	c.thuc=c1.thuc*c2.thuc-c1.ao*c2.ao;
	c.ao=c1.ao*c2.thuc+c1.thuc*c2.ao; 
	return c;
} 
Sophuc operator/(Sophuc c1, Sophuc c2){
	Sophuc c;
	c.thuc=(c1.thuc*c2.thuc+c1.ao*c2.ao)/(c2.thuc*c2.thuc+c2.ao*c2.ao);
	c.ao=(c1.ao*c2.thuc-c1.thuc*c2.ao)/(c2.thuc*c2.thuc+c2.ao*c2.ao); 
	return c;
} 
int main(){
	Sophuc p,p1,p2,p3,p4;
	cin>>p1>>p2>>p3>>p4;
	cout<<p1;
	cout<<p2;
	cout<<p3;
	cout<<p4;
	p=(p1+p2)/(p3-p2)*p4;
	cout<<p;
}

*/
struct vecto{
	int sochieu;
	float *tp;
};
istream & operator>>(istream &cin,vecto &x)
{
		cout<<"\nNhap so chieu:";cin>>x.sochieu;
		x.tp=new float[x.sochieu+2];
		for(int i=0;i<x.sochieu;i++){
			cout<<"Nhap tp thu"<<i+1<<":";
			cin>>x.tp[i];
		}
}
ostream & operator<<(ostream &cout, const vecto &x)
{

	cout<<"(";
	for(int i=0;i<x.sochieu-1;i++)
		cout<<x.tp[i]<<",";
	cout<<x.tp[x.sochieu-1]<<")";
}

vecto operator+(const vecto &v1,const vecto &v2){
	vecto v;
    v.sochieu=(v1.sochieu>v2.sochieu)?v1.sochieu: v2.sochieu;
    v.tp=new float[v.sochieu];
    int min=(v1.sochieu<v2.sochieu)?v1.sochieu: v2.sochieu;
    for(int i=0;i<min;i++) v.tp[i]=v1.tp[i]+v2.tp[i];
    for(int i=min;i<v.sochieu;i++){
    	if(min==v1.sochieu) v.tp[i]=v2.tp[i];
    	else v.tp[i]=v1.tp[i];
	}
	return v; 
}/*
vecto operator*(int k,vecto v1){
	vecto v;
	v.x=k*v1.x;
	v.y=k*v1.y;
	return v;
} 
double operator*(vecto v1,vecto v2){
	double p;
	p=v1.x*v2.x+v1.y*v2.y;
	return p; 
}
int main(){
	vecto u,v,t,u1,v1;
	int k;
	double p;
	cin>>u>>v>>t;
	cout<<"\nNhap k:";
	cin>>k;
	u1=u+v;
	cout<<"\n"; 
	cout<<u1;
	p=v*t;
	cout<<"\n"; 
	cout<<p;
	v1=k*u+t;
	cout<<"\n"; 
	cout<<v1;
}
*/
int main(){
	vecto u,v,t;
	cin>>u;
	cout<<u;
	cin>>v;
	cout<<v;
	cout<<"\n";
	cout<<u+v;
	
	
}


