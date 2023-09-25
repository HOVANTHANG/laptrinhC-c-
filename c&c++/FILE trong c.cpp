#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*struct ngaysinh{
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
	f = fopen("baitaplaptrinh.bin","wb");
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
	
	FILE *f;
	f = fopen("baitaplaptrinh.bin","rb");
	
	if(f==NULL){
		printf("Error FILE !");
		exit(1); 
	} 
    fread(&n1,sizeof(struct ngaysinh),1,f) ;
     printf("\nNgay sinh cau ban la:%d-%d-%d",n1.ngay,n1.thang,n1.nam);    

    fclose(f); 
} */

/*int main()
{
	FILE *f;
	int n,i,a[20];
	f=fopen("input.txt","rt");
	fscanf(f,"%d",&n);
	for(int i=1;i<=n;i++){
		fscanf(f,"%d",&a[i]);
		for(int i=1;i<=n;i++){
			printf("%d",a[i]);
		}
	}
	
	f = fopen("output.txt","wt");
	fprintf(f,"%d\n",n);
	for(int i=1;i<=n;i++){
		printf("%d",a[i]);
	}
	//fgetc();
	//ghi tep vao file
	//fputs();
	//feof tim cai gi do  co khong;
}*/
//main(){
//	FILE *f;
//	
//	f=fopen("input.txt","rb");
//	if(f==NULL){
//		printf("khong ton tai file");
//	}
//	int a[10];
//	int n;
////	scanf("%d",&n);
////	for(int i=0;i<=n;i++){
////		scanf("%d",&a[i]);
////	}
////	fwrite(&n,1,1,f);
////	fwrite(&a,sizeof(a),1,f);
////	fclose(f);
//	
//	fread(&a,sizeof(f),1,f);
//	printf("%d",n);
//	for(int i=0;i<=n;i++){
//		printf("%d",a[i]);
//	}
//	fclose(f);
//	
//}
/*main(){
	FILE *f;*/
//	int n,m,i;
//	float a[100][100],max;
////	f=fopen("input1.txt","rt");
//	fscanf(f,"%d",&n);
//	
//	for(int i=1;i<=n;i++){
//		fscanf(f,"%f",&a[i]);
//	}
//	 max=a[1];
//	for(int i=2;i<=n;i++){
//		if(max<a[i]){
//			max=a[i];
//		}
//	}
//    printf("\nMAX=%.2f",max);
//
////	
////	f=fopen("output.txt","wb");
////	
//	f = fopen("nhapvao.txt","rt");
//	fscanf(f,"%d",&m);
//	fscanf(f,"%d",&n);
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			fscanf(f,"%f",&a[i][j]);
//		}
//	}
//	max=a[0][0];
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			 if(a[i][j]>max){
//			 	max=a[i][j];
//			 }
//		}
//	}
//	printf("%.2f",max);
//	printf("\n");
//	printf("%d\t%d\n",m,n);
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			printf("%.2f\t",a[i][j]);
//		}printf("\n");
//	}
//	printf("\n");
//	for(int i=0;i<m;i++){
//		float sum=0;
//		for(int j=0;j<n;j++){
//			sum+=a[i][j];
//		}printf("%.2f\n",sum);
//	}
//      
	           //fprintf(f,"%d",a[i]) ghi tung phan tu vao tep f	
	//Doc mot ky tu tu tep
	//fgetc(FILE *f)
	
	//ghi mot ki tu vao tep
	//fputc(char,file *f)
	//fputc(int ch,FILE *f)
	
//	fclose(f);
//      int c,d=0,dcach=0,ddong=0;
//      int n=0;
//      f=fopen("outputc.txt","rt");
//      if(f=NULL){
//      	perror("xay ra loi");
//      	return -1;
//	  }
//	  do{
//	  	c=fgetc(f);
//	  	if(feof(f)){
//	  		break;
//	  		fscanf("%c",c);
//	  		d++;
      //    if(c==' ') dcach++;
    //  if(c=='\n') ddong++;
//	  	}
//		  
//	  }while(1);
//	  for(int i=0;i)
main(){
	FILE *f;
      float a[100];
      int i=1;
    f=fopen("dayso3.txt","rt");
    if(f=NULL){
      perror("Xay ra loi");
      return -1;
	}
    do{
    	if(feof(f)){
    		break;
		}
		fscanf(f,"%f",&a[i]);
		i++;
	}while(1);
    float max=a[1];
    for(int j=2;j<=i;j++){
    	if(a[j]>max){
    		max=a[j];
		}
	}
	printf("%.2f",max);    
}
//feof kiem tra coi day da het phan tu chua ;het roi tra ve true;
