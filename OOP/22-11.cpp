#include<bits/stdc++.h>
using namespace std;
class Dathuc{
	private:
	int n;
	int *a;
	public:
		Dathuc(){
			n=1;
			a=NULL; 
		} 
		Dathuc(Dathuc &x){
			n=x.n;
			a = new int[x.n+5];
			for(int i=0;i<=n;i++){
				a[i]= x.a[i]; 
			} 
		} 
		Dathuc operator=(Dathuc &x){
			n=x.n;
			a = new int[x.n+5];
			for(int i=0;i<=n;i++){
				a[i]= x.a[i]; 
			} 
		} 
		friend istream &operator>>(istream&cin,Dathuc &x){
			cout<<"Nhap n:";cin>>x.n;
			x.a = new int[x.n+5]; 
			for(int i=0;i<=x.n;i++){
				cin>>x.a[i]; 
			} 
		} 
		friend ostream &operator<<(ostream &cout,Dathuc x){
			for(int i=0;i<=x.n;i++){
				cout<<x.a[i]<<" "; 
			} 
		} 
		Dathuc operator -(Dathuc x){
			Dathuc kq;
			 kq.n = (x.n>this->n)?x.n:this->n;
			 int min=(x.n<this->n)?x.n:n;
				kq.a = new int[kq.n+5]; 
			 	for(int i=0;i<=min;i++){
			 		kq.a[i]=x.a[i]-a[i]; 
				 } 
				 for(int i=min+1;i<=kq.n;i++){
				 	if(x.n==min) kq.a[i]=a[i];
					 else kq.a[i] = 0-x.a[i]; 
				 } 
				 return kq; 
			 } 
			  
			 
			
		 
	
}; 
int main(){
	Dathuc x,l,z;
	Dathuc y; 
	cin>>x;
	cout<<x; 
     cin>>y; 
	cout<<y; 
//	 z=x-y;
//	cout<<z; 
	Dathuc k=x;
	cout<<"\n"<<k; 
	l=x;
	 cout<<"\n"<<l; 
	
	
	
} 
