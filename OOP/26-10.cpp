/*#include<bits/stdc++.h>
using namespace std;
class Diem{
	private:
	   char tendiem;
	   double hoanhdo;
	   double tungDo;
	   double caodo;
	   char mau;
	   public :
	   Diem(char tdiem='A',double hd=1,double td =1,double cd =1,char m='1')
	   {
	   	tendiem = tdiem;
		   hoanhdo=hd;
		   tungDo=td;
		   caodo=cd;
		   mau=m; 
		} 
	void nhap() {
			cin.ignore(1) ;
			cout<<"Nhap ten diem:" ;gets(tendiem) ;
			cout<<"Nhap hoanh do,tungdo,cao do:" ;cin>>hoanhdo>>tungDo>>caodo;cin.ignore(1);
			cout<<"Nhap mau:";get(mau); 
		}
		friend istream &operator>>(istream &cin,Diem &x) {
			cin.ignore(1) ;
			cout<<"Nhap ten diem:" ;scanf("%c",&x.tendiem) ;
			cout<<"Nhap hoanh do,tungdo,cao do:" ;cin>>x.hoanhdo>>x.tungDo>>x.caodo;cin.ignore(); 
			cout<<"Nhap mau:";scanf("%c",&x.mau); 
		}
	
	    void xuat(){
	    	cout<<tendiem<<" "<<hoanhdo<<" "<<tungDo<<" "<<caodo<<" "<<mau; 
	    	cout<<"\n"; 
		} 
	    double Tinhkhoangcach(){
	    	return (abs(hoanhdo)+abs(tungDo) +abs(caodo) /3); 
		}	
		char getmau(){
			return mau; 
		} 
}; 
class Ungdung{
	private:
	 int n;
	 Diem *ds;
	 public:
	    void nhapds(){
	    	cout<<"Nhap so luong diem:";cin>>n;
			ds = new Diem[n+1];
			for(int i=1;i<=n;i++){
				cin>>ds[i]; 
			} 
		}
		 void xuatds(){
		 	for(int i=1;i<=n;i++){
		 		ds[i].xuat(); 
			 } 
		 } 
	   	void TimdiemDoxanhat() {
			double max=0;
			 for(int i=1;i<=n;i++) {
			 	if(ds[i].Tinhkhoangcach() > max && ds[i].getmau()=='1') {
			 		max = ds[i].Tinhkhoangcach(); 
				 }
			 }
			for(int i=1;i<=n;i++) {
				if(ds[i].Tinhkhoangcach()==max && ds[i].getmau()=='1') {
					ds[i].xuat(); 
				}
			}
			
		}
		double Tongvang(){
			double sum=0;
			for(int i=1;i<=n;i++){
				if(ds[i].getmau()=='2'){
					sum+=ds[i].Tinhkhoangcach();
				} 
			} 
			return sum; 
		} 
}; 



int main(){
     Ungdung ud;
	 ud.nhapds();
	 ud.xuatds();	
	 ud.TimdiemDoxanhat() ;
	 cout<<"\nTong la:"<<ud.Tongvang(); 
	
}*/
#include<bits/stdc++.h> 
using namespace std;


class PTB1{
	private: 
	double a,b;
	 public:
	 PTB1(){
	 	a=5;
		 b=10; 
	 } 
	 friend istream &operator >>(istream &cin,PTB1 &x){
	 	cout<<"Nhap he so a,b:";cin>>x.a>>x.b; 
	 } 
	  
	
	
}; 









int main(){
	
} 
 
