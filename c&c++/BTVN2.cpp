/*#include<stdio.h>
#include<math.h>
void nhapdayso(int x[100],int &n){
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&x[i]); 
	} 
}
void nhapdayso1(int y[100],int &m){
	printf("m=");
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		printf("b[%d]=",i);
		scanf("%d",&y[i]); 
	} 
}
int timmax(int x[100],int n){
	int max=x[1];
	for(int i=1;i<=n;i++){
		if(x[i]>max){
			max=x[i]; 
		} 
	} return max; 
} 
int timmax1(int y[100],int m){
	int max1=y[1];
	for(int i=1;i<=m;i++){
		if(y[i]>max1){
			max1=y[i]; 
		} 
	} return max1; 
} 
main(){
	int a[100],b[100];
	int n,m;
	int dem=0,sum=0; 
	nhapdayso(a,n);
	nhapdayso1(b,m) ;
	printf("\nMax mang 1:%d",timmax(a,n));
	printf("\nMax mang 2:%d",timmax1(b,m)); 
	int max2=timmax1(b,m); 
	for(int i=1;i<=n;i++){
		if(a[i]<max2){
			sum+=a[i];
			dem++; 
		}
	}
	printf("\nKet qua la:%.2f",(float)sum/dem); 	
} 
#include<stdio.h>
#include<math.h>
 void nhapdayso(int x[100],int &n){
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&x[i]); 
	} 
}
void in(int x[100],int n){
	printf("Mang A la:\n") ;
	for(int i=1;i<=n;i++){
		printf("%d\t",x[i]); 
	} 
} 
void daomang(int x[100],int n){
	int c[100];
	int k=0; 
	for(int i=n;i>=1;i--){
		 c[k]=x[i];
		 k++; 
	} 
	printf("\nMang c la:\n") ;
	for(int i=0;i<k;i++){
		printf("%d\t",c[i]); 
	} 
} 
main(){
	int a[100],n;
	nhapdayso(a,n);
	in(a,n);
	daomang(a,n); 
} 
*/
#include<stdio.h>
#include<math.h>
void nhapdayso(int x[100],int &n){
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&x[i]); 
	} 
}
void nhapdayso1(int y[100],int &m){
	int k[100],n; 
	int dem=0; 
	nhapdayso(k,n); 
	printf("m=");
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		printf("b[%d]=",i);
		scanf("%d",&y[i]); 
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(k[i]>y[j]){
				dem++; 
			} 
		} 
	} 
	if(dem==0){
		printf("\nMoi phantu cua A nho hon B!"); 
	} else
	printf("\nMoi phantu A khong nho hon B"); 
}
main(){
	int a[100],b[100],n,m;
	nhapdayso1(b,m); 
} 









