#include<bits/stdc++.h>
using namespace std;
class Toado{
	friend class Hinhtron;
	private:
		float x,y;
	public:
		Toado(float x,float y)
		{
			this->x=x;
			this->y=y;
		}
		Toado(){
			x=0;
			y=0;
		}
};
class Hinhtron{
	private:
		float bk;
		Toado tam1,tam2;
	public:
		Hinhtron(float x, float y, float z):tam1(x,y)
		{
			bk=z;
		}
		Hinhtron():tam2(){
			bk=0;
		}
		void nhap();
		void in();
		void in1();
};
void Hinhtron::nhap(){
	cout<<"Nhap ban kinh va Toa do:\n";
	cin>>this->bk;
	cin>>tam2.x>>tam2.y;
}
void Hinhtron::in()
		{
			cout<<"("<<bk<<","<<tam1.x<<","<<tam1.y<<")"<<endl;
		}
void Hinhtron::in1(){
			cout<<"("<<bk<<","<<tam2.x<<","<<tam2.y<<")"<<endl;
		}
int main()
{
	Hinhtron t(13,2,2);
	Hinhtron t1;
	t.in();
	t1.nhap();
	t1.in1();
}



