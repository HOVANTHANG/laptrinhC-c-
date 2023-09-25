#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*void docmt(FILE *f,int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			fscanf(f,"%d",&a[i][j]); 
		} 
	} 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]); 
		} printf("\n"); 
	} 
} 
float tinh(FILE *f,int a[100][100],int m,int n){
	int sum=0;
	 int dem=0;
	 for(int i=0;i<m;i++){
	 	for(int j=0;j<n;j++){
	 		if(a[i][j]%2==0&&a[i][j]%3==1){
	 			sum+=a[i][j];
				 dem++; 
			 } 
		 } 
	 } 
	 if(dem!=0){
	return sum/dem;
	}else{
		return 0; 
	}  
	
	
} 
void tongtunghang(FILE *f,int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=a[i][j]; 
		} printf("%d\n",sum); 
	} 	
} 
void luuvaotep(FILE *f,int a[100][100],int m,int n){
	FILE *f1;
	 f1=fopen("output.txt","wt");
	 for(int i=0;i<m;i++){
	 	for(int j=0;j<n;j++){
	 		fprintf(f1,"%d\t",a[i][j]); 
		 } fprintf(f1,"\n"); 
	 } 
} 

main(){
	FILE *f;
	int m,n;
	int a[100][100]; 
	f=fopen("input.txt","rt");
	fscanf(f,"%d%d\n",&m,&n);
	 docmt(f,a,m,n); 
	printf("\nKet qua:%.2f",tinh(f,a,m,n)); 
	printf("\n"); 
	tongtunghang(f,a,m,n); 
	luuvaotep(f,a,m,n); 
}*/
typedef struct dangvien{
        char ten[30];
		int namsinh ;
		int namketnap;	
}DV; 
void doctep(FILE *f,DV *ds,int n){
	for(int i=1;i<=n;i++){
		fgets(ds[i].ten,30,f);
		ds[i].ten[strlen(ds[i].ten)-1]='\0';
		fscanf(f,"%d%d\n",&ds[i].namsinh,&ds[i].namketnap); 
	} 
	for(int i=1;i<=n;i++){
		printf("%s\n%d %d\n",ds[i].ten,ds[i].namsinh,ds[i].namketnap) ;
	} 
}
void sapxep(FILE *f,DV ds[100],DV t,int n){
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].namketnap>ds[j].namketnap){
				t=ds[i];
				ds[i]=ds[j];
				ds[j]=t ;
			} 
		} 
	} 
	for(int i=1;i<=n;i++){
		printf("%s\n%d %d\n",ds[i].ten,ds[i].namsinh,ds[i].namketnap) ;
	} 
} 
void thongke(FILE *f,DV ds[100],int n){
	int dem=0; 
	for(int i=1;i<=n;i++){
		if(2023-ds[i].namketnap>=20){
			dem++; 
				printf("%s\n%d %d\n",ds[i].ten,ds[i].namsinh,ds[i].namketnap) ;
		} 
	} 
	if(dem==0){
		printf("\nkhong co dang vien nao!"); 
	} 
	
	
} 
main(){
	FILE *f;
	int n;
	DV ds[100],t; 
	f=fopen("input.txt","rt");
	fscanf(f,"%d\n",&n);
	 doctep(f,ds,n); 
	 sapxep(f,ds,t,n); 
	 thongke(f,ds,n); 
} 







