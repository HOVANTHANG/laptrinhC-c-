//#include<bits/stdc++.h>
//using namespace std;
//typedef struct matran{
//	int m,n;
//	int *mt;
////	friend matran operator + (const matran x,const matran y); 
//
//	friend istream &operator >>(istream &cin, matran &x) {
//		cout<<"Nhap hang va cot:";
//		cin>>x.m;
//		cin>>x.n;
//		x.mt=new int[x.m*x.n] ;
//		for(int i=0;i<x.m;i++) {
//			for(int j=0;j<x.n;j++){
//				cin>>x.mt[i+x.n*j]; 
//			} 
//		}
//	}
//	friend ostream &operator <<(ostream &cout,matran x) {
//		for(int i=0;i<x.m;i++){
//			for(int j=0;j<x.n;j++){
//				cout<<x.mt[i+x.n*j]<<" ";
//			} cout<<"\n"; 
//		} 
//	}
//	
//	int operator !(){
//	int sum=0;
//	for(int i=0;i<m;i++) {
//		for(int j=0;j<n;j++) {
//			sum+=mt[i+n*j];
//		}
//	}return sum; 
//} 
//     matran operator +( matran x) {
//     	matran tong;
//		 for(int i=0;i<m;i++) {
//		 	for(int j=0;j<n;j++){
//		 		tong.mt[i+n*j] = mt[i+n*j]+x.mt[i+n*j];
//			 }
//		 }
//		 return tong; 
//	 }
//	
//};
///*istream & operator>>(istream &cin, matran &x){
//	cout<<"Nhap hang,cot:";
//	cin>>x.m;
//	cin>>x.n;
//	x.mt=new int[x.m*x.n];
//	for(int i=0;i<x.m;i++){
//		for(int j=0;j<x.n;j++){
//			cin>>x.mt[i+x.n*j];
//		}
//	}
//}*/
///*ostream & operator <<(ostream &cout,matran x){
//	for(int i=0;i<x.m;i++){
//		for(int j=0;j<x.n;j++){
//			cout<<x.mt[i+x.n*j];
//			cout<<" ";
//		}cout<<"\n";
//	}
//}*/
///*int operator !(matran a){
//     int sum=0;
//	 for(int i=0;i<a.m;i++){
//	 	for(int j=0;j<a.n;j++){
//	 		sum+=a.mt[i+a.n*j];
//		 }
//	 }	
//	return sum;
//}
//matran operator +(const matran x,const matran y){
//		matran tong;
//		for(int i=0;i<x.m;i++){
//			for(int j=0;j<x.n;j++){
//				tong.mt[i+x.n*j]=x.mt[i+x.n*j] + y.mt[i+x.n*j]; 
//			} 
//		}
//		return tong; 
//	}
//*/
///*int operator !(){
//	int sum=0;
//	for(int i=0;i<m;i++) {
//		for(int j=0;j<n;j++) {
//			sum+=mt[i][j];
//		}
//	}
//} */
//int main(){
//	matran a,b,c;
//	cin>>a;
//	cin>>b;
//	cout<<a;
//	int tong=!a;
//	cout<<tong<<endl;
//	 c=a+b;
//	cout<<c;
//}
//#include<bits/stdc++.h> 
//using namespace std;
//
//class matran{
//	private: 
//	   int m,n;
//	   int *mt;
//	public:
//	    friend istream &operator>>(istream &cin,matran &x);
//	    friend ostream &operator<<(ostream &cout,matran x);
//	   // friend matran operator + (matran x,matran y);
//	    matran operator +(matran x);
//	    int operator !() ;
//	    
//};
//istream &operator>>(istream &cin,matran &x)
//{
//	cout<<"Nhap hang&cot:" ;
//	cin>>x.m>>x.n;
//	x.mt= new int[x.m*x.n] ;
//	for(int i=0;i<x.m;i++) {
//		for(int j=0;j<x.n;j++) {
//			cin>>x.mt[i+x.n*j];
//		}
//	}
//}
//ostream &operator<<(ostream &cout,matran x)
//{
//	for(int i=0;i<x.m;i++){
//		for(int j=0;j<x.n;j++) {
//			cout<<x.mt[i+x.n*j]<<" ";
//		}cout<<"\n" ;
//	} 
//}
//int matran::operator !() {
//	int sum=0;
//	for(int i=0;i<m;i++) {
//		for(int j=0;j<n;j++) {
//			sum+=mt[i+n*j]; 
//		}
//	}
//	return sum; 
//}
///*matran operator +(matran x,matran y) {
//	matran tong;
//	for(int i=0;i<x.m;i++) {
//		for(int j=0;j<x.n;j++) {
//		tong.mt[i+x.n*j]= x.mt[i+x.n*j]+y.mt[i+x.n*j]; 
//		}
//	}return tong; 
//}*/
//matran matran::operator +(matran x){
//	matran tong;
//	for(int i=0;i<x.m;i++) {
//		for(int j=0;j<x.n;j++) {
//		tong.mt[i+x.n*j]= x.mt[i+x.n*j]+this->mt[i+x.n*j]; 
//		}
//	}return tong; 
//}
//
//
//int main(){
//	matran a,b,c;
//	cin>>a;
//	cout<<a; 
//	cin>>b;
//	int tongA=!a; 
//	cout<<tongA<<endl;
//	c=a+b;
//	cout<<c; 
//	
//	
//	
//} 

