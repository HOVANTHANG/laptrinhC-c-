#include<stdio.h>
#include<math.h>
void nhapmatran(int x[100][100],int &m,int &n){
	printf("m,n=") ;
	scanf("%d%d",&m,&n); 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&x[i][j]); 
		} 
	} 
}
void inmatran(int x[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",x[i][j]); 
		} printf("\n"); 
	} 
} 
int tinhtong(int x[100][100],int m,int n){
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum+=x[i][j]; 
		} 
	} return sum; 
}
main(){
	int a[100][100],m,n;
	nhapmatran(a,m,n);
	inmatran(a,m,n);
	 printf("\nTong cac phan tu :%d",tinhtong(a,m,n)); 
} 
