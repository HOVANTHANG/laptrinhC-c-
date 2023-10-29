#include<bits/stdc++.h>
using namespace std;
class DaThuc{
	private:
		int n;
		  double *hs;
		public:
			DaThuc(){
			}
			void nhap(){
				cout<<"Nhap bac cua da thuc:";
				cin>>n;
				hs = new double[n+5];
				for(int i=0;i<=n;i++){
					cin>>hs[i];
				}
			}
			~DaThuc(){
				delete[] hs;
			}
	       friend ostream &operator>>(ostream &cout,DaThuc x){
	         	for(int i=0;i<=x.n;i++){
	         		cout<<x.hs[i];
				 }
				 return cout;
			 }
	           double tinhGiatri(float x){
	          	  double sum=0;
	          	  for(int i=0;i<=n;i++){
	          	  	sum+= hs[i]*pow(x,i);
					}
					return sum;
			  }
			  
};


int main(){
	DaThuc x;
	x.nhap();
	cout<<x;
	double d1,d2;
	cin>>d1>>d2;
	double k;
	
	k=x.tinhGiatri(d1)-x.tinhGiatri(d2);
	if(k<0){
		cout<<"Khong xac dinh!";
	}else {
		cout<<"Ket qua la:"<<sqrt(k);
	}
	
	
	
}


