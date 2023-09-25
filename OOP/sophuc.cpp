#include<bits/stdc++.h>
using namespace std;
//xay dung ham:nhap,xuat 1 so phuwc (phan thuc phan ao),cong,tru,nhan,chia 
//2 so phuc ung dung cac ham tren de thuc hien nhap vao 3 so
//phuc c1,c2,c3 In cac so phuc vua nhap va tim:(c1+c2)/(c1-c2)*c3
/*void nhap1sp(const float &ao,const float &thuc,float &pa,float &pt){
	pa=ao;
	pt=thuc;
}*/
/*SP nhap1sp(const float &ao,const float &thuc){
	SP c;
	c.ao=ao;
	c.thuc=thuc;
	return c;
}*/
typedef struct sophuc{
	float thuc;
	float ao;
}SP;
SP nhap1spstruct(){
	SP c;
	cin>>c.thuc>>c.ao;
	return c;
}
void xuat(const SP &c){
	cout<<c.thuc<<"+"<<c.ao<<"i"<<endl;
}
SP cong(const SP &c1,const SP &c2){
	SP c;
	c.ao=c1.ao+c2.ao;
	c.thuc=c1.thuc+c2.thuc;
	return c;
}
SP tru(const SP &c1,const SP &c2){
	SP c;
	c.ao=c1.ao-c2.ao;
	c.thuc=c1.thuc-c2.thuc;
	return c;
} 
SP nhan(const SP &c1,const SP &c2){
	SP c;
	c.thuc=c1.thuc*c2.thuc-c1.ao*c2.ao;
	c.ao=c1.ao*c2.thuc+c1.thuc*c2.ao; 
	return c;
} 
SP chia(const SP &c1,const SP &c2){
	SP c;
	c.thuc=(c1.thuc*c2.thuc+c1.ao*c2.ao)/(c2.thuc*c2.thuc+c2.ao*c2.ao);
	c.ao=(c1.ao*c2.thuc-c1.thuc*c2.ao)/(c2.thuc*c2.thuc+c2.ao*c2.ao); 
	return c;
} 
 
int main(){
	SP sp1,sp2,sp3,sptong,sphieu,sptich,spthuong,sp;
	cout<<"Nhap so phuc thu 1:";
	sp1=nhap1spstruct();
	cout<<"Nhap so phuc thu 2:";
	sp2=nhap1spstruct();
	cout<<"Nhap so phuc thu 3:";
	sp3=nhap1spstruct(); 
	sptong=cong(sp1,sp2);
	sphieu=tru(sp1,sp2);
	sptich=nhan(sp1,sp2);
	spthuong=chia(sp1,sp2); 
	cout<<"\nTong hai so phuc thu 1 va 2 la:"; 
	xuat(sptong); 
	cout<<"\nHieu hai so phuc thu 1 va 2 la:"; 
	xuat(sphieu);
	cout<<"\nTich hai so phuc thu 1 va 2 la:"; 
	xuat(sptich); 
	cout<<"\nThuong hai so phuc thu 1 va 2 la:"; 
	xuat(spthuong);
	//(c1+c2)/(c1-c2)*c3
	sp=nhan(chia(sptong,sphieu),sp3); 
	cout<<"\nKet qua cua (c1+c2)/(c1-c2)*c3 la:"; 
    xuat(sp); 
}


