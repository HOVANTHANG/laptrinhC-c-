#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
main(){
	FILE *f;
	int n;
	float a[100];
	char b[50];
	printf("Nhap ten tep vao:");
	gets(b);
	f=fopen(b,"rt");
	fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++){
		fscanf(f,"%f",&a[i]);
	}
	for(int i=1;i<=n;i++){
		printf("%.2f\t",a[i]);
	}
	int dem=0;
	for(int i=1;i<=n;i++){
		if(a[i]>100){
			dem++;
		}
	}
	float s=1;
	int k=0;
	for(int i=1;i<=n;i++){
		if(a[i]>0){
		s*=a[i];
		k++;
		}
	}
	if(dem==0){
		 printf("\nTrung binh nhan cac phan tu co gia tri duong khong lon hon 100 la:%.2f",pow(s,1.0/k));
	}else {
		printf("\nTrong day co gia tri lon hon 100!");
	}
    
}
