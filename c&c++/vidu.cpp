#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct thisinh{
	char ten[50];
	float toan,ly,hoa,tong;
}TS;
void docfile(FILE *f,TS *ds,int *n){
	fscanf(f,"%d\n",n);
	for(int i=1;i<=*n;i++){
		fgets(ds[i].ten,50,f);
		fscanf(f,"%f %f %f\n",&ds[i].toan,&ds[i].ly,&ds[i].hoa);
		ds[i].tong=ds[i].toan+ds[i].ly+ds[i].hoa;
	}
	char s[50];
	fflush(stdin);
	printf("\nNhap ten:");
	gets(s);int dem=0;
	for(int i=1;i<=*n;i++){
		ds[i].ten[strcspn(ds[i].ten,"\n")]='\0';
		if(strcmp(ds[i].ten,s)==0){
			printf("%s %f %f %f\n",ds[i].ten,ds[i].toan,ds[i].ly,ds[i].hoa);
			dem++;
		}
	}
	if(dem==0){
		printf("Khong co thi sinh nao!");
	}
}

void ghifile(FILE *f,TS ds[100],int n){
	 float chuan;
	 printf("\nDiem chuan:");
	 scanf("%f",&chuan);
	 for(int i=1;i<=n;i++){
	 	if(ds[i].tong>=chuan&&ds[i].toan*ds[i].hoa*ds[i].ly!=0){
	 		fprintf(f,"%s %f %f %f\n",ds[i].ten,ds[i].toan,ds[i].ly,ds[i].hoa);
		 }
	 }   
}



main(){
	TS ds[100];
	int n;
	FILE *f;
	FILE *f1;
	f=fopen("nhap.txt","rt");
	f1=fopen("ra.txt","wt");
	docfile(f,ds,&n);
	ghifile(f1,ds,n);
}
