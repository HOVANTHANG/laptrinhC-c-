#include<bits/stdc++.h>
using namespace std;
/*class sinhvien{
	private:
	string ht,sbd;
	double diem;
	public:
		sinhvien();
		sinhvien(string,string,double);
		void nhap();
		void in();
};
sinhvien::sinhvien(string sbd,string ht,double diem){
	this->sbd=sbd;
	this->ht=ht;
	this->diem=diem;
}
sinhvien::sinhvien(){
	
}
void sinhvien::nhap(){
	cout<<"Nhap sbd";cin>>sbd;
	cout<<"Nhap ht:";getline(cin,ht);
	cout<<"Nhap diem:";cin>>diem;
}
void sinhvien::in(){
	cout<<sbd<<" "<<ht<<" "<<" "<<diem;
}
class Thisinh{
	private:
		char *sbd;
		char ht[30];
		string qq;
		float diem;
	public:
		Thisinh();
		Thisinh(char *sbd,char *ht,string qq,float diem);
		void in();
};
Thisinh::Thisinh(char *sobd,char *hot,string q,float d){
	sbd=new char[strlen(sbd)];strcpy(sbd,sobd);
	strcpy(ht,hot);
	this->qq=q;
	this->diem=d;
}
Thisinh::Thisinh(){
	sbd=new char[10];
	strcpy(sbd,"123");
	strcpy(ht,"Ho van Thang");
	qq="Nghe an";
	diem=10;
}
void Thisinh::in(){
	cout<<sbd<<" "<<ht<<" "<<qq<<" "<<diem;
}*/
/*int main(){
	Thisinh a0;
    	a0.in();
    	Thisinh a1("01","ho Van Thang","nghe An",10.00);
    	a1.in();
}
*/

class Toado{
	private:
		float x,y;
	public:
		Toado();
		Toado(float,float);
		void in();
};
Toado::Toado(){
	x=4.5;
	y=5.5;
}
Toado::Toado(float x,float y){
	this->x=x;
	this->y=y;
}
void Toado::in(){
	cout<<x<<" "<<y<<endl;
}
int main(){
	Toado a;
	a.in();
	Toado b(3.5,9.5);
	b.in();
	
}




