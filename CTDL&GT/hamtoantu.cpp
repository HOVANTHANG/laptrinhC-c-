#include<bits/stdc++.h>
using namespace std;
void center(string s,int w){
	cout<<setw(w)<<string((w-s.size())/2,' ')+s;
}

struct sinhvien{
	string ten;
	int tuoi;
	double diem;
};
istream &operator>>(istream &cin,sinhvien &x){
	getline(cin,x.ten);
	cin>>x.tuoi>>x.diem;
	return cin;

}
int main(){
	sinhvien sv;
//	cin>>sv;
	ifstream fin("sv.txt");// mo file c++11;
	istringstream abc("hovanthang\n14\n10");
	//fin>>sv;
	abc>>sv;
	cout<<setw(30)<<right<<sv.ten<<" "<<sv.diem<<" "<<sv.tuoi;
	fin.close();
	cout<<"\n";
	center("lopminh",70);
}


