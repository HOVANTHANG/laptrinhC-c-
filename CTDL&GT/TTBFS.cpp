#include<bits/stdc++.h>
#include<queue>
using namespace std;
//Tim kiem theo chieu rong BFS
//Bt thang may
//toa nha n tang thang may o s muon den f
//TT sudung ctdl Queue chua cac so nguyen
//B1 khoi tao q=rong
//B2 nhap n,s,f,k,m
//B3 Khoi mang d[n+5]={}
//B4 q.push(u),d[u]=1;
//Lay U ra khoi q 
//neu u+k<=n va d[u+k]==0 thi d[u+k]=d[u]+1; q.push(u+k)
//neu u-m>=1 va d[u-m]==0 thi d[u-m]=d[u]+1; q.push(u-m)
//Lap lai b5 toi khi d[f]!=0 hoac Q=rong
//Xuat d[f]-1
int main(){
	int n,s,f,k,m;
	int d[n+5]={};
	queue<int> q;
	cin>>n>>s>>f>>k>>m;
	q.push(s);
	d[s]=1;
	while(q.size()>0||d[f]==0){
	   int	u=q.front();
		q.pop();
		if(u+k<=n&& d[u+k]==0){
			d[u+k]=d[u]+1;
			q.push(u+k);
		}
		if(u-m>=1&& d[u-m]==0){
			d[u-m]=d[u]+1;
			q.push(u-m);
		}
	}
	cout<<d[f]-1;
	
	
}


