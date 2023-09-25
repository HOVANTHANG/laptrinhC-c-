#include<stdio.h>
#include<string.h>
 struct thisinh{
	char ten[20];
	int toan,li,hoa,tong;
};
typedef thisinh TS;




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
			printf("\n-%20s -%10d -%10d -%10d",ds[i].ten,ds[i].toan,ds[i].li,ds[i].hoa);
		}
	}
	
	
}
