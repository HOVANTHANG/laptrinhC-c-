#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
//De 01 
/*main(){
	FILE *f;
	int n;
	int a[100],b[100]; 
	f = fopen("input.txt","rt"); 
	fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++){
		fscanf(f,"%d%d\n",&a[i],&b[i]); 
	} 
	int dem=0,dem1=0;
	for(int i=1;i<=n;i++){
		if(pow(a[i],2)+pow(b[i],2)>25){
			dem++; 
		} else {
			dem1++; 
		} 
	} 
	printf("\nSo diem nam trong duong tron la:%d",dem1);
	 printf("\nSo diem nam ngoai duong tron la:%d",dem);
	int dem2=0; 
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]==-a[j]&&b[i]==-b[j]){
				printf("%d %d %d %d",a[i],a[i],b[i],b[j]);
				dem2++; 
			} 
		} 
	} 
	if(dem2==0){
		printf("\nKhong co"); 
	} 
} */
/*typedef struct Sach{
	char tensach[50];
	 char tentacgia[50];
	 int nam; 
}QS; 
main(){
	FILE *f,*f1;
	int n;
	QS ds[100],t;
	char s[50];
	printf("Nhap ten tep:");
	gets(s);
	f = fopen(s,"rt");
	f1=fopen("output.txt","wt"); 
	fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++){
		fgets(ds[i].tensach,50,f);
		ds[i].tensach[strlen(ds[i].tensach)-1]='\0'; 
		fflush(stdin);
		fgets(ds[i].tentacgia,50,f);
		ds[i].tentacgia[strlen(ds[i].tentacgia)-1]='\0';
		fscanf(f,"%d\n",&ds[i].nam); 
	} 
	
	char k[50];
	printf("\nNhap ten sach can tim:");
	gets(k);
	for(int i=1;i<=n;i++){
		if(strcmp(ds[i].tensach,k)==0){
			printf("%-5s %-5s %d",ds[i].tensach,ds[i].tentacgia,ds[i].nam); 
		} 
	} 
	
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].nam>ds[j].nam){
				t = ds[i];
				ds[i]=ds[j];
				ds[j]=t; 
			} 
		} 
	} 
	for(int i=1;i<=n;i++){
		if(ds[i].nam<2000){
			fprintf(f1,"%-5s \n %-5s \n %d\n",ds[i].tensach,ds[i].tentacgia,ds[i].nam); 
		} 
	} 	
} */
//de02 

/*void docmatran(FILE *f,float *a,int *m,int *n){
	fscanf(f,"%d%d\n",m,n);
	for(int i=0;i<*m;i++){
		for(int j=0;j<*n;j++){
			fscanf(f,"%f",a+100*i+j); 
		}
	} 
	for(int i=0;i<*m;i++){
		for(int j=0;j<*n;j++){
			printf("%f\t",*(a+100*i+j)) ;
		} printf("\n"); 
	} 
	
} 
float tong(FILE *f,float *a,int m,int n){
	float sum=0,l;
	int k=m*n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum+=*(a+100*i+j); 
		} 
	} 
	l=sum/k;
	float sum1=0; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(*(a+100*i+j)>l){
				sum1+=*(a+100*i+j); 
			} 
		} 
	} 
	
	return sum1; 	
} 
float timso(FILE *f,float *a,int m,int n){
	float max=-10e9;
	int dem=0; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(*(a+100*i+j)<0&&*(a+100*i+j)>max){
				max=*(a+100*i+j); 
				dem++; 
			} 
		} 
	} 
	if(dem!=0){
	return max; 
	}else{
		return 0; 
	}	
} 
main(){
   FILE *f;
   float a[100][100];
   int m,n;
    f=fopen("input.txt","rt"); 
    docmatran(f,(float*)a,&m,&n); 
     printf("\nTong cac phan tu lon hon tbc la:%.2f",tong(f,(float*)a,m,n)); 
     printf("\nKet qua:%.2f",timso(f,(float*)a,m,n)); 
	 
}
typedef struct sinhvien{
	char ten[50];
	float diem;
	char truong; 
}SV; 
main(){
	FILE *f;
	int n;
	SV ds[100],t; 
	f=fopen("input.txt","rt");
	fscanf(f,"%d\n",&n); 
	for(int i=1;i<=n;i++){
		fgets(ds[i].ten,50,f);
		fscanf(f,"%f\n",&ds[i].diem);
		 fscanf(f,"%c\n",&ds[i].truong); 
	} 
	float sum=0,sum1=0,sum2=0,sum3=0;
	for(int i=1;i<=n;i++){
		if(ds[i].truong=='A'){
			sum+=ds[i].diem; 
		} else if(ds[i].truong=='B'){
			sum1+=ds[i].diem; 
		} else if(ds[i].truong=='C'){
			sum2+=ds[i].diem; 
		} else{
			sum3+=ds[i].diem; 
		} 
	} 
	printf("\nTong diem truong A:%f",sum); 
	printf("\nTong diem truong B:%f",sum1); 
	printf("\nTong diem truong C:%f",sum2); 
	printf("\nTong diem truong D:%f",sum3); 
	
	if(sum>sum1&&sum>sum2&&sum>sum3){
		printf("\nTruong A co tong diem cao nhat!"); 
	} 
	if(sum1>sum&&sum1>sum2&&sum1>sum3){
		printf("\nTruong B co tong diem cao nhat!"); 
	} 
	if(sum2>sum1&&sum2>sum&&sum2>sum3){
		printf("\nTruong C co tong diem cao nhat!"); 
	} 
	if(sum3>sum1&&sum3>sum2&&sum3>sum){
		printf("\nTruong D co tong diem cao nhat!"); 
	} 
	
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].diem<ds[j].diem){
				t=ds[i];
				ds[i]=ds[j];
				ds[j]=t; 
			} 
		} 
	}	
} */

main(){
	FILE *f;
	int m,n;
	int a[100][100];
	char s[20];
	printf("Nhap ten tep:");
	gets(s);
	f=fopen(s,"rt"); 
	
	
	
	
	
} 














