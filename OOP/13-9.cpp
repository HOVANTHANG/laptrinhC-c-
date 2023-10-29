#include<bits/stdc++.h>
using namespace std;
class dathuc{
	private:
		int n;
		double *hs;
		public:
			friend istream&operator>>(istream &cin,dathuc &x){
			    cout<<"Nhap n:";cin>>x.n;
				x.hs=new double[x.n+2];
				for(int i=0;i<=x.n;i++){
					cin>>x.hs[i];
				}	
			}
			friend ostream&operator<<(ostream &cout,dathuc x){		
					for(int i=1;i<=x.n;i++){
						cout<<x.hs[i]<<" ";
					}
			}
			dathuc operator+(dathuc);
			
		      void tinhtong(dathuc k,dathuc l){
		    	dathuc tong;
                 tong.hs=new double[k.n+5];
		    	if(l.n<=k.n){
		    		for(int i=0;i<=l.n;i++){
		    			tong.hs[i]=l.hs[i]+k.hs[i];
					}
					for(int i=l.n+1;i<=k.n;i++){
						tong.hs[i]=k.hs[i];
					}
					for(int i=0;i<=k.n;i++){
					cout<<tong.hs[i]<<" ";
				}
				}
				if(l.n>=k.n){
		    		for(int i=0;i<=k.n;i++){
		    			tong.hs[i]=l.hs[i]+k.hs[i];
					}
					for(int i=k.n+1;i<=l.n;i++){
						tong.hs[i]=l.hs[i];
					}
					for(int i=0;i<=l.n;i++){
					cout<<tong.hs[i]<<" ";
				}
				}
				
			}
			double tinhgiatri(double f){
				double sum=0;
				for(int i=0;i<=n;i++){
					sum+=hs[i]*pow(f,i);
				}
				return sum;
			}
			double daoham(double s){
				double sum=hs[1];
				for(int i=2;i<=n;i++){
					sum+=i*hs[i]*pow(s,i-1);
				}
				return sum;
			}
			
			
};
dathuc dathuc::operator+(dathuc x){
	dathuc r;
	int r.n=(x.n<n)?n:x.n;
	int min=(x.n>n)?n:x.n;
	r.hs=new double[x.n+n];
	for(int i=0;i<=min;i++){
		r.hs[i]=hs[i]+x.hs[i];
	}
	for(int i=min+1;i<=r.n;i++){
		if(x.n==min) r.hs[i]=hs[i];
		else r.hs[i]=x.hs[i];
	}
	return r;
}





int main(){
	dathuc x,y,c;
	cin>>x;
	cin>>y;
	cout<<x.tinhgiatri(10.00)<<endl;
	cout<<x.daoham(5.00)<<endl;
	c.tinhtong(x,y);
	c=x+y;
	cout<<c;
}


