/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main(){
	float *p;
	int n;
	float a[100];
	p=(float*)malloc(n*sizeof(float));
	FILE *f;
	f=fopen("input.txt","rt");
	fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++){
		fscanf(f,"%f\t",a+i);
	}
	for(int i=1;i<=n;i++){
		printf("%f",*(a+i));
	}
}*/
#include<stdio.h>
#include<stdlib.h>
main(){
	int m,n;
	scanf("%d%d",&m,&n);
	float *a;
	a= (float*)malloc(m*n*sizeof(float));
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%f",a+i*n+j);
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%f\t",*(a+i*n+j));
		}printf("\n");
	}
	
	
}
