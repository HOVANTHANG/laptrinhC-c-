#include<stdio.h>
#include<string.h>
typedef struct thisinh{
	char ten[20];
	int toan,li,hoa,tong;
}TS;
void docfile(FILE *f,TS *ds,int *n){
	 fscanf(f,"%d\n",n);
	for(int i=1;i<=*n;i++){
		fgets(ds[i].ten,20,f);
		fscanf(f,"%d%d%d\n",&ds[i].toan,&ds[i].li,&ds[i].hoa);
		ds[i].tong=ds[i].toan+ds[i].li+ds[i].hoa;
	}
	for(int i=1;i<=*n;i++){
	   printf("\n%-5s %-5d %-5d %-5d",ds[i].ten,ds[i].toan,ds[i].li,ds[i].hoa);
	} 
}
void ghifile(FILE *f,TS ds[],int n){
	int chuan;
	printf("\nDiem chuan:");
	scanf("%d",&chuan);
	fprintf(f,"%d",n); 
	for(int i=1;i<=n;i++){
		if(ds[i].tong>chuan && ds[i].hoa*ds[i].toan*ds[i].li>0){
			fprintf(f,"\n%-5s %-5d %-5d %-5d",ds[i].ten,ds[i].toan,ds[i].li,ds[i].hoa);
		}
	}	
	
}
main(){
	TS ds[100];
	TS t;
	char tenf[30];
	int n,chuan;	
     FILE *f;
     FILE *f1;
     f=fopen("data.txt","rt");
     f1=fopen("ghifile.txt","wt");
     docfile(f,ds,&n);
     ghifile(f1,ds,n);
		
	
}
