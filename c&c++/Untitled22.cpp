/*#include<stdio.h>
int thaphanoi(int n,int i,int j,int k){
	int c[3]={'A','B','C'};
	if(n==1){
		printf("Chuyen dia thu %d tu %c sang %c\n",n,c[i],c[j]); 
	} else{
		thaphanoi(n-1,i,k,j);
		 	printf("Chuyen dia thu %d tu %c sang %c\n",n,c[i],c[j]); 
		 	thaphanoi(n-1,k,j,i); 
	} 
}
main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n); 
	thaphanoi(n,0,2,1); 
} */
#include<stdio.h>
#include<math.h>
int timmax(int a[100],int n){

	if(n==1){
		return a[0]; 
	} 
		int max = timmax(a,n-1); 
	if(max>a[n-1]){
		return max;
		} 
		return a[n-1]; 
	
} 
main(){
	int a[100],n;
	printf("n=");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]); 
	} 
	int max=timmax(a,n); 
  printf("\n%d",max );	
} 
