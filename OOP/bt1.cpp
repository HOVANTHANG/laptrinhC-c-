#include<bits/stdc++.h>
using namespace std;
class SoNguyen{
	private: 
		int n;
		int *a;

	public: 
	friend istream &operator >>(istream &cin,SoNguyen &x){
	 	cout<<"\nNhap so luong:";cin>>x.n;
		 x.a = new int[x.n+5];
		 for(int i=1;i<=x.n;i++)
		 {
		 	cin>>x.a[i]; 
		  } 
	 } 
	friend  ostream &operator<<(ostream &cout,SoNguyen x){
	 	for(int i=1;i<=x.n;i++){
	 		cout<<x.a[i]<<" "; 
		 } 
	 } 
	 int Tong(){
	 	int sum=0; 
	 	for(int i=1;i<=n;i++){
	 		sum+=a[i]; 
		 }
		 return sum; 
	 } 
	 bool checkSNT(int n){
	 	if(n<2){
	 		return false; 
		 } 
		 for(int i=2;i<=sqrt(n);i++){
		 	if(n%i==0){
		 		return false; 
			 } 
		 } 
		 return true; 
	 } 	 
	friend float SumSNT(SoNguyen x){
		int sumsnt=0;
		int dem=0; 
		for(int i=1;i<=x.n;i++){
			if(x.checkSNT(x.a[i])) {
			dem++;sumsnt+=x.a[i]; 
			}
		} 
		return (float)(sumsnt/dem); 
	} 
	int operator - (SoNguyen x){
		return this->Tong() - x.Tong(); 
	} 
	 
	
};
int main(){
	SoNguyen A;
	cin>>A;
	SoNguyen B; 
	cin>>B;
	if((A-B)>0){
		cout<<fixed<<setprecision(2)<<(float)1/(A-B); 
	}else{
		cout<<"\nNone"; 
	} 
	if(SumSNT(A)>SumSNT(B)){
		cout<<"\nDay A lon hon"; 
	}else if(SumSNT(A)<SumSNT(B)){
		cout<<"\nDay B lon hon!"; 
	}else{
		cout<<"\nBang!" ;
	} 
}

