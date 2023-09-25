#include<bits/stdc++.h>
using namespace std;
class doanvien{
	private:
		string hten;
	   char *qq;
	   int nam;
	public:
		doanvien();
		doanvien(string ht,char *q,int nam);
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
		void in();
};
doanvien::doanvien(){
	hten="Ho van Thang";
	qq=new char[30];
	strcpy(qq,"nghe an");
	this->nam=2004;
}
doanvien::doanvien(string ht,char *q,int nam){
	this->hten=ht;
	qq=new char[30];
	strcpy(qq,q);
	this->nam=nam;
}
void doanvien::in(){
	cout<<hten<<" "<<qq<<" "<<nam;
}
int main(){
	doanvien b("Ho van A","Dien Chau",2004),a;
	a=b;
	a.in();
	
}


