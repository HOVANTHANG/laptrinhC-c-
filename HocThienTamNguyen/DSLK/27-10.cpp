#include<bits/stdc++.h> 
#include<fstream>
#include<string>
using namespace std;
struct Date{
	int ngay;
	int thang;
	int nam;
};
struct SinhVien{
	string maSinhVien;
	string hoVaTen;
	Date ngaysinh;
	float diemTrungBinh;
};
struct node{
	SinhVien data;
	node *next; 
}; 
struct List{
	node *phead;
	node *ptrail; 
}; 

void DocDate(ifstream &filein,Date &d){
	filein>>d.ngay;
  filein.ignore(1); 
		filein>>d.thang;
 filein.ignore(1); 
		filein>> d.nam;
}
void DocSinhVien(ifstream &filein,SinhVien &sv){

	getline(filein,sv.maSinhVien,',');
	 filein.get(); 
	getline(filein,sv.hoVaTen,',');
	  filein.get();
	DocDate(filein,sv.ngaysinh);
       filein.get();
	filein>>sv.diemTrungBinh;
	   filein.ignore(2); 
	   
}

void makeList(List &l) {
	l.phead=NULL;
	l.ptrail=NULL; 
}
node *makeNode(SinhVien x) 
{
	node *newNode = new node() ;
	newNode->data=x;
	newNode->next=NULL; 
}

void pushFront(List &l,SinhVien x) {
	node *newNode = makeNode(x) ;
	if(l.phead==NULL) {
		l.phead=l.ptrail=newNode; 
	}else {
		newNode->next=l.phead;
		l.phead=newNode; 
	} 
}
void pushBack(List &l,SinhVien x) {
	node *newNode = makeNode(x) ;
	if(l.phead==NULL) {
		l.phead=l.ptrail=newNode; 
	}else{
		l.ptrail->next = newNode;
		l.ptrail=newNode; 
	} 
}
void Xuat(SinhVien sv){
	cout<<"\nMa sinh vien:"<<sv.maSinhVien;
	cout<<"\nHo va Ten:"<<sv.hoVaTen;
	cout<<"\nNgay sinh:"<<sv.ngaysinh.ngay<<"/"<<sv.ngaysinh.thang<<"/"<<sv.ngaysinh.nam;
	cout<<"\nDiem Trung Binh:"<<sv.diemTrungBinh;
}

void DocDanhSachSinhVien(ifstream &filein,List &l){
	while(filein.eof()==false){ //Duyet tu dau den cuoi file 
	    SinhVien sv;
		DocSinhVien(filein,sv);
		pushBack(l,sv); 
	} 
} 
void XuatDanhSachSV(List l){
	int dem=1;
	for(node *k=l.phead;k!=NULL;k=k->next){
		cout<<"\nSinh vien Thu "<<dem++; 
		Xuat(k->data); 
	} 
} 
void GhiSinhVien(ofstream &fileout,SinhVien sv){
	fileout<<sv.maSinhVien<<", ";
	fileout<<sv.hoVaTen<<", ";
	fileout<<sv.ngaysinh.ngay<<"/"<<sv.ngaysinh.thang <<"/"<<sv.ngaysinh.nam <<", ";  
	fileout<<sv.diemTrungBinh<<"\n"; 
}
void hoanVi(SinhVien &x,SinhVien &y){
	SinhVien t = x;
	   x=y;
	   y=t; 
} 
void SapXepDSLK(List &l){
	for(node *k=l.phead;k!=NULL;k=k->next){
		for( node *h=k->next;h!=NULL;h=h->next){
			if(k->data.diemTrungBinh>h->data.diemTrungBinh){
				hoanVi(k->data,h->data); 
			} 
		} 
	} 
} 
void LuufilesapxepSV(List l){
	ofstream fileout;
	fileout.open("Sapxep.txt",ios::out);
	SapXepDSLK(l);
	for(node *k=l.phead;k!=NULL;k=k->next){
		GhiSinhVien(fileout,k->data); 
	} 
	fileout.close() ; 
}
double TimDiemTrungBinhMax(List l){
	    double max=0;
		for(node *k=l.phead;k!=NULL;k=k->next) {
			if(k->data.diemTrungBinh > max) {
				max = k->data.diemTrungBinh;
			}
		}
		return max; 
} 
void Indanhsach(List l){
	ofstream fileout;
	fileout.open("DiemTrungbinh.txt",ios::out);
	for(node *k=l.phead;k!=NULL;k=k->next){
		if(TimDiemTrungBinhMax(l)==k->data.diemTrungBinh){
			GhiSinhVien(fileout,k->data); 
		} 
	} 
	
	fileout.close() ;  
	
} 
int main(){
     SinhVien sv;
     ifstream filein;
     List l;
	   makeList(l); 
     filein.open("sinhvien.txt",ios::in);
    DocDanhSachSinhVien(filein,l);
	XuatDanhSachSV(l); 
	LuufilesapxepSV(l); 
	Indanhsach(l); 
     filein.close();
	
} 

