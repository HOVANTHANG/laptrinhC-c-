#include<stdio.h>
#include<string.h>
typedef struct thisinh{
	char ten[20];
	int toan,li,hoa,tong;
}TS;
/*
main(){
	TS ds[100];
	TS t;
	int n,chuan;
	printf("Nhap so luong thi sinh:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		fflush(stdin);
		printf("\nNhap ho va ten:");
		gets(ds[i].ten);
		printf("\nDiem toan:");
		scanf("%d",&ds[i].toan);
		printf("\nDiem li:");
		scanf("%d",&ds[i].li);
		printf("Diem hoa:");
		scanf("%d",&ds[i].hoa);
		ds[i].tong=ds[i].toan+ds[i].li+ds[i].hoa;
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].tong<ds[j].tong){
				     t=ds[i];
				     ds[i]=ds[j];
				     ds[j]=t;
			}
		}
	}
	printf("\nDiem chuan:");
	scanf("%d",&chuan);
	for(int i=1;i<=n;i++){
		if(ds[i].tong>chuan){
			printf("\n%-5s %-5d %-5d %-5d",ds[i].ten,ds[i].toan,ds[i].li,ds[i].hoa);
		}
	}	
}*/
/*main(){
	TS ds[100];
	TS t;
	char tenf[30];
	int n,chuan;	
     FILE *f;
     f=fopen("data.txt","rt");
     fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++){
		fgets(ds[i].ten,30,f);
		fscanf(f,"%d%d%d\n",&ds[i].toan,&ds[i].li,&ds[i].hoa);
		ds[i].tong=ds[i].toan+ds[i].li+ds[i].hoa;
	}
	
		for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].tong<ds[j].tong){
				     t=ds[i];
				     ds[i]=ds[j];
				     ds[j]=t;
			}
		}
	}	
	printf("\nDiem chuan:");
	scanf("%d",&chuan);
	for(int i=1;i<=n;i++){
		if(ds[i].tong>chuan){
			printf("\n%-5s %-5d %-5d %-5d",ds[i].ten,ds[i].toan,ds[i].li,ds[i].hoa);
		}
	}	
}
*/


main(){
	TS ds[100];
	TS t;
	char ten[30];
	int n,chuan;
	
     FILE *f;
     f=fopen("data.txt","rt");
	for(int i=1;i<=n;i++){
		fgets(ds[i].ten,30,f);
		fscanf(f,"%d%d%d\n",&ds[i].toan,&ds[i].li,&ds[i].hoa);
		ds[i].tong=ds[i].toan+ds[i].li+ds[i].hoa;
	}
	
	int i=1;
	while(!feof(f)){
		fgets(ds[i].ten,20,f);
		fscanf(f,"%d%d%d\n",&ds[i].toan,&ds[i].li,&ds[i].hoa);
		ds[i].tong=ds[i].toan+ds[i].li+ds[i].hoa;
		i++;	
	} 
	
	
	
	n=i-1;
		for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].tong<ds[j].tong){
				     t=ds[i];
				     ds[i]=ds[j];
				     ds[j]=t;
			}
		}
	}	
	printf("\nDiem chuan:");
	scanf("%d",&chuan);
	for(int i=1;i<=n;i++){
		if(ds[i].tong>=chuan){
			printf("\n%-5s %-5d %-5d %-5d",ds[i].ten,ds[i].toan,ds[i].li,ds[i].hoa);
		}
	}	
	fclose(f);
	
	
}









