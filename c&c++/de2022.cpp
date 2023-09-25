#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
#include<string.h> 
/*void docmt(FILE *f,int *a,int *n){
	fscanf(f,"%d\n",n);
    for(int i=0;i<*n;i++){
    	for(int j=0;j<*n;j++){
    		fscanf(f,"%d",a+100*i+j); 
		} 
	}
	for(int i=0;i<*n;i++){
		for(int j=0;j<*n;j++){
			printf("%d\t",*(a+100*i+j));
		} printf("\n"); 
	} 
} 
int timso(FILE *f,int *a,int n){
	int dem=0;
	int k,l;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(*(a+100*i+j)%2==1&&i>j){
				k=i;
				l=j;
				dem++; 
				break; 
			} 
		} 
	} 
	int max = *(a+100*k+l);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(*(a+100*i+j)%2==1&&i>j&&*(a+100*i+j)>max){
				max=*(a+100*i+j); 
			} 
		} 
	} 
	if(dem==0){
		printf("\nkhong co phan tu le"); 
	} else {
		printf("\nKet qua:%d",max); 
	} 
} 
void ghimatran(FILE *f,int *a,int n){	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			fprintf(f,"%d\t",*(a+100*i+j)); 
		}fprintf(f,"\n"); 
	}  
	for(int i=0;i<n;i++){
		int s=1,dem=0;
		for(int j=0;j<n;j++){
			if(*(a+100*i+j)%2==0){
			s*=*(a+100*i+j);
			dem++; 
			}
		}if(dem!=0){
		fprintf(f,"%d\n",s) ;
		}else {
			fprintf(f,"0\n"); 
		} 
	} 	
} 
main(){
	FILE *f,*f1;
	int n;
	char s[50];
	int a[100][100] ;
	printf("Nhap ten tep:"); 
	gets(s);
	f = fopen(s,"rt");
	f1=fopen("output.txt","wt"); 
   docmt(f,(int*)a,&n); 
	timso(f,(int*)a,n); 
	ghimatran(f1,(int*)a,n); 	
}*/
/*main(){
	FILE *f;
	int n;
	int *a,*b;
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	f=fopen("input.txt","rt");
	fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++){
		fscanf(f,"%d%d",a+i,b+i); 
	} 	
	int dem=0; 
	float r;
	printf("\nNhap r vao:"); 
	scanf("%f",&r);
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(pow(*(a+i)-*(a+j),2)+pow(*(b+i)-*(b+i),2)<=r*r){
				dem++; 
			}		
		} 
	} 
	printf("\nKet qua la:%d",dem); 	
} */
//cau2

/*typedef struct sinhvien{
	char ten[50];
	float diem;
	char truong; 	
}SV; 
main(){
	FILE *f,*f1;
	int n;
	SV ds[100],t; 
	f=fopen("input.txt","rt");
	f1=fopen("output.txt","wt"); 
	fscanf(f,"%d\n",&n); 
	for(int i=1;i<=n;i++){
		fgets(ds[i].ten,50,f);
		ds[i].ten[strlen(ds[i].ten)-1]='\0'; 
		fscanf(f,"%f\n",&ds[i].diem);
	    fscanf(f,"%c\n",&ds[i].truong);  
	} 
	
	float sum=0,sum1=0,sum2=0;
	for(int i=1;i<=n;i++){
		if(ds[i].truong=='A'){
			sum+=ds[i].diem; 
		} else if(ds[i].truong=='B'){
			sum1+=ds[i].diem; 
		} else {
			sum2+=ds[i].diem; 
		} 
	} 
    printf("\nTong diem truong A la:%.2f",sum); 
	printf("\nTong diem truong B la:%.2f",sum1); 
	printf("\nTong diem truong C la:%.2f",sum2); 
	
	if(sum<sum1&&sum<sum2){
		printf("\nTruong A co tong diem thap nhat"); 
	} else if(sum1<sum && sum1<sum2){
		printf("\nTruong B co tong diem thap nhat"); 
	} else{
		printf("\nTruong C co tong diem thap nhat"); 
	} 
	
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].diem<ds[j].diem)
			{
				t=ds[i];
				ds[i]=ds[j];
				ds[j]=t; 
			 } 	
		} 
	} 
	for(int i=1;i<=n;i++){
		fprintf(f1,"%s",ds[i].ten);
		fprintf(f1,"\n%c\n",ds[i].truong);
	} 
	char s[50];
	int dem9=0; 
	float sum4=0; 
	printf("\nNhap ho:");
	gets(s);
	int k=strlen(s);
	for(int i=1;i<=n;i++){
		if(strncmp(ds[i].ten,s,k)==0){
			sum4+=ds[i].diem;
			dem9++; 
		} 
	} 
	printf("\nDiem trung binh cua ho %s la:%.2f",s,sum4/dem9); 
} 
*/
/*void docmt(FILE *f,int *a,int *m,int *n){
	fscanf(f,"%d%d\n",m,n);
	for(int i=0;i<*m;i++){
		for(int j=0;j<*n;j++){
			fscanf(f,"%d",a+100*i+j); 
		} 
	} 
} 
int  tinhtich(FILE *f,int *a,int m,int n){
	int sum=1;
	int dem=0; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(*(a+100*i+j)%2==1&&*(a+100*i+j)>211){
				sum*=*(a+100*i+j); 
				dem++; 
			} 
		} 
	} 
	if(dem!=0){
	return sum;
	}else{
		return 0; 
	} 	 
} 
void timso(FILE *f,int *a,int m,int n){
	int k,l; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(*(a+100*i+j)%2==0){
				k=i;
				l=j;
				break; 
			} 
		} 
	} 
	int x,y; 
	int min=*(a+100*k+l);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(*(a+100*i+j)%2==0&&*(a+100*i+j)<min){
				min=*(a+100*i+j); 
				x=i;
				y=j; 
			} 
		} 
	} 
	printf("\nPhan tu chan nho nhat la:%d",min);
	printf("\nHang:%d Cot:%d",x+1,y+1); 
	
	
} 
main(){
	FILE *f;
	int m,n;
	int a[100][100];
	f=fopen("input.txt","rt");
	 docmt(f,(int *)a,&m,&n); 
	 printf("\nKet qua la:%d",tinhtich(f,(int*)a,m,n)); 
	timso(f,(int*)a,m,n) ;
	
	
}
*/
/*typedef struct nhanvien{
	char manv[20];
	char ten[20];
	float hsl;
	char phong; 
}NV; 

main(){
	FILE *f,*f1;
	int n;
	NV ds[100],t;
	f=fopen("input.txt","rt");
	f1=fopen("output.txt","wt"); 
	fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++){
		fgets(ds[i].manv,20,f);
		fflush(stdin); 
		fgets(ds[i].ten,20,f);
		ds[i].ten[strlen(ds[i].ten)-1]='\0';
		fscanf(f,"%f\n",&ds[i].hsl);
		fscanf(f,"%c\n",&ds[i].phong); 
	} 
	
	float lcb;
	printf("\nNhap luong co ban vao:");
	scanf("%f",&lcb);
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].hsl<ds[j].hsl){
				t=ds[i];
				ds[i]=ds[j];
				ds[j]=t; 
			} 
		} 
	} 
	for(int i=1;i<=n;i++){
		printf("%s\n%s\n%f\n%c\n",ds[i].manv,ds[i].ten,ds[i].hsl,ds[i].phong); 
	} 
	float sum1=0,sum2=0,sum3=0;
	int dem1=0,dem2=0,dem3=0; 
	for(int i=1;i<=n;i++){
		if(ds[i].phong=='1'){
			sum1+=ds[i].hsl*lcb;
			dem1++; 
		} else if(ds[i].phong=='2'){
			sum2+=ds[i].hsl*lcb;
			dem2++; 
		} else   {
			sum3+=ds[i].hsl*lcb;
			dem3++; 
		}
	} 
	float k1=sum1/dem1,k2=sum2/dem2,k3=sum3/dem3;
	if(k1>k2&&k1>k3){
		printf("\nPhong hanh chinh max!"); 
	} else if(k2>k1&&k2>k3){
		printf("\nPhong ky thuat max"); 
	} else{
		printf("\nPhong ke toan max"); 
	} 
	 
	char l[50];
	char h;
	printf("\nNhap ten phong ban:");
	fflush(stdin); 
    scanf("%c",&h); 
	printf("\nNhap ten nhan vien:");
	fflush(stdin); 
	gets(l);
	for(int i=1;i<=n;i++){
		if(strcmp(ds[i].ten,l)==0&&ds[i].phong==h){
			printf("%-5s %-5s %f %c",ds[i].manv,ds[i].ten,ds[i].hsl,ds[i].phong) ;
			fprintf(f1,"%-5s %-5s %f %c",ds[i].manv,ds[i].ten,ds[i].hsl,ds[i].phong); 
		} 
	} 	
} 
*/























