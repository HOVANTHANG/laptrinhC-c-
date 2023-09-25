#include<stdio.h>
struct NgaySinh{
	int ngay;
	int thang;
	int nam;
};

typedef struct Nhanvien{
    	char ten[20];
    	NgaySinh ngaysinh;
		float salary; 
}NV;
main(){
	FILE *f;
	int n;
	NV ds[100],t;
	float tong=0;
	f=fopen("data2.txt","rt");
	fscanf(f,"%d\n",&n);
	for(int i=1;i<=n;i++){
		fgets(ds[i].ten,20,f);
		fscanf(f,"%d%d%d\n",&ds[i].ngaysinh.ngay,&ds[i].ngaysinh.thang,&ds[i].ngaysinh.nam);
		fscanf(f,"%f\n",&ds[i].salary);
		tong+=ds[i].salary;
	}
	float avr = (float)tong/n;
	printf("Luong trung binh cua cong ty:%.2f",avr); 
	for(int i=1;i<=n;i++){
		printf("\n%-5s%d/%d/%d \n%f",ds[i].ten,ds[i].ngaysinh.ngay,ds[i].ngaysinh.thang,ds[i].ngaysinh.nam,ds[i].salary);
	}
	float tong2;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(ds[i].ngaysinh.nam>1993){
			cnt++;
			tong2+=ds[i].salary;
		}
	}	
	float avr2;
	avr2=(float)tong2/cnt;
	printf("\nLuong trung binh cua nhan vien duoi 30 tuoi la:%.2f",avr2);
	float max=-10e6;
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
		if(ds[i].salary<ds[j].salary){
			t=ds[i];
			ds[i]=ds[j];
			ds[j]=t;
		}
	 }
	}
	printf("\nNguoi co luong cao nhat: %s",ds[1].ten);
	printf("\nNguoi co luong thap nhat:%s",ds[n].ten);
	printf("\nDanh sach sinh vien luong tu cao den thap:");
	for(int i=1;i<=n;i++){
			printf("\n%-5s%d/%d/%d \n%f",ds[i].ten,ds[i].ngaysinh.ngay,ds[i].ngaysinh.thang,ds[i].ngaysinh.nam,ds[i].salary);
	}
	fclose(f);
	
}
