#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
/*main(){
	int n,q;cin>>n>>q;
      int a[n+1];
	  for(int i=1;i<=n;i++){
	  	cin>>a[i]; 
	  } 
	  int mang[n+1];
	  for(int i=1;i<=n;i++){
	  	mang[i]=mang[i-1] + a[i]; 
	  } 
	  while(q--){
	  	int l,r;
		  cin>>l>>r ;
	    	cout<<mang[r]-mang[l-1]; 
	  } 
} 
main(){
	int m,n; cin>>m>>n ;
	int q;cin>>q;
	int a[m+1][n+1]; 
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j]; 
		} 
	} 
	int mang[m+1][n+1]={0};
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			mang[i][j]= mang[i-1][j] + mang[i][j-1] - mang[i-1][j-1] + a[i][j]; 		
		} 
	} 	
	while(q--){
		int h1,h2,c1,c2; 
		cin>>h1>>h2>>c1>>c2;
		cout<<mang[h2][c2]-mang[h1-1][c2]-mang[h2][c1-1]+mang[h1-1][c1-1]; 
	} 
} 
int  snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0; 
		}  
	} return n>1; 
} 
main(){
	int m,n ;cin>>m>>n;
	int a[500][500]; 
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j]; 
		} 
	} 
	map<int,int> mp;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(snt(a[i][j]) && mp[a[i][j]]==0){
				cout<<a[i][j]<<" ";
				mp[a[i][j]]=1; 
			} 
		} 
	}
	cout<<endl; 
	
}
 main(){
 	int m,n;cin>>m>>n;
	int a[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j]; 
		} 
	} 
	int max=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>max){
				max=a[i][j]; 
			} 
		} 
	} 
	cout<<max<<endl; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==max){
				cout<<"vi tri xuat hien:A["<<i+1<<"]["<<j+1<<"]\n"; 
			} 
		} }	
 } 
main(){
	int m,n;cin>>m>>n;
	int a[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j]; 
		} 
	} 
	long long max1 =-1e18;
	for(int i=0;i<m;i++){
		long long sum=0; 
		for(int j=0;j<n;j++){
			sum+=a[i][j]; 
		} max1 =max(max1,sum); 
	} 
	cout<<max1<<endl; 
	for(int i=0;i<m;i++){
		long long sum1=0; 
		for(int j=0;j<n;j++){
			sum1+=a[i][j]; 
		} 
		if(sum1==max1){
			cout<<i+1<<endl; 
		} 
	} 
	 
} 
void fibo(){
	long long f[93];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=92;i++){
		f[i]= f[i-1]+f[i-2]; 
	} 
	for(int i=2;i<=92;i++){
		cout<<f[i]; 
	}
} 
int checkfibo(int n){
	int a=0,b=1,c ;
	while(b<n){
		c=a+b;
		a=b;
		b= c; 
	} 
	if(b==n){
		return 1; 
	} else return 0; 
	
	
} 
main(){
	
	int m,n;cin>>m>>n;
	int a[m+1][n+1];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j]; 
		} 
	}
	int max1=INT_MIN; 
	int cot; 
	for(int i=0;i<n;i++){
		int cnt=0; 
		for(int j=0;j<m;j++){
			if(checkfibo(a[j][i])) {
				cnt++; 
			}
		} max1= max(max1,cnt); 
	} 
	for(int i=0;i<n;i++){
		int cnt1=0;
		for(int j=0;j<m;j++){
			if(checkfibo(a[j][i])){
				cnt1++; 
			} 
		} if(cnt1==max1){
			 cot=i; 
			cout<<"Cot:"<<i+1<<"\n";
			}
		} 
	for(int i=0;i<m;i++){
		if(checkfibo(a[i][cot])) {
			cout<<a[i][cot]<<"\n"; 
		}
	} 
} 
*/
main(){
		int m,n;cin>>m>>n;
	int a[m+1][n+1];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j]; 
		} 
	}
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		   if(i>j){
		   	sum+=a[i][j]; 
		   } 
		} 
	}
	cout<<sum; 
	
} 












