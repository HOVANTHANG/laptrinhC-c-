#include<bits/stdc++.h>
using namespace std;
bool search(int *a,int n,int x)
{
	for(int i=1;i<=n;i++) if(a[i]==x) return true;
	return false;
}
//Tim kem nhi phan
bool binarySearch(){
	int L=1;R=n;
	while(L<R){
		int M=(L+R)/2;
		if(a[M]==x) return M;
		a[M]>x?R=M-1:L=M+1;
	}
}
//Danh gia do phuc tap T(n)=T(n/2)+c=T(n/4)+2C=T(n/8)+3c=....=T(n/2^k)+kc
//=T(1)+clog(n)=O(logn)
int bsearch(int *a,int L,int R,int x){
	if(L>R) return -1;
	int M=(L+R)/2;
	if(a[M]==x) return M;
	if(x<a[M]) return bsearch(a,L,M-1,x);
	return bsearch(a,M+1,R,x);
}
//Danh gia do phuc tap T(n)=T(n/2)+c=T(n/4)+2C=T(n/8)+3c=....=T(n/2^k)+kc
//=T(1)+clog(n)=O(logn)
int main(){
	int n;cin>>n;
	int *a;
	a= new int[n+5];
	for(int i=1;i<n;i++){
		cin>>a[i];
	}
	
	
	
}


