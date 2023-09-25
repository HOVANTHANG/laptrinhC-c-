#include<stdio.h>
#include<math.h>
void docmt(FILE *f,float *a,int *m,int *n){
	fscanf(f,"%d%d",m,n);
	for(int i=0;i<*m;i++){
		for(int j=0;j<*n;j++){
			fscanf(f,"f",a+*n*i+j); 
		} 
	} 
	for(int i=0;i<*m;i++){
		for(int j=0;j<*n;j++){
			printf("%.2f",a+*n*i+j); 
		} printf("\n"); 
	} 
	
} 
main(){
	FILE *f;
	f=fopen("dayso6.txt","rt");
	int m,n,i;
	float a[100][100]; 
	/*fscanf(f,"%d",&m);
	fscanf(f,"%d",&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			fscanf(f,"%f",&a[i][j]); 
		} 
	} 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%.2f\t",a[i][j]); 
		} printf("\n"); 
	} */
	docmt(f,(float*)a,&m,&n); 
} 
