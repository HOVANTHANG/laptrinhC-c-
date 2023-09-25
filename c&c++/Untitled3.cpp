#include<bits/stdc++.h>
using namespace std;
bool kt(){
	int a,b;
	cin>>a>>b;
	 long long x = round(pow(a*b,1.0/3));
	 return (x*x*x==a*b && a%x==0 && b%x==0); 
} 


int main(){
	int n;
	cin>>n;
	while(n--){
		cout<<(kt()?"\nYes":"\nNo") ;
	} 
}


