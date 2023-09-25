#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/*typedef struct Ngaysinh{
	int ngay;
	int thang;
	int nam;
}NS;

typedef struct nhanvien{
	char ten[50];
	NS ngaysinh;
	float salary; 
}NV;
main(){
	NV t[100];
	int n;
	NV *a;
	printf("NHap so luong nhan vien:");
	scanf("%d",&n);
	
	a=(NV*)malloc(n*sizeof(NV));
	for(int i=0;i<n;i++){
	   fflush(stdin);
	 gets(t[i].ten);
	 t[i].ten[strlen(t[i].ten)-1]='\0';
	 scanf("%d%d%d",&t[i].ngaysinh.ngay,&t[i].ngaysinh.thang,&t[i].ngaysinh.nam);
	 scanf("%f",&t[i].salary);
    }
	for(int i=0;i<n;i++){
		printf("%-5s %d-%d-%d %-5f\n",t[i].ten,t[i].ngaysinh.ngay,t[i].ngaysinh.thang,t[i].ngaysinh.nam,t[i].salary);
	}
	
	
}*/

/*main(){
	FILE *f;
	int n;
	int *a,*b;
	a=(int*)malloc((n+1)*sizeof(int));
	b=(int*)malloc((n+1)*sizeof(int));	
	f=fopen("toado.txt","rt");
    fscanf(f,"%d\n",&n);
	
	for(int i=1;i<=n;i++){
		fscanf(f,"%d%d",a+i,b+i);
	}	
	float sum=0;
	for(int i=1;i<n;i++){
		sum+=sqrt(pow(a[i+1]-a[i],2)+pow(b[i+1]-b[i],2));
	}
	printf("\nDo dai duong gap khuc la:%.2f",sum);
	fclose(f);
	
}*/
main(){
	FILE *f;
	float *a;
	int m,n;

	f=fopen("matran1.txt","rt");
	fscanf(f,"%d%d",&m,&n);
     a=(float*)malloc(m*n*sizeof(float));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			fscanf(f,"%f",a+n*i+j);
		}
	}
	for(int i=0;i<n;i++){
		float sum=0;
		for(int j=0;j<m;j++){
			sum+=*(a+n*j+i);
		}printf("%.2f\t",sum);
	}
	
	
	
	
	
	
	
}






