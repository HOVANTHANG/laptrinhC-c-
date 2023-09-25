#include<bits/stdc++.h>
using namespace std;
//class tenlop{
	//Pam vi: khai bao du lieu thanh phan
	//phamvi: khai bao ham hanh phan
//};
/*trog than lop: kieu tenham(dsdoi);
ben ngoai lop:Kieu tenlop::tenham(dsdoi){};*/
/*class HCN{
	private :
		float cd,cr;
	public:
		void nhap();
		void in();
		float tinhdt(){
			return cd*cr;
		}
};
void HCN::nhap(){
	cout<<"Nhap chieu dai & chieu rong:";
	cin>>cd>>cr;
}
void HCN::in()
{
	cout<<cd<<" "<<cr;
}*/
//class Thisinh{
//	private:
//		string sbd,ht;
//		double toan,li,hoa;
//	public:
//		void nhap();
//		void xuat();
//		double tinhtd(){
//			return toan+li+hoa;
//		}
//		void docdiem(){
//			cout<<toan<<" "<<li<<" "<<hoa;
//		}
//};
//void Thisinh::nhap(){
//	cout<<"Nhap sbd:";cin>>sbd;
//	cin.ignore(1);
//	cout<<"Nhap ho va ten:";getline(cin,ht);
//	cout<<"Nhap diem:";cin>>toan>>li>>hoa;
//	cin.ignore(1);
//}
//void Thisinh::xuat(){
//	cout<<sbd<<" "<<ht<<" "<<fixed<<setprecision(2)<<toan<<" "<<fixed<<setprecision(2)<<li<<" "<<fixed<<setprecision(2)<<hoa<<endl;
//}
///* con tro doi tuong
//khai niem:
//cu phap:
//tenlop *pointer;
//vi du: HCN *h;
//h->cd,(*h).cd,h->nhap();
//*/
//
//int main(){
//	/*HCN x;
//	x.nhap();
//	x.in();
//	cout<<"\n"<<x.tinhdt();*/
//	Thisinh *p;
//	
//	/*p.nhap();
//	p.xuat();
//	cout<<p.tinhtd();
//	p.docdiem();
//	*/
//	p->nhap();
//	p->xuat();
//
//	
//}
////Con tro this
///*class HCN{
//	private:
//		flaot cd,cr;
//		public:
//			void nhap();
//			void in();
//			float tinhdt(){
//				return (*this).cd*this->cr;
//			}
//};
//void HCN::nhap(){
//	cout<<"nhap cd,cr:";
//	cin>>(*this).cd>>(*this).cr;
//};
//coid in(){
//	cout<<this->cd<<" "<<this->cr;
//}*/
class HCN{
	private:
		double cd,cr;
		
		public:
			void nhap();
			void xuat();
			double tinhdt(){
				return cd*cr;
			}
/*	HCN operator + (const HCN x){
		HCN c;
		c.tinhdt()=this->tinhdt() + x.tinhdt();
		return c;
	}*/

};
void HCN::nhap(){
	cout<<"Nhap cd&cr:";cin>>cd>>cr;
}
void HCN::xuat(){
	cout<<cd<<" "<<cr;
}
int main(){
	HCN h1,*h2;
	h2= new HCN;
	h1.nhap();
	(*h2).nhap();
	
}
