#include<stdio.h>
#include<math.h>
/*main(){
	FILE *f;
	int c;
	int n=0;
	f=fopen("matran.txt","rt");
	if(f==NULL){
	printf("LOi");
	return -1;
	}
	do{
		c=fgetc(f);
		if(feof(f)){
			break;
		}printf("%c",c);
	}while(1);
	
	
}*/
//main(){
//	FILE *f;
//	int i=0;
//	float a[100];int sum=0;
//	f=fopen("hello.txt","rt");
//	while(!feof(f)){
//			i++;
//		fscanf(f,"%f",&a[i]);
//	sum+=a[i];
//	}
//	printf("%d\n",i);
//	printf("Trung binh cong la:%.2f",(float)sum/i);
//	int sum=0;
//	for(int j=0;j<i;j++){
//		sum+=a[j];
//	}
 ///    printf("%d\n",i);
//	printf("%.2f",(float)sum/(i-1));
//}
/*main(){
	FILE *f;
	f=fopen("matran.txt","rt");
	int m=0,n,k,i=0,j;
	char c;
	float a[20];
	while(!feof(f)){
		c=fgetc(f);
		if(c=='\n'){
			m++;//so hang
		}
	}
		fclose(f);
	f=fopen("matran.txt","rt");
	while(!feof(f))
		fscanf(f,"%f",&a[++i]);
		  k=i-1;
		 n=k/(m-1); //so cot
		printf("\nk=%d,m=%d,n=%d\n",k,m-1,n);
		for( j=1;j<=k;j++){
			printf("%6.1f",a[j]);
			if(j%n==0){
				printf("\n");
			}
		}			
}*/
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}return n>1;
}
/*void doc(FILE *f,float a[],int &n){
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++){
		fscanf(f,"%f",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%.2f",a[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		if(snt(a[i])){
			printf("1\t");
		}else printf("0\t");
	}
}*/
void doc(FILE *f,float *a,int *n){
	fscanf(f,"%d",n);
	  for(int i=0;i<*n;i++){
	  	fscanf(f,"%f",a+i);
	  }
	for(int i=0;i<*n;i++){
		printf("%.2f",*(a+i));
	}
}
void ghimt(FILE *f,float *a,int m,int n){
	int i,j;
	for( i=0;i<m;i++){
		for(j=0;j<n;j++){
			fprintf(f,"%2.f",*(a+100*i+j));
			fprintf(f,"\n\n");
		}
	}
}
void docmatran(FILE *f,float *a,int *m,int *n){
	fscanf(f,"%d%d",m,n);
	for(int i=0;i<*m;i++){
		for(int j=0;j<*n;j++){
			fscanf(f,"%f",a+100*i+j);
		}
	}
}

main(){
     FILE *f;
     int m,n;
     float a[100][100];
	 f=fopen("hello.txt","rt");
	// doc(f,(float*)a,&n);	
	docmatran(f,(float*)a,&m,&n);
	ghimt(f,(float*)a,m,n);
}












