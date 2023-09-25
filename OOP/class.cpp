#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
	     string id,ht,dc;
		 double gpa;
		 	static int dem;//dem dung chung cho ca 1 class; 
		
	public:
		sinhvien(); //constructor 
		sinhvien(string,string,string,double); 
	    void nhap();
		void in(); 		 
	//	~sinhvien();//ham huy 
	    double getgpa();
		double set(); 
		friend void inthongtin(sinhvien&); 
	
		
}; 
int sinhvien::dem=0; 
void sinhvien::nhap(){
	cout<<"nhap id:";cin>>id;cin.ignore(1); 
	cout<<"nhap ho va ten:";getline(cin,ht);
	cout<<"Nhap diachi:";getline(cin,dc);
	cout<<"Nhap diem:";cin>>gpa; 
	cin.ignore(1); 
} 
void sinhvien::in(){
	cout<<id<<" "<<ht<<" "<<dc<<" "<<fixed<<setprecision(2)<<gpa; 
} 
sinhvien::sinhvien(){
    cout<<"Duoc khoi tao!";  
} 
sinhvien::sinhvien(string id,string  ht,string dc,double diem){
       id=id;
        ht=ht;
     	dc=dc;
    	gpa=diem; 
	 
} 
double sinhvien::getgpa(){
	return gpa; 
	} 
bool cmp(sinhvien a,sinhvien b){
	return a.getgpa()>b.getgpa(); 
} 

int main(){
//	sinhvien x;
	sinhvien y("abc","ho van thang","nghean",10.12); 
//	x.nhap(); 
//	x.in();
      y.in(); 
}


