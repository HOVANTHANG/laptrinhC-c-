#include<stdio.h>
#include<math.h>
main(){
	int a[100][100];
	int n,m;
	scanf("%d%d",&n,&m); 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]); 
		} 
	} 
    int k=m*n;
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(a[i/n][i%n]>a[j/n][j%n]){
				int tam =  a[i/n][i%n];
				a[i/n][i%n] =a[j/n][j%n];
				a[j/n][j%n] = tam; 
			} 
		} 
	} 



	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]); 
		} printf("\n"); 
	} 
} 
