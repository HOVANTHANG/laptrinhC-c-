#include<stdio.h>
#include<math.h>
#include<string.h>
/*main(){
	FILE *f;
	int n;
	int a[100];
	int b[100];
	char s[50];
	printf("Nhap ten tep:");
	gets(s);
	f=fopen(s,"rt");
	fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++){
		fscanf(f,"%d%d\n",&a[i],&b[i]);
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(sqrt(pow(a[i],2)+pow(b[i],2))>=5){
			cnt++;
		}
	}
	printf("\nSo diem nam ngoai duong tron la:%d",cnt);
	printf("\nSo diem nam trong duong tron la:%d",n-cnt);
	printf("\nNhung cap doi xung gom:\n");
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if((a[i]==-a[j]&&b[i]==b[j])||(b[i]==-b[j]&&a[i]==a[j])||(a[i]==-a[j]&&b[i]==-b[j])){
				printf("%d %d\n",a[i],b[i]);
				printf("%d %d",a[j],b[j]);
			}
		}
	}
}
*/



typedef struct sach{
	char tensach[50];
	char tentg[50];
	int nam;
}CS;
main(){
	FILE *f,*f1;
	int n;
	CS ds[100],t;
	f=fopen("sach.txt","rt");
	f1=fopen("sachout.txt","wt");
	fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++){
		fgets(ds[i].tensach,50,f);
		ds[i].tensach[strlen(ds[i].tensach)-1]='\0';
		ds[i].tensach[strcspn(ds[i].tensach,"\n")]='\0';
		fflush(stdin);
		fgets(ds[i].tentg,50,f);
		ds[i].tentg[strlen(ds[i].tentg)-1]='\0';
		fscanf(f,"%d\n",&ds[i].nam);
	}
	char s[50];
	printf("\nNhap ten sach:");
	gets(s);
	for(int i=1;i<=n;i++){
		if(strcmp(s,ds[i].tensach)==0){
			printf("%-5s %-5s %d",ds[i].tensach,ds[i].tentg,ds[i].nam);
		}
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(ds[i].nam>ds[j].nam){
				 t = ds[i];
				 ds[i]=ds[j];
				 ds[j]=t;
			}
		}
	}
	printf("\nNhung sach xuat ban truoc nam 2000 la:\n");
	for(int i=1;i<=n;i++){
		if(ds[i].nam<2000){
			printf("%-5s %-5s %d\n",ds[i].tensach,ds[i].tentg,ds[i].nam);
		}
	}
	for(int i=1;i<=n;i++){
		if(ds[i].nam<2000){
			fprintf(f1,"%-5s %-5s %d\n",ds[i].tensach,ds[i].tentg,ds[i].nam);
		}
	}
	
	
	
}





