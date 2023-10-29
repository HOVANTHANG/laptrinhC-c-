#include<bits/stdc++.h>
using namespace std;
class HinhTron{
	private:
	   double hoanhdo,tungdo,bankinh;
	    public:
		HinhTron(){
			hoanhdo=tungdo=bankinh=0; 
		} 
		void nhap() 
		{
			cout<<"Nhap hoanh do,tung do,ban kinh:";cin>>hoanhdo>>tungdo>>bankinh; 
		}
		friend ostream &operator<<(ostream &cout,HinhTron x){
			cout<<x.hoanhdo<<" "<<x.tungdo<<" " <<x.bankinh; 
		} 
		friend double TinhDienTich(HinhTron a){
			return 3.14*a.bankinh*a.bankinh; 
		} 
}; 
class DsHinhTron{
	private:
	int n;
	HinhTron *ds,t;
	public:
	    void nhapds(){
	    	cout<<"Nhap so luong hinh tron:";cin>>n;
			ds = new HinhTron[n+5];
			for(int i=1;i<=n;i++) {
			  ds[i].nhap(); 
			}
		} 
	   void inTheoGiam(){
	   	for(int i=1;i<n;i++){
	   		for(int j=i+1;j<=n;j++){
	   			if(TinhDienTich(ds[i]) <TinhDienTich(ds[j])) {
	   				  t=ds[i];
						 ds[i]=ds[j];
						 ds[j]=t; 
				   }
			   } 
		   } 
		   for(int i=1;i<=n;i++) {
		   	cout<<ds[i]; 
		   }
	   } 
}; 


int main(){
}


