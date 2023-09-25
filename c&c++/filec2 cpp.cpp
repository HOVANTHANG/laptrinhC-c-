#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct ngaysinh{
	int ngay;
	int thang;
	int nam; 
}; 


main(){
	ngaysinh n1; 
	 
	// ghi du lieu tu file 
	/*FILE *f;
	f = fopen("baitap.txt","w");
	if(f== NULL){
		printf("Error file!");
		exit(1); 
	} 
	int n;
	scanf("%d",&n);
	fprintf(f,"%d",n);
	
	fclose(f); 
	// Doc du lieu tu fille  
	FILE *f;
	f = fopen("baitap.txt","r");
	if(f==NULL){
		printf("Error file!");
		exit(1); 
	} 
	int n; 
	fscanf(f,"%d",&n);
	printf("\nGia tri n la:%d",n);
	fclose(f); 
	
	FILE *f;
	f = fopen("baitap.bin","wb");
	if(f==NULL)
	{
		printf("Eror FILE");
		exit(1); 
	 } 
	 
	 n1.ngay=22;
	 n1.thang=6;
	 n1.nam=2004 ;
	 
	 
	fwrite(&n1,sizeof(struct ngaysinh),1,f);
	fclose(f); 
	/*
	FILE *f;
	f = fopen("baitap.bin","rb");
	
	if(f==NULL){
		printf("Error FILE !");
		exit(1); 
	} 
    fread(&n1,sizeof(struct ngaysinh),1,f) ;
     printf("\nNgay sinh cau ban la:%d-%d-%d",n1.ngay,n1.thang,n1.nam);    

    fclose(f); */
	
	
	
	
} 
