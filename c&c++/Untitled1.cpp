#include<bits/stdc++.h>
using namespace std;
/*float dientich(float n){
	return 3.14*n*n;	
}
float dientich(float a,float b){
	return a*b;
}
float dientich(float a,float b,float c){
	float p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c)); 
}
int main(){
	float n;
	cin>>n;
	float a,b,c;
	cin>>a>>b>>c;
	cout<<dientich(n)<<"\n";
	cout<<dientich(a,b)<<"\n";
	cout<<dientich(a,b,c);	
}
*/
class Toado{
	private:
		double hoanhdo;
		double tungdo;
	public:
		Toado(double x,double y){
			hoanhdo=x;
			tungdo=y;
		}
		getx(){
			return hoanhdo;
		}
		gety(){
			return tungdo;
		}
		double tinh(){
			return hoanhdo+tungdo;
		} 
		double tinhkhoangcach(Toado k){
			float x1=hoanhdo-k.getx();
			float y1=tungdo-k.gety();
			return sqrt(x1*x1+y1*y1);
		}
	
}; 
class dagiac{
	private:
		 int n;
	     Toado *toado;
	public:
	    void nhap(){
	     	do{
			cout<<"\nNhap so dinh:";
			cin>>n;
	     	}while(n<3);
		    toado = new toado[n+1];
	     	for(int i=1;i<=n;i++){
			cin>>toado[i];
	    	}
	     	for(int i=1;i<=n;i++){
		     	cout<<toado[i];
		   }
	}	
};
int main(){
	   Toado A=Toado(10,10);
	   Toado B=Toado(5,5);
       double x=A.tinh();
       double kc=A.tinhkhoangcach(B);
       cout<<kc<<"\n";
       cout<<x;
       dagiac y;
       y.nhap();
}
