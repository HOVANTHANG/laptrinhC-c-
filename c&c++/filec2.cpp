#include<stdio.h>
#include<math.h>
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	} return 1;
}
void doctep(FILE *f,float a[],int *n){
	fscanf(f,"%d",n);
	for(int i=1;i<=*n;i++){
		fscanf(f,"%f",&a[i]);
	}
//	for(int i=1;i<=*n;i++){
//	     printf("%d\t",snt(a[i]));
//	}
printf("Day so nguyen to la:");
	for(int i=1;i<=*n;i++){
		if(snt(a[i])==1){
			printf("%.2f\t",a[i]);
		}
	}
}
void ghitep(FILE *f,float a[],int n){
	fprintf(f,"%d\n",n);
	for(int i=1;i<=n;i++){
		fprintf(f,"%6.2f",a[i]);
	}
}
void docmt(FILE *f,float *a,int *m,int *n){
	int i;int j;
	fscanf(f,"%d%d",m,n);
	for(int i=1;i<=*m;i++){
		for(int j=1;j<=*n;j++){
			fscanf(f,"%f",a+100*i+j);
		}
	}
}
void ghimt(FILE *f,float *a,int *m,int *n){
      int i;int j;
       fprintf(f,"%d%d",m,n);
       for(int i=1;i<=*m;i++){
       	for(int j=1;j<=*n;j++){
       		fprintf(f,"%f",a+100*i+j);
		    }
		   }
	   }
int main(){
	FILE *f;
	char ten[20];
	float a[100];
	int n;
	float b[100][100];
//	printf("Ten tep nguon:");
//	gets(ten);
//	f=fopen(ten,"rt");
//	doctep(f,a,&n);
	printf("Ten tep dich: ");
	gets(ten);
	f=fopen(ten,"Wt");
	ghitep(f,a,n);
//    FILE *f1,*f2;
//    f1=fopen("matran.txt","rt");
//    docmt(f1,(float*)b,&m,&n);
//    //docmt(f1,b,&m,&n)
	}
