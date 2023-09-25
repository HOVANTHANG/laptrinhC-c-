#include<bits/stdc++.h>
using namespace std;
class person{
	private:
		string name,address;
	public:
//		void nhap(){
//			getline(cin,name);
//			getline(cin,address);
//		}
        person(string name,string address){
        	this->name=name;
        	this->address=address;
		}
		string getName(){
			return this->name;
		}
		string getAddress(){
			return this->address;
		}
		void setName(string name){
			this->name=name;
		}
		void setAddress(string Add){
			this->address=Add;
		}
		void in(){
			cout<<name<<" "<<address;
		}
};
class sinhvien : public person{
	private:
		double gpa;
	public:
//		void nhap(){
//			person::nhap();
//			cin>>gpa;
//		}
		sinhvien(string name,string address,double gpa) : person(name,address){
			this->gpa=gpa;
		}
		double getGpa(){
			return this->gpa;
		}
		void setGpa(double Gpa){
			this->gpa=Gpa;
		}
		void in(){
			person::in();
			cout<<fixed<<setprecision(2)<<gpa;
		}
};



int main(){
	sinhvien x("ho van thang","nghe an",4.00);
//	x.person::nhap();
//	x.nhap();
	x.in();
}


