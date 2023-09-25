#include<bits/stdc++.h>
using namespace std;
//Phuong thuc toan tu gan
//Cu phap:Kieuham operator=(const tenlop &ob1)
//{
//   lenh gan gia tri cua ob1 cho con tro this
//}
//Kieu ham co the la void hoac Tenlop
/*class A{
		int a1;
		int *a2;
		public:
			A(const int& x=0,const int &y=1){
				a1=x;
				a2=new int;
				*a2=y;
			}
			void xuat(){
				cout<<a1<<" "<<*a2<<endl;
			}
			void biendoi(){
				a1+=10;
				(*a2)-=20;
			}
			void operator =(const A &x){
				this->a1=x.a1;
				a2=new int;
				*a2=*(x.a2);
			}
};*/
//Ham tao sao chep;
//cu phap:
//	tenlop(const tenlop &ob1){
//		lenh gan gia tri cua ob1
//		con tro this
//	}
/*class A{
	int a1;
	int *a2;
	public:
		A(const int& x,const int& y){
			this->a1=x;
			a2=new int;
			*a2=y;
		}
		A(const A &b){
			a1=b.a1;
			a2=new int;
			*a2=*(b.a2);
		}
		void xuat(){
				cout<<a1<<" "<<*a2<<endl;
			}
};*/
class doanvien{
	private:
	string hten;
	char *qq;
	int nam;
	public:
		doanvien(){	
		        hten="";
				qq=new char[30];
				strcpy(qq,"");
				this->nam=0;	
		}
		
		void nhap();
		void xuat();
		void operator =(const doanvien &x){
			nam=x.nam;
			qq= new char[strlen(x.qq)];
			strcpy(qq,x.qq);
			hten=x.hten;
		}
	    doanvien(const doanvien &x){
			nam=x.nam;
			qq= new char[strlen(x.qq)];
			strcpy(qq,x.qq);
			hten=x.hten;
		}
		doanvien(string ht,char *q,int nam=2023){
			this->nam=nam;
			qq= new char[strlen(q)];
			strcpy(qq,q);
			hten=ht;
		}
};
/*doanvien::doanvien(string hot,char *q,int n){
	this->hten=hot;
	qq=new char[20];
	strcpy(qq,q);
	this->nam=n;
}*/



int main(){
	/*A a1(5,5);
	a1.xuat();
	A a2;
	a2=a1;
	a2.xuat();
	a1.biendoi();
	cout<<"\na1,a2 sau khi bien doi:";
	a1.xuat();
	a2.xuat();*/
	/*A a1(2,3);
	A a2=a1;
	a2.xuat();*/
	doanvien b("Ho van A","Dien Chau",2011);
	b.xuat();
}


