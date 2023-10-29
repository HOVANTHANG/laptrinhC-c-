/*#include<bits/stdc++.h>
using namespace std;
class HocSinh{
   friend class DsHocSinh; 
	private:
	   string maHocSinh;
	   string hovaten;
	   int UT;
	   int drl;
	   public :
	   HocSinh(string mhs="",string hvt="",int ut=1,int drl=20) 
	   {
	      	maHocSinh=mhs;
		   hovaten=hvt;
		   UT=ut;
		   drl=drl; 
	   }
	   friend istream&operator>>(istream &cin,HocSinh &x) {
	   	cin.ignore(1); 
	   	cout<<"Nhap ma hoc sinh:";getline(cin,x.maHocSinh);
		   cout<<"Nhap ho va ten:";getline(cin,x.hovaten);
		   cout<<"Nhap Uu Tien(1,2,3,4,):";cin>>x.UT;
		   cout<<"Nhap diem ren luyen:";cin>>x.drl ;
	   }
	   friend int Tongdiemrenluyen(HocSinh x) {
		   return  x.drl+x.UT; 
	   }
	   void xuat(){
	   	cout<<maHocSinh<<" "<<hovaten<<" "<<UT<<" "<<drl; 
	   } 
	   int getUT(){
	   return UT; 
	   } 
	   int getdrl() {
	   	return drl; 
	   }
	   
}; 
class DsHocSinh{
	private:
	 int n;
	 HocSinh *ds,t;
	 public:
	    void nhapds(){
	    	cout<<"Nhap so luong hoc sinh:";cin>>n;
			 ds= new HocSinh[n+5];
			 for(int i=1;i<=n;i++) {
			 	cin>>ds[i]; 
			 }
		} 
	    void xuatdsgiam() {
	    	for(int i=1;i<n;i++){
	    		for(int j=i+1;j<=n;j++) {
	    			if(Tongdiemrenluyen(ds[i]) <Tongdiemrenluyen(ds[j])) 
			        {
			        	t=ds[i];
						ds[i]=ds[j] ;
						ds[j]=t; 
					}
				}
			} 
			for(int i=1;i<=n;i++){
				ds[i].xuat();
			} 
		}
		void ThongKe(){
			int dem=0,dem1=0,dem2=0,dem3=0;
			for(int i=1;i<=n;i++) {
				if(ds[i].UT==1 ) dem++;
				else if(ds[i].getUT()==2) dem1++;
				else if(ds[i].getUT()==3) dem2++;
				else dem3++; 
			}
			cout<<"\nco "<<dem<<" Hoc sinh co UU Tien 1";
			cout<<"\nco "<<dem1<<" Hoc sinh co UU Tien 2";
			cout<<"\nco "<<dem2<<" Hoc sinh co UU Tien 3";
			cout<<"\nco "<<dem3<<" Hoc sinh co UU Tien 4";
		} 
        
		void TimKiem(string name){
			int dem=0; 
			for(int i=1;i<=n;i++){
				if(ds[i].hovaten.compare(name)==0){
					cout<<"\nTon tai hoc sinh nay!";		
					dem++; 
					ds[i].xuat(); 
				} 
			} 
			if(dem==0) {
				cout<<"\nKhong ton tai hoc sinh nay!" ;	
				}
		}	
}; 
int main(){
	DsHocSinh ds;
	ds.nhapds();
	ds.xuatdsgiam();
	ds.ThongKe();
	string s;
	cout<<"\nNhap ten:";cin.ignore(1); 
	getline(cin,s); 
	ds.TimKiem(s); 
}
*/
#include<bits/stdc++.h>
using namespace std;
class DiemThi{
	private:
	   string maMon;
	   string tenMon;
	   int soTinChi;
	   float diemThi1; 
	   float diemQuaTrinh;
	   public:
	   diemThi(string mm="",string tm="",int stc=1,float dt = 3,float dqt=4){
	    	maMon = mm;
		   tenMon=tm;
		   soTinChi=stc;
		   diemThi1 = dt;
		   diemQuaTrinh = dqt; 
	   } 
	   
	   friend istream&operator>>(istream &cin,DiemThi &x){
	   	cin.ignore(1); 
	   	cout<<"Nhap ma mon:";getline(cin,x.maMon);
		   cout<<"Nhap ten mon:";getline(cin,x.tenMon );
		   cout<<"Nhap so tin chi:";cin>>x.soTinChi;
		   cout<<"Nhap diem thi:";cin>>x.diemThi1; 
		   cout<<"Nhap diem qua trinh:";cin>>x.diemQuaTrinh; 
	   } 
	    friend float TinhDiem(DiemThi x){
	    	return 0.4*x.diemQuaTrinh + 0.6*x.diemThi1; 
	}
	  void xuat(){
	  	cout<<maMon<<" "<<tenMon<<" "<<soTinChi<<" "<<diemThi1<<" "<<diemQuaTrinh; 
	  	cout<<"\n" ;
	  } 
	  int getTinChi(){
	  	return soTinChi; 
	  } 
}; 
class DsDiemThi{
	private:
	 int n;
	 DiemThi *ds,t;
	 public :
	  void nhapds(){
	  	cout<<"Nhap so luong diem thi:";cin>>n;
		  ds = new DiemThi[n+5];
		  for(int i=1;i<=n;i++){
		  	cin>>ds[i]; 
		  } 
	  } 
	  void intheodiem(){
	  	for(int i=1;i<n;i++) {
	  		for(int j=i+1;j<=n;j++){
	  			if(TinhDiem(ds[i])<TinhDiem(ds[j])){
	  				t=ds[i];
					  ds[i]=ds[j];
					  ds[j]=t; 
				  } 
			  } 
		  }
	  	for(int i=1;i<=n;i++) {
	  		ds[i].xuat();
		  }
	  } 
	  int check(){
	  	int dem=0; 
	  	for(int i=1;i<=n;i++){
	  		if(TinhDiem(ds[i])<4){
	  			dem++; 
			  } 
		  }
		  return dem; 
	  } 
	  float DiemTongKet(){
	  	float sum=0;
	  	int tongtc=0; 
		  for(int i=1;i<=n;i++){
		  	sum+=TinhDiem(ds[i])*ds[i].getTinChi();
			  tongtc+= ds[i].getTinChi();
		  } 
	     return (float)(sum/tongtc);
	  } 
	
}; 
main() {
	DsDiemThi ds;
	ds.nhapds();
	ds.intheodiem();
	cout<<"\nSo mon co diem trung binh<4:"<<ds.check(); 
	cout<<"\nDiem Tong Ket:"<<fixed<<setprecision(2)<<ds.DiemTongKet(); 
}

