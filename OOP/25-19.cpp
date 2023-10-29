#include<bits/stdc++.h>
using namespace std;
class HinhTron{
	friend class Dshinhtron;
   private:
   	double hoanhdo,tungdo,bankinh;
   	public:
   		HinhTron(double hd=2,double td=4,double r=5){
   			hoanhdo=hd;
   			tungdo=td;
   			bankinh=r;
		   }
		   void nhap(){
		   	cout<<"Nhap hoanh do:";cin>>hoanhdo;
		   	cout<<"Nhap tung do:";cin>>tungdo;
		   	cout<<"Nhap ban kinh:";cin>>bankinh;
		   }
		   friend ostream &operator<<(ostream &cout,HinhTron x){
		   	cout<<x.hoanhdo<<" "<<x.tungdo<<" "<<x.bankinh;
		   	cout<<"\n";
		   }
		   void xuat(){
		   	cout<<hoanhdo<<" "<<tungdo<<" "<<bankinh;
		   }
		   double Tinhdientich(double bankinh){
		  	double s;
		   	s=bankinh*bankinh*3.14;
		   	   return s;
		  }
		  friend double tinhdientich(HinhTron a){
		  		double s;
		   	s=a.bankinh*a.bankinh*3.14;
		   	   return s;
		  }
		   double getBankinh(){
		   	return bankinh;
		   }
		   
};





class Dshinhtron{
	private:
		int n;
		HinhTron *ds,t;
		public:
			void nhapds();
			void inds();
	        void sapxep();
	        void ThongKe();
	        ~Dshinhtron(){
	        	delete[] ds;			}
};

void Dshinhtron::nhapds(){
	cout<<"Nhap so luong hinh tron:";cin>>n;
	ds= new HinhTron[n+5];
	for(int i=1;i<=n;i++){
		ds[i].nhap();
	}
}
void Dshinhtron::inds(){
	for(int i=1;i<=n;i++){
		cout<<ds[i]<<" ";
	}
}

void Dshinhtron::sapxep(){
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
		//	if(ds[i].Tinhdientich(ds[i].getBankinh()) <ds[j].Tinhdientich(ds[j].getBankinh())){
			if(tinhdientich(ds[i]) <tinhdientich(ds[j])){
				t=ds[i];
				ds[i]=ds[j];
				ds[j]=t;
			}
		}
	}
}

void Dshinhtron::ThongKe(){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(ds[i].hoanhdo<0&&ds[i].tungdo>0&&ds[i].bankinh<=abs(ds[i].hoanhdo)&&ds[i].bankinh<=ds[i].tungdo){
			dem++;
		}
	}
	cout<<"Co "<<dem<<" hinh tron thuoc phan tu thu 2!";
}

class Circle:public HinhTron{
	private:
		string mau;
		
	public:
		Circle(double hd=3,double td=4,double bk = 5,string mau):HinhTron(hd,td,bk){
			mau=mau;
		}
		
		void nhapHinhtron(){
			HinhTron::nhap();
			cout<<"Nhap mau:";
			cin>>mau;
		}	
		void Xuat(){
			HinhTron::xuat();
			cout<<" "<<mau;
		}
	
};

class Ungdung{
	private:
		int n;
		Circle *cr;
	public:
		void nhaphinhtron();
		void Xuatdanhsach();
		
	
	
}










void Ungdung::nhaphinhtron(){
			HinhTron::nhap();
			cout<<"\nNhap mau:";getline(cin,mau);
		}
		void TimdoMax(){
			int l;
			int dem=0;
			for(int i=1;i<=n;i++){
				if(ds[i].mau=="1"){
				      l=i;
				      dem++;
					  break;	
				}
			}
			double max= tinhdientich(Circle ds[i]);
			for(int i=l;i<n;i++){
				if(tinhdientich(ds[i]) <tinhdientich(ds[i++])&&ds[i].mau == "1"){
					max=tinhdientich(ds[i++]);
				}
			}
			
			for(int i=1;i<=n;i++)
			{
				if(tinhdientich(ds[i])==max && ds[i].mau=="1"){
					cout<<ds[i].hoanhdo<<" "<<ds[i].tungdo<<" "<<ds[i].bankinh;
				}
			}
			
			
			
			
















int main(){
//	Dshinhtron ds;
//	ds.nhapds();
//	ds.inds();
//	ds.sapxep();
//	ds.inds();
//	ds.ThongKe();

   Circle cr;
   cr.nhaphinh();
   cr.TimdoMax();
 
}


