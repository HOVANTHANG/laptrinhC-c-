/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

/*int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1}; 
main(){
	int m,n;cin>>m>>n;
	int a[500][500];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j]; 
		} 
	} 
	int res[500][500];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int sum=a[i][j];
			for(int k=0;k<8;k++){
				int imoi = i+ dx[k];
				int jmoi = j+ dy[k]; 
				if(imoi>=0 && imoi<n && jmoi>=0 && jmoi<m){
					sum+=a[imoi][jmoi]; 
				} 
			} res[i][j]=sum; 
		} 
	} 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<res[i][j]<<" "; 
		} cout<<endl; 
	}	
} 
main(){
		int m,n;cin>>m>>n;
	int a[500][500];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j]; 
		} 
	} 
/*	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0||i==m-1|| j==0|| j==n-1){
				cout<<a[i][j]<<"  ";
			} else 
			cout<<"   "; 
		} cout<<endl; 
	} 
	for(int i=0;i<m;i++){
		if(i%2==0){
			for(int j=0;j<n;j++){
				cout<<a[i][j]<<"-->"; 
			} cout<<endl; 
		} else {
			for(int j=n-1;j>=0;j--){
				cout<<a[i][j]<<"<--"; 
			} cout<<endl; 
		}	 
	} 
	int h1=0,h2=m-1,c1=0,c2=n-1;
	while(h1<=h2&&c1<=h2){
		for(int i=c1;i<=c2;i++){
			cout<<a[h1][i]<<" "; 
		} 
		++h1;
		for(int i=h1;i<=h2;i++){
			cout<<a[i][c2]<<" "; 
		}
		--c2;
		if(h1<=h2){
			for(int i=c2;i>=c1;i--){
				cout<<a[h2][i]<<" "; 
			}
			--h2; 
		} 
		if(c1<=c2){
			for(int i=h2;i>=h1;i++){
				cout<<a[i][c1]<<" "; 
			} 
		}
		cout<<endl; 
	} 
    int k=m*n;
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(a[i/n][i%n]>a[j/n][j%n]){
				int tmp = a[i/n][i%n];
				a[i/n][i%n]=a[j/n][j%n];
				a[j/n][j%n]=tmp; 
			} 
			
		} 
	} 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" "; 
		} cout<<endl; 
	} 
	for(int i=1;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==0){
				a[i][j]+=max(a[i-1][j],a[i-1][j+1]); 
			} else if(j==n-1){
				a[i][j]+=max(a[i-1][j-1],a[i-1][j]); 
			} else 
			   a[i][j]+=max(a[i-1][j-1],max(a[i-1][j],a[i-1][j+1])); 
		} 
	} 
	int res=INT_MIN;
	for(int i=0;i<n;i++){
		res=max(res,a[m-1][i]); 
	} 
	cout<<res<<endl; 
	int d[m][n]; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0&&j==0){
	             d[i][j]=a[i][j]; 
			} else if(i==0){
				d[i][j]=d[i][j-1]+a[i][j]; 
			} else if(j==0){
				d[i][j]=d[i-1][j]+a[i][j]; 
			} else 
			  d[i][j]=min(d[i][j-1],d[i-1][j])+a[i][j]; 
		} 
	} 
	cout<<d[m-1][n-1]<<endl; 
	
	int b[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[i][j]; 
		} 
	} 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]){
				for(int k=0;k<m;k++){
					b[i][k]=1; 
				} 
				for(int l=0;l<n;l++){
					b[l][j]=1; 
				} 
			} 
			
		} 
	} 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<b[i][j]<<" "; 
		} cout<<endl; 
	} 
	int sum=0; 
	for(int i=0;i<m;i++){
		int cnt=0;
		int cnt1=0; 
		for(int j=0;j<n;j++){
		if(a[i][j]){
	     	cnt++; 
		} else  {cnt1++; 
		}
		}if(cnt>cnt1){
			sum++; 
		}  
	} 
	cout<<sum<<endl; 
	
} */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main(){
		int n,k;
	
	int a[1001]; 
	cin>>n>>k;
	n*=n;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	 sort(a,a+n);
	cout<<a[k-1]<<endl; 
} 
