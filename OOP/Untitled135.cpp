#include<bits/stdc++.h>
using namespace std;
typedef struct Thisinh{
	string sbd,ht;
	double diem; 
}; 
istream & operator>>(istream &cin,Thisinh &x){
	cout<<"Nhap so bao danh:";getline(cin,x.sbd);
	cout<<"Nhap ho va ten:";getline(cin,x.ht);
	cout<<"Nhap diem:";
	cin>>x.diem; 
	cin.ignore(1); 
} 
ostream & operator<<(ostream &cout,const Thisinh &x){
	cout<<x.sbd<<endl;
	cout<<x.ht<<endl;
	cout<<x.diem<<endl; 
} 
typedef struct DSTS{
	int n;
	Thisinh *ds; 
}; 
istream & operator>>(istream &cin,DSTS &k){
	cout<<"Nhap so luong thi sinh:";
	cin>>k.n;
	cin.ignore(1); 
	k.ds = new Thisinh[k.n+5];  
	do{
		for(int i=1;i<=k.n;i++){
			cin>>k.ds[i]; 
		} 
	}while(k.n<=0); 
} 
ostream & operator<<(ostream &cout, DSTS &k){
          for(int i=1;i<=k.n;i++){
          	cout<<k.ds[i]<<endl; 
		  } 
}
int main(){
	/*Thisinh P;
	cin>>P;
	cout<<P; */
	DSTS p;
	cin>>p;
	cout<<p; 
}


