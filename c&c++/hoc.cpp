/*#include<stdio.h>
#include<math.h>
int main(){
	int n,k;
	int a[100];
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("a[%d]=",i) ;
		scanf("%d",&a[i]) ;
	} 
	for(int i=1;i<=n;i++){
	
	printf("%d\t",a[i]); 
}
     printf("\nk=");
	 scanf("%d",&k) ;
	 printf("\nCac so lon hon k la:"); 
	 for(int i=1;i<=n;i++){
	 	if(a[i]>k){
	 		printf("%d\t",a[i]); 
		 } 
	 } 
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=a[i]; 
	} 
	float TBC;
	TBC=(float)sum/n;
	printf("\ncac gia tri lon hon Tbc la:"); 
   for(int i=1;i<=n;i++){
		if(a[i]>TBC){
			printf("%d\t",a[i]); 
		} 
	} 
} 
#include<stdio.h> 
#include<math.h>
int main(){
	int sum; 
	int n,a[100],h;
	float TB;
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]); 
	} 
	for(int i=1;i<=n;i++){
		sum+=a[i]; 
	} 
	 TB= (float)sum/n;
	 printf("\nh=");
	 scanf("%d",&h);
	
	 	if(TB>a[h]){
	 		printf("\nGia tri Tb lon hon gia tri thu h"); 
		 } 
	   if(TB<a[h]){
	 		printf("\nGia tri Tb nho hon gia tri thu h"); 
		 } 
	   if(TB==a[h]){
	 		printf("\nGia tri Tb bang gia tri thu h"); 
		 } 
	   for(int i=1;i<=n-1;i++){
	   	for(int j=i+1;j<=n;j++){
	   		if(a[i]>a[j]){
	   			int t=a[i];
				   a[i]=a[j];
				   a[j]=t; 
			   } 
		   } 
	   }
	   printf("\nsap xep:"); 
	 for(int i=1;i<=n;i++){
	 	printf("%d\t",a[i]); 
	 } 	  
} 
#include<stdio.h>
#include<math.h>
int main(){
	int Tc,Tl,n,a[100],dem,dem1,max;
	printf("n=");
	scanf("%d",&n) ;
	for(int i=1;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]); 
	}
	for(int i=1;i<=n;i++){
		if(a[i]%2==0){
			Tc+=a[i];
			dem++; 
		} else{
			Tl+=a[i];
			dem1++; 
		} 
	}
	if(dem==0||dem1==0){
		printf("Khong so sanh duoc"); 
	} 
	if(dem!=0&&dem1!=0){
		if(Tc>Tl){
			printf("\nTong cac so chan lon hon so le"); 
		} else{
			printf("\nTong le lon hon tong chan"); 
		} 
	} 
	int d; 
	 for(int i=1;i<=n;i++){
	 	if(a[i]%2==0){
	 	    	d=i;
			 break; 
		 } 
	 }
	  max=a[d]; 
	for(int i=1;i<=n;i++){
		if(a[i]%2==0&&a[i]>max){
			max=a[i] ;
		} 
	} 
	printf("\nMax chan la:%d",max);  
} 
#include<stdio.h>
#include<math.h>
int chiahetcho3(int x[],int n){
	int y[100];
	int k;
	for(int i=1;i<=n;i++){
		if(x[i]%3==0)
		{
			y[k]=x[i];
			k++; 
		 } 
	} 
	for(int i=1;i<=k-1;i++){
		for(int j=i+1;j<=k;j++){
			if(y[i]<y[j]){
				int t=y[i];
				y[i]=y[j];
				y[j]=t; 
			} 
		} 
	} 
	printf("\nMax1=%d Max2=%d",y[1],y[2]); 
	
	
} 
int main(){
	int n;float dem,Tc;
	int a[100];
	float Tbc; 
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]); 
	} 
	for(int i=1;i<=n;i++){
		if(a[i]%2==0&&a[i]>0){
			Tc+=a[i];
			dem++; 
		} 
	} 
	if(dem==0){
		printf("khong co gia tri nao thoa man"); 
	} 
	  Tbc=Tc/dem; 
	printf("\nGia tri trung binh la:%.2f",Tbc); 
	chiahetcho3(a,n);
}
#include<stdio.h>
#include<math.h>
 int main(){
 	int n,a[100],dem;
 	int T=1; 
	 printf("n=");
	 scanf("%d",&n);
	 for(int i=1;i<=n;i++){
	 	printf("a[%d]=",i);
		 scanf("%d",&a[i]); 
	 }
	 for(int i=1;i<=n;i++ ){
	 	if(a[i]>0){
	 		T*=a[i];
			 dem++; 
		 } 
	 }
	 if(dem==0){
	 	printf("khong co gia tri nao thoa man"); 
	 } 
	 float k; 
	 float s=1;
	 k=(float)1/dem; 
	 if(dem!=0){
	 s=pow(T,k);
	 }
	 printf("\ngia tri tbn cua day la:%.2f",s); 
	  
	  
	  int max=a[1]+a[2];
	  for(int i=1;i<=n;i++){
	  	if(a[i]+a[i+1]>max){
	  		max=a[i]+a[i+1]; 
		  } 
	  } 
	  printf("\nMax=%d",max);  	  
 } 
#include<stdio.h>
#include<math.h>
int main(){
	int x[100],y[100];
	int n;
	int dem; 
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("(x%d,y%d)=",i,i);
		scanf("%d%d",&x[i],&y[i]); 
	} 
	for(int i=1;i<=n-1;i++){
	for(int j=i+1;j<=n;j++){
		if(y[i]*y[j]<0){
			dem++; 
		} 
	} 
	}		
	printf("\nso doan thang cat truc hoanh la:%d",dem); 	 
} 
#include<stdio.h>
#include<math.h>
int main(){
	int x[100],y[100];
	int n;
	float z[100];
	int k; 
	 printf("n=");
	 scanf("%d",&n);
	 for(int i=1;i<=n;i++){
	 	printf("(x%d,y%d)=",i,i);
		 scanf("%d%d",&x[i],&y[i]); 
	 } 
	 for(int i=1;i<=n-1;i++){
	 	for(int j=i+1;j<=n;j++){
	 		z[k]=(float)sqrt(pow(x[j]-x[i],2) +pow(y[j]-y[i],2)); 
	 		k++; 
		 } 
	 }
	 float max=z[1];
	 for(int i=1;i<=k;i++){
	 	if(z[i]>max){
	 		max=z[i]; 
		 } 
	 } 
	 printf("\nDoan thang lon nhat dai:%.2f",max) ;	
} 
#include<stdio.h>
#include<math.h>
int main(){
	int x[100],y[100];
	int n; 
	float z[100];
	int k;
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("(x%d,y%d)=",i,i);
		scanf("%d%d",&x[i],&y[i]); 
	} 
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			z[k]=sqrt(pow(x[j]-x[i],2)+pow(y[j]-y[i],2)) ;
			k++; 
		} 
	}
	int l;
	int dem; 
	printf("\nL=");
	scanf("%d",&l);
	for(int i=1;i<=k;i++){
		if(z[i]<l){
			dem++; 
		} 
	} 
	printf("\nso doan thang co do dai nho hon l la:%d",dem); 
} 
#include<stdio.h>
#include<math.h>
 int main(){
 	int x[100],y[100];
	int n; 
	float z[100];
	int k=0;
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("(x%d,y%d)=",i,i);
		scanf("%d%d",&x[i],&y[i]); 
	} 
 	for(int i=1;i<=n;i++){
			z[k]=(float)sqrt(pow(x[i],2)+pow(y[i],2)) ;
			  k++; 	
	}
	float max=z[1];
	for(int i=2;i<=k;i++){
		if(z[i]>max){
			max=z[i]; 
		} 
	} 
	for(int i=1;i<=k;i++){
		if(z[i]==max){
			printf("\nToa do cach xa o nhat la:(%d,%d)",x[i+1],y[i+1]);
			break; 
		} 
	} 
 } 
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int a[100];
	printf("n=");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]); 
	}
	printf("\nP(x)=");
	printf("%d",a[0]) ;
	for(int i=1;i<=n;i++){
		printf("+%dx^%d",a[i],i); 
	} 
	int dem; 
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			dem++; 
		} 
	}
	printf("\nso cac he so bang 0 la:%d",dem) ;
	int x;
	printf("\nX=");
	scanf("%d",&x) ;
	int t=1;
	int p=a[1];
	for(int i=2;i<=n;i++){
		t*=x;
		p+=t*a[i]*i; 
	} 
	printf("\nKet qua la:%d",p); 
} 
#include<stdio.h>
#include<math.h>
int phantulonnhonhat(int x[100][100],int m,int n){
	int max= x[0][0];
	int min = x[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(x[i][j]>max){
				max=x[i][j]; 
			} 
		} 
	}
	printf("\nMax=%d",max);
	 for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(x[i][j]<min){
				min=x[i][j]; 
			} 
		} 
	}
	printf("\nMin=%d",min);
} 
int sapxeptangdantheohang(int x[100][100],int m,int n){
	for(int k=0;k<m;k++){
		for(int i=0;i<n-1;i++){
			for(int j=n-1;j>i;j--){
				if(x[k][j]<x[k][j-1]) {
			
				int t = x[k][j];
				x[k][j]=x[k][j-1];
				x[k][j-1]=t; 
			} 
		} 
	}
	}printf("\nMa tran arrange theo hang la:\n"); 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",x[i][j]); 
		} printf("\n"); 
	} 	
} 
int main () {
	int m,n;
	int a[100][100];
	printf("m,n=") ;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]); 
		} 
	}
	printf("\nMa tran la:\n"); 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]); 
		} printf("\n"); 
	} 
     /*int k=m*n; 
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(a[i/n][i%n]>a[j/n][j%n]){
				int t = a[i/n][i%n];
				a[i/n][i%n]=a[j/n][j%n];
				a[j/n][j%n]=t; 
			} 
		} 
	} 
	/*printf("\nMa tran sau khi sap xep tang dan co dang :\n"); 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]); 
		} printf("\n"); 
	} 
	phantulonnhonhat(a,m,n); 	
	sapxeptangdantheohang(a,m,n); 
}
#include<stdio.h>
#include<math.h>
void nhapmatran(int x[100][100],int &m,int &n){
	printf("m,n=");
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("a[%d][%d]=",i,j) ;
			scanf("%d",&x[i][j]); 
		} 
	} 
} 
void sapxeptangdantheocot(int x[100][100],int m,int n) 
{
	for(int k=0;k<n;k++){
		for(int i=0;i<n-1;i++){
			for(int j=n-1;j>i;j--){
				if(x[j][k]<x[j-1][k]){
					int t = x[j][k];
					x[j][k]=x[j-1][k];
					x[j-1][k]=t; 
				} 
			} 
		} 
	}	
}
void xuatmatran(int x[100][100],int m,int n) {
	printf("\nMa tran la:\n "); 
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){
			printf("%d\t",x[i][j]); 
		}printf("\n"); 
	 } 
}
void tongcachang(int x[100][100],int m,int n){
	int z[100];
	int k; 
	int sum; 
	printf("\nTong cac hang co gia tri la:\n"); 
	for(int i=0;i<m;i++){
	      sum=0;
		for(int j=0;j<n;j++){
			sum+=x[i][j];
		}
		printf("%d\n",sum); 
		if(sum!=0){
		    z[k]=sum;
			k++; 
			}
	}  

	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(z[i]<z[j]){
				int t=z[i];
				z[i]=z[j];
				z[j]=t; 
			} 
		} 
	}
	printf("\nSap xep giam dan theo tong hang:\n"); 
	for(int i=0;i<k;i++){
		printf("%d\n",z[i]); 
	} 
} 
int main(){
      int m,n;
	  int a[100][100];	
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
   	sapxeptangdantheocot(a,m,n);
	xuatmatran(a,m,n); 
	tongcachang(a,m,n); 
} 
#include<stdio.h>
#include<math.h>
int main(){
	int a[100][100];
	int m,n;
	printf("m,n=");
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]); 	 
		} 
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]); 
		} printf("\n"); 
	} 
	printf("\ntong cot la:\n"); 
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			sum+=a[j][i]; 
		}
		printf("%d\t",sum); 
	} 
	int s=0; 
	for(int i=0;i<n;i++){
		s+=a[0][i]+a[m-1][i]; 
	} 
	for(int j=1;j<m-1;j++){
		s+=a[j][0]+a[j][n-1] ;
	} 
	printf("\nTong cac phan tu bien la:%d",s); 	
} 
#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct HS{
	char ten[20];
	char truong[20];
	int diem;  
}; 
int main(){
	HS ds[100],t;
	int n;
	do{
		printf("n=");
		scanf("%d",&n); 
	} while(n<0);
	for(int i=1;i<=n;i++){
		printf("HO va Ten:");
		fflush(stdin);
		gets(ds[i].ten);
		printf("Diem:");
		scanf("%d",&ds[i].diem) ;
		printf("Truong:");
		fflush(stdin);
		gets(ds[i].truong); 
	    printf("\n"); 
	} 
	printf("%-5s%-20s%-10s%-20s","STT","Ten","Diem","Truong");
	printf("\n");
	for(int i=1;i<=n;i++){
		printf("%-5d%-20s%-10d%-20s",i,ds[i].ten,ds[i].diem,ds[i].truong);
		printf("\n"); 
	} 
	 int ta,tb,tc;
	 ta=tb=tc=0;
	 for(int i=1;i<=n;i++){
	 	if(strstr(strupr(ds[i].truong),strupr("A"))){
	 		ta+=ds[i].diem; 
		 }  
	 	if(strstr(strupr(ds[i].truong),strupr("B"))){
	 		tb+=ds[i].diem; 
		 }
		 if(strstr(strupr(ds[i].truong),strupr("C"))){
	 		tc+=ds[i].diem; 
		 }}
		 
	 	printf("\nTong diem truong A la:%d",ta); 
	 		printf("\nTong diem truong B la:%d",tb); 
	 			printf("\nTong diem truong C la:%d",tc); 
	  
	 int max=ta;
	 if(tb>max){
	 	max=tb; 
	 } 
	 if(tc>max){
	 	max=tc; 
	 } 
	 if(max==ta){
	 	printf("\nTruong A co tong diem cao nhat"); 
	 } 
	  if(max==tb){
	 	printf("\nTruong B co tong diem cao nhat"); 
	 } 
	  if(max==tc){
	 	printf("\nTruong C co tong diem cao nhat"); 
	 } 
	 for(int i=1;i<=n-1;i++){
	 	for(int j=i+1;j<=n;j++) {
	 		if(ds[i].diem>ds[j].diem){
	 			t = ds[i];
				 ds[i]=ds[j];
				 ds[j]=t; 
			 } 
		 }
	 }
	 printf("\nBa thi sinh co diem thap nhat la:\n");
	  	printf("%-5s%-20s%-10s%-20s","STT","Ten","Diem","Truong");
	printf("\n");
	 for(int i=1;i<=3;i++) 
	 {
	 printf("%-5d%-20s%-10d%-20s",i,ds[i].ten,ds[i].diem,ds[i].truong);
		printf("\n");
	 }	 
} 
#include<stdio.h> 
#include<math.h> 
#include<string.h> 
typedef struct CT{
	char Ten[20];
	int sbt;
	int sp;
	int st; 
}; 
int main(){
	CT ds[100];
	int n;
	do{
		printf("n=");
		scanf("%d",&n); 
	} while(n<0);
	for(int i=1;i<=n;i++){
		printf("Ho va Ten:");
		fflush(stdin);
		gets(ds[i].Ten);
		printf("So phut:");
		scanf("%d",&ds[i].sp);
		printf("So ban thang:");
		scanf("%d",&ds[i].sbt);
		printf("\n"); 
	} 
	printf("%-5s%-20s%-10s%-10s","STT","Ten","So phut","So BT");
	printf("\n"); 
	for(int i=1;i<=n;i++){
		printf("%-5d%-20s%-10d%-10d",i,ds[i].Ten,ds[i].sp,ds[i].sbt); 
	 printf("\n"); 
	}
	for(int i=1;i<=n;i++){
		if(ds[i].sp>500||ds[i].sbt>3){
			ds[i].st=2e6; 
		} 
		if(ds[i].sp>500&&ds[i].sbt>3){
			ds[i].st=5e6; 
		} 
	} 
	printf("%-5s%-20s%-10s%-10s%-10s","STT","Ten","So phut","So BT","So TT");
	printf("\n"); 
	for(int i=1;i<=n;i++){
		printf("%-5d%-20s%-10d%-10d%-10d",i,ds[i].Ten,ds[i].sp,ds[i].sbt,ds[i].st); 
	 printf("\n"); 
	}
     int  max=0;
	for(int i=1;i<=n;i++){
		if(ds[i].st>max){
			max=ds[i].st; 
		} 
	}
    for(int i=1;i<=n;i++){
    	if(ds[i].st==max){
    		printf("\nCau thu %s co tien thuong cao nhat doi!",ds[i].Ten); 
		} 
	}  
} 
#include<stdio.h>
#include<math.h>
 void nhapgaitri(int x[100],int &n){
 	printf("n=");
	 scanf("%d",&n);
	 for(int i=1;i<=n;i++){
	 	printf("a[%d]=",i);
		 scanf("%d",&x[i]); 
	 } 
 } 
void inmang(int x[100],int n){
	for(int i=1;i<=n;i++){
		printf("%d\t",x[i]); 
	} 
} 

main(){
	int a[100];
	int n; 
	int min=9e9; 
	nhapgaitri(a,n);
	inmang(a,n); 
	for(int i=1;i<=n-2;i++){
		if(a[i]*a[i+1]*a[i+2]<min){
			min=a[i]*a[i+1]*a[i+2]; 
		} 
	}
	for(int i=1;i<=n-2;i++){
		if(a[i]*a[i+1]*a[i+2]==min) {
			printf("\nBo ba so co tich nho nhat ll la:%d  %d  %d",a[i],a[i+1],a[i+2]); 
		}
	}
} 
#include<stdio.h>
#include<math.h>
void nhapmatran(int x[100][100],int &n){
	do{
		printf("n=");
		scanf("%d",&n); 
	} while(n<0) ;
	for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++){
	      printf("a[%d][%d]=",i,j);
		  scanf("%d",&x[i][j]);	
	   }		
	} 
} 
void inmatran(int x[100][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",x[i][j]); 
		} printf("\n"); 
	} 
} 
void kiemtra(int x[100][100],int n){
	int dem=0; 
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(x[i][j]!=0){
				dem++; 
			} 
		} 
	}
	 if(dem!=0){
	 	printf("\nDay khong phai ma tran tam giac duoi!"); 
	 } else{
	 	printf("\nDay la ma tran tam giac duoi!"); 
	 } 
} 
void tinh(int x[100][100],int n){
	int dem=0; 
	int tong=0;
	float tbc; 
	for(int i=0;i<n;i++){
			if(x[i][i]%2==0){
			    dem++;
				tong+=x[i][i];	
			} 
		}
		if(dem!=0){
		
		tbc=(float)tong/dem; 
      printf("\nGia tri Tbc cua cac pt chan tren cheo chinh:%.2f",tbc); 
  }
} 
int main(){
	int a[100][100],n;
	nhapmatran(a,n);
	inmatran(a,n);
	kiemtra(a,n) ;
	tinh(a,n); 
} 
#include<stdio.h>
#include<math.h>
int main(){
    int a[100],n;
	do{
		printf("n=");
		scanf("%d",&n); 
	}	while(n<=0);
	do{
		for(int i=1;i<=n;i++){
			printf("a[%d]=",i);
			scanf("%d",&a[i]); 
		} 
	} while(a[n]>0);
	for(int i=1;i<=n;i++){
		printf("%d\t",a[i]); 
	} 
	int max=-9e9;
	for(int i=1;i<=n;i++){
		if(a[i]<0){
			if(a[i]>max){
				max=a[i]; 
			} 
		} 
	}
	printf("\nGia tri am lon nhat la:%d",max) ;
} 
#include<stdio.h>
#include<math.h> 
#include<string.h>
typedef struct SV{
	char masv[10] ,ten[20];
	float dt,da,tin,dtr; 
}; 
int main(){
	SV ds[100];
	int n;
	do{
		printf("n=");
		scanf("%d",&n); 
	} while(n<0);
	for(int i=1;i<=n;i++){
		printf("Ma sinh vien:");
		fflush(stdin);
		gets(ds[i].masv);
		printf("Ho va Ten:");
		fflush(stdin);
		gets(ds[i].ten);
		printf("Diem Toan:");
		scanf("%f",&ds[i].dt);
		printf("Diem anh:");
		scanf("%f",&ds[i].da);
		printf("Diem tin:");
		scanf("%f",&ds[i].tin);
		printf("Diem triet:");
		scanf("%f",&ds[i].dtr);
		printf("\n"); 
	}
	printf("%-5s%-20s%-20s%-20s%-20s%-20s%-20s","STT","Ma SV","HO va Ten","Diem Toan","Diem anh","Diem tin","Diem triet"); 
	printf("\n");
	for(int i=1;i<=n;i++){
		printf("%-5d%-20s%-20s%-20f%-20f%-20f%-20f",i,ds[i].masv,ds[i].ten,ds[i].dt,ds[i].da,ds[i].tin,ds[i].dtr); 
	 printf("\n");
	 } 
	 printf("\nDanh sach hoc sinh bi thi lai:\n"); 
	 	printf("%-5s%-20s%-20s%-20s%-20s%-20s%-20s","STT","Ma SV","HO va Ten","Diem Toan","Diem anh","Diem tin","Diem triet"); 
	printf("\n");
	  for(int i=1;i<=n;i++){
	  	if(ds[i].da<5||ds[i].dt<5||ds[i].dtr<5||ds[i].tin<5) {
	  		 	printf("%-5d%-20s%-20s%-20f%-20f%-20f%-20f",i,ds[i].masv,ds[i].ten,ds[i].dt,ds[i].da,ds[i].tin,ds[i].dtr); 
	      printf("\n");
		  }
	  } 
	 char timten[20]; 
	 printf("\nNhap ten sinh vien can tim:");
	 fflush(stdin);
	 gets(timten);
	 printf("\nThong tin:\n") ;
	 printf("%-5s%-20s%-20s%-20s%-20s%-20s%-20s","STT","Ma SV","HO va Ten","Diem Toan","Diem anh","Diem tin","Diem triet"); 
	printf("\n");
	 for(int i=1;i<=n;i++){
	 	if(strstr(strupr(ds[i].ten),strupr(timten))){
	 		printf("%-5d%-20s%-20s%-20f%-20f%-20f%-20f",i,ds[i].masv,ds[i].ten,ds[i].dt,ds[i].da,ds[i].tin,ds[i].dtr); 
	      printf("\n");
		 } 
	 } 	 
} DE 1: 
#include<stdio.h>
#include<math.h>
 int main(){
 	int n;
 	int x[100],y[100]; 
	 float tong;
	 do{
	 	printf("n=");
		 scanf("%d",&n); 
	 } while(n<0);
	  for(int i=1;i<=n;i++){
	  	printf("(x%d,y%d)=",i,i) ;
	  	scanf("%d%d",&x[i],&y[i]); 
	  } 
	  for(int i=1;i<=n-1;i++){
	  	tong+=sqrt(pow(x[i+1]-x[i],2)+pow(y[i+1]-y[i],2)); 
	  } 
 	printf("\nDo dai duong gap khuc la:%.2f",tong) ;
 	int r;
 	int dem=0; 
	 printf("\nr=");
	 scanf("%d",&r) ;
	 printf("\nNhung diem thuoc trong duong tron la:") ;
	 for(int i=1;i<=n;i++){
	 	if(sqrt(pow(x[i],2)+pow(y[i],2))<r)
		 {
		 	printf("(x%d,y%d)\t",i,i); 
		 	dem++; 
		  } 
	 }
	 printf("\nCo %d diem nam trong duong tron",dem); 
	 float max=-9e9;
	 for(int i=1;i<=n;i++){
	 	if(sqrt(pow(x[i],2)+pow(y[i],2))>max){
	 		max= sqrt(pow(x[i],2)+pow(y[i],2));
		 } 
	 } 
	    float dt; 
 	    for(int i=1;i<=n;i++){
 		if(sqrt(pow(x[i],2)+pow(y[i],2))==max){
 			dt=(float)3.14*pow(max,2);
		 
		 } 
	 } 
 	printf("\nDien tich hinh tron nho nhat la:%f",dt); 	
 } 
#include<stdio.h>
#include<math.h>
int main(){
	int a[100][100];
	int m,n;
	do{
		printf("m,n=") ;
		scanf("%d%d",&m,&n); 
	} while(m<0||n<0);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]); 
		} 
	}
	 for(int i=0;i<m;i++){
	 	for(int j=0;j<n;j++){
	 		printf("%d\t",a[i][j]) ;
		 } printf("\n"); 
	 }
	 int tong=0;
	 for(int i=0;i<n;i=i+2){
	 	for(int j=0;j<m;j++){
	 		tong+=a[j][i]; 
		 } 
	 }
	 printf("\nTong cac phan tu cot le la:%d",tong); 
	 int dem;
	 int sum;
	 float tbc;
	 for(int i=0;i<m;i++) {
	 	for(int j=0;j<n;j++){
	 		if(a[i][j]>10&&a[i][j]%2==0){
	 			sum+=a[i][j];
				 dem++; 
			 } 
		 } 
	 }
	 tbc=(float)sum/dem;
	 printf("\nGia tri TBC la:%.2f",tbc);
	 int max=-9e9;
	 for(int i=0;i<m;i++){
	 	for(int j=0;j<n;j++){
	 		if(a[i][j]>max){
	 			max=a[i][j]; 
			 } 
		 } 
	 } 
	 printf("\nMax=%d",max); 	 
} De 2: 
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int x[100],y[100];
	do{
		printf("n=");
		scanf("%d",&n); 
	} while(n<0);
	for(int i=1;i<=n;i++){
		printf("(x%d,y%d)=",i,i);
		scanf("%d%d",&x[i],&y[i]); 
	}
	int dem=0;
	for(int i=1;i<=n;i++){
		if(x[i]<0&&y[i]>0){
			dem++; 
		} 
	}
	if(dem!=0){
		printf("\nSo diem thuoc phan tu thu 3 la:%d",dem); 
	} else{
		printf("\nkhong co diem nao thuoc ca"); 
	} 
    int z[100];
	for(int i=1;i<=n;i++){
		z[i]=sqrt(pow(x[i],2)+pow(y[i],2)); 
	} 
    int max=z[1]; 
     for(int i=1;i<=n;i++){
     	if(z[i]>max){
     	      max=z[i]; 
		 } 
	 }
	 printf("\nNhung diem xa goc toa do nhat la: ") ;
	 for(int i=1;i<=n;i++){
	 	if(z[i]==max){
	 		printf("  (%d,%d)\t",x[i],y[i]); 
		 } 
	 }
      int dem1=0;
	  for(int i=1;i<=n-1;i++){
	  	for(int j=i+1;j<=n;j++){
	  		if(y[i]*y[j]<0){
	  			dem1++; 
			  } 
		  } 
	  }
	  printf("\nso doan thang cat truc hoanh la:%d",dem1); 
} 
#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct QS{
	char ma[20];
	char Ten[20];
	char tentg[20];
	int tien; 
}; 

int main(){
	QS ds[100];
	int n;
	do{
		printf("n=");
		scanf("%d",&n);
	} while(n<0); 
	for(int i=1;i<=n;i++){
		printf("Ma Sach:");
		fflush(stdin);
		gets(ds[i].ma);
		printf("Ten Sach:");
		fflush(stdin);
		gets(ds[i].Ten);
		printf("Ten Tac Gia:");
		fflush(stdin);
		gets(ds[i].tentg);
		printf("Gia Tien:");
		scanf("%d",&ds[i].tien);
		printf("\n"); 
	} 
	printf("%-5s%-20s%-20s%-20s%-20s","STT","MA Sach","Ten Sach","Ten Tac Gia","Gia Tien");
	printf("\n");
	for(int i=1;i<=n;i++){
		printf("%-5d%-20s%-20s%-20s%-20d",i,ds[i].ma,ds[i].Ten,ds[i].tentg,ds[i].tien); 
		printf("\n"); 
	} 
	int max=-9e9; 
	for(int i=1;i<=n;i++){
		if(ds[i].tien>max){
			max=ds[i].tien; 
		} 
	} 
	printf("\nNhung quyen sach dat nhat la:") ;
	for(int i=1;i<=n;i++){
		if(ds[i].tien==max){
			printf("%s\t",ds[i].Ten); 
		} 
	} 
	int dem=0;
	for(int i=1;i<=n;i++){
		if(ds[i].tien>100){
			dem++; 
		} 
	}
	printf("\nCo %d cuon sach gia hon 100",dem); 	
} De 3 
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int a[100],z[100];
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]); 
	}
	float max=-9e9;
	for(int i=1;i<=n;i++){
		z[i]=a[i]/i; 
	} 
	for(int i=1;i<=n;i++){
		if(z[i]>max){
			max=z[i]; 
		} 
	} 
	int sum=0; 
	printf("\nMax=%.2f",max);
	for(int i=1;i<=n;i++){
		if(a[i]>0){
			sum+=a[i]; 
		} 
	}
	printf("\nTong=%d",sum);
	int x;
	int dem=0; 
	printf("\nX=");
	scanf("%d",&x); 
	printf("\nnhung so co abs lon hon xla:") ;
	for(int i=1;i<=n;i++){
		if(abs(a[i])>x){
			printf("%d\t",a[i]);
			dem++; 
		} 
	} 
	printf("\nCo %d so co abs lon hon x",dem); 	 
} 
#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct Sv{
	char mav[20],ten[20],truong[20];
	int diem; 
}; 

int main(){
	Sv ds[100];
	int n;
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("Ma SV:");
		fflush(stdin);
		gets(ds[i].mav);
		printf("Ten:");
		fflush(stdin);
		gets(ds[i].ten);
		printf("Truong(1/2/3):");
		fflush(stdin);
		gets(ds[i].truong); 
		 printf("Diem:");
		 scanf("%d",&ds[i].diem);
		 printf("\n"); 
	}
	printf("%-5s%-20s%-20s%-20s%-20s","STT","Ma SV","Ten","Truong","Diem");
	printf("\n");
	for(int i=1;i<=n;i++){
		printf("%-5d%-20s%-20s%-20s%-20d",i,ds[i].mav,ds[i].ten,ds[i].truong,ds[i].diem);
		printf("\n"); 
	} 
	int t1,t2,t3;
	t1=t2=t3=0;
	for(int i=1;i<=n;i++){
		if(strstr(strupr(ds[i].truong),strupr("1"))){
			t1+=ds[i].diem; 
		} 
		if(strstr(strupr(ds[i].truong),strupr("2"))){
			t2+=ds[i].diem; 
		} 
		if(strstr(strupr(ds[i].truong),strupr("3"))){
			t3+=ds[i].diem; 
		} 
	} 
	printf("\nTong diem truong 1 la:%d",t1);
		printf("\nTong diem truong 2 la:%d",t2);
			printf("\nTong diem truong 3 la:%d",t3);
	 int max=t1;
	 if(t2>max){
	 	max=t2; 
	 } 
	if(t3>max) {
		max=t3; 
	}
	if(max==t1){
		printf("\nTruong 1 co tong diem cao nhat"); 
	} 
	if(max==t2){
		printf("\nTruong 2 co tong diem cao nhat"); 
	} 
	if(max==t3){
		printf("\nTruong 3 co tong diem cao nhat"); 
	} 
	 char ten[20];
	 printf("\nNhap ten sv:");
	 fflush(stdin);
	 gets(ten);
	 printf("\nThong tin sv:\n"); 
	 	printf("%-5s%-20s%-20s%-20s%-20s","STT","Ma SV","Ten","Truong","Diem");
	printf("\n");
	 for(int i=1;i<=n;i++){
	 	if(strstr(strupr(ds[i].ten),strupr(ten))){
	 		printf("%-5d%-20s%-20s%-20s%-20d",i,ds[i].mav,ds[i].ten,ds[i].truong,ds[i].diem);
		 } 
	 } 
	 int max1=-9e9;
	 for(int i=1;i<=n;i++){
	 	if(ds[i].diem>max1){
	 		max1=ds[i].diem; 
		 } 
	 }
	 printf("\nSinh vien co diem cao nhat la:") ;
	 for(int i=1;i<=n;i++){
	 	if(ds[i].diem==max1){
	 		printf("%s",ds[i].ten); 
		 } 
	 }  
} De4 
#include<stdio.h>
#include<math.h>
int main(){
	int a[100],n;
	printf("n=");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]); 
	} 
	printf("P(x)=%d",a[0]);
	for(int i=1;i<=n;i++){
		printf("+%dx^%d",a[i],i); 
	} 
	int t=1;
	int p=0;
	int x;
	p=a[0]; 
	printf("\nx=");
	scanf("%d",&x);
	for(int i=1;i<=n;i++){
		t*=x;
		p+=a[i]*t; 
	} 
	printf("\n%d",p); 
	int t1=1;
	int p1;
	p1=a[1];
	for(int i=2;i<=n;i++){
		t1*=x;
		p1+=a[i]*t1*i ;
	} 
	printf("\n%d",p1); 
	float s;
	s=sqrt(2021+p+p1);
	printf("\nS=%.2f",s)	; 
} 
#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct SV{
	char mav[20],ten[20];
	int namsinh;
	float diem; 
}; 
int main(){
	SV ds[100];
	int n;
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("Ma sv:");
		fflush(stdin);
		gets(ds[i].mav);
		printf("Ten:");
		fflush(stdin);
		gets(ds[i].ten);
		printf("Nam sinh:");
		scanf("%d",&ds[i].namsinh);
		printf("Diem:");
		scanf("%f",&ds[i].diem); 
	    printf("\n"); 
	} 
	printf("%-5s%-20s%-20s%-20s%-20s","STT","Ma SV","Ten","nam sinh","Diem");
	printf("\n"); 
	for(int i=1;i<=n;i++){
		printf("%-5d%-20s%-20s%-20d%-20f",i,ds[i].mav,ds[i].ten,ds[i].namsinh,ds[i].diem);
		printf("\n"); 
	} 
	int min=9e9;
	for(int i=1;i<=n;i++){
		if(ds[i].namsinh<min){
			min=ds[i].namsinh; 
		} 
	} 
	printf("\nSinh vien co tuoi cao nhat la: ") ;
	for(int i=1;i<=n;i++){
		if(ds[i].namsinh==min){
			printf("%s",ds[i].ten); 
		} 
	} 
	char nhap[20];
	printf("\nNhap ma sinh vien can tim vao:") ;
	fflush(stdin);
	gets(nhap);
	printf("\nThong tin Sv:\n"); 
	printf("%-5s%-20s%-20s%-20s%-20s","STT","Ma SV","Ten","nam sinh","Diem");
	printf("\n"); 
	for(int i=1;i<=n;i++){
		if(strstr(strupr(ds[i].mav),strupr(nhap))) {
			printf("%-5d%-20s%-20s%-20d%-20f",i,ds[i].mav,ds[i].ten,ds[i].namsinh,ds[i].diem);
		}
	}
	float diemchuan;
	printf("\nNhap diem chuan vao:") ;
	scanf("%f",&diemchuan);
	printf("\nNhung sv trung tuyen la:\n"); 
	for(int i=1;i<=n;i++){
		if(ds[i].diem>diemchuan){
			printf("%s\n",ds[i].ten); 
		} 
	} 	 
} 
#include<stdio.h>
#include<math.h>
int main() 
{
	int x[100],y[100];
	int n;
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("(x%d,y%d)=",i,i);
		scanf("%d%d",&x[i],&y[i]); 
	} 
	int max=-9e9,min=9e9; 
	for(int i=1;i<=n;i++){
		if(x[i]>max){
			max=x[i]; 
		}
		if(x[i]<min) {
			min=x[i]; 
		}
	} 
    int max1=-9e9;
	int min1=9e9;
	for(int i=1;i<=n;i++){
		if(y[i]>max1){
			max1=y[i]; 
		} 
		if(y[i]<min1){
			min1=y[i]; 
		} 
	} 
	int CD,CR;
	CD=max-min;
	CR=max1-min1;
	int S;
	S=CD*CR;
	printf("\nDien tich hinh chu nhat la:%d",S); 	
}
#include<stdio.h>
#include<math.h>
int main(){
	 int a[100];
	 int n;
	 printf("n=");
	 scanf("%d",&n);
	 for(int i=1;i<=n;i++){
	 	printf("a[%d]=",i);
		 scanf("%d",&a[i]); 
	 }
	 int x;
	 printf("x=");
	 scanf("%d",&x);
	 for(int i=1;i<=n;i++){
	 	if(a[i]==x){
	 		printf("\nTon tai gia tri x trong day");
			 break; 
		 } 
	 }
	 for(int i=1;i<=n-1;i++){
	 	for(int j=i+1;j<=n;j++){
	 		if(a[i]<a[j]){
	 			int t=a[i];
				 a[i]=a[j];
				 a[j]=t; 
			 } 
		 } 
	 } 
	 printf("\nBa GTLN la: %d %d %d",a[1],a[2],a[3]) ;
	 int s=0; 
	 for(int i=1;i<=n-1;i++){
	 	s+=(a[i]+a[i+1])/(a[i]-a[i+1]); 
	 } 
	 printf("\nTong=%d",s); 	  
}
#include<stdio.h>
#include<math.h>
int main(){
	int a[100][100] ,m,n;
	printf("m,n=");
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("a[%d][%d]=",i,j) ;
			scanf("%d",&a[i][j]); 
		} 
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]); 
		} printf("\n"); 
	} 
	int dem=0; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=a[j][i]){
			dem++; 
			} 
		} 
	} 
	 if(dem==0){printf("\nMa tran doi xung"); 
	 } else{
	 	printf("\nMa tran khong doi xung"); 
	 } 

	for(int i=0;i<m;i++){
		int max=-9e9;
		for(int j=0;j<n;j++){
			if(a[i][j]>max){
				max=a[i][j]; 
			}
		
		}  	printf("\n%d",max); 
	} 	
} 
#include<stdio.h>
#include<math.h> 
#include<string.h>
typedef struct HS{
	char ten[20];
	char que[20];
	char truong[20];
	int sbd;
	int diem; 
}; 
int main(){
	HS ds[100],t;
	int n;
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("Ho va Ten:");
		fflush(stdin);
		gets(ds[i].ten);
		printf("Que Quan:") ;
		fflush(stdin);
		gets(ds[i].que);
		printf("Truong:");
		fflush(stdin);
		gets(ds[i].truong);
		printf("So bao danh:");
		scanf("%d",&ds[i].sbd);
		printf("Diem:");
		scanf("%d",&ds[i].diem);
		printf("\n"); 
		} 
		printf("%-5s%-20s%-20s%-20s%-20s%-20s","STT","Ten","Que","Truong","So bao danh","Diem");
		printf("\n");
		for(int i=1;i<=n;i++){
			printf("%-5d%-20s%-20s%-20s%-20d%-20d",i,ds[i].ten,ds[i].que,ds[i].truong,ds[i].sbd,ds[i].diem);
			printf("\n"); 
		} 
		printf("\nNhung hoc sinh co diem lon hon 15 la:"); 
		for(int i=1;i<=n;i++){
			if(ds[i].diem>=15){
				printf("\n%s",ds[i].ten); 
			} 
		} 
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(ds[i].diem<ds[j].diem){
					t=ds[i];
					ds[i]=ds[j];
					ds[j]=t; 
				} 
			} 
		} 
		printf("%-5s%-20s%-20s%-20s%-20s%-20s","STT","Ten","Que","Truong","So bao danh","Diem");
		printf("\n");
		for(int i=1;i<=n;i++){
			printf("%-5d%-20s%-20s%-20s%-20d%-20d",i,ds[i].ten,ds[i].que,ds[i].truong,ds[i].sbd,ds[i].diem);
			printf("\n"); 
		} 
		int dem=0,dem1=0,dem2=0;
		for(int i=1;i<=n;i++){
			if(strstr(strupr(ds[i].truong),strupr("A"))){
				dem++; 
			} 
				if(strstr(strupr(ds[i].truong),strupr("B"))){
				dem1++; 
			}
				if(strstr(strupr(ds[i].truong),strupr("C"))){
				dem2++; 
			}
		} 
		printf("\nSo thi sinh truong A du thi la:%d",dem);
		 	printf("\nSo thi sinh truong B du thi la:%d",dem1);
		 		printf("\nSo thi sinh truong C du thi la:%d",dem2);		
} 
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[100][100],m,n;
	do{
		printf("m,n=");
		scanf("%d%d",&m,&n); 
	} while(n<=0||m<=0);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		      printf("a[%d][%d]=",i,j);
			  scanf("%d",&a[i][j]); 
		} 
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]); 
		} printf("\n"); 
	} 
	int sum=0; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i+j==n-1){
				sum+=a[i][j]; 
			} 
		} 
	} 
	printf("\n%d",sum);
	int x[100][100]; 
	int k=n;
	int l=m;
	for(int i=0;i<k;i++){
		for(int j=0;j<l;j++){
			x[i][j]=a[j][i]; 
		} 
	} 
	printf("\nMa tran chuyen vi la:\n"); 
	for(int i=0;i<k;i++){
		for(int j=0;j<l;j++){
			printf("%d\t",x[i][j]); 
		} printf("\n"); 
	} 
	int h=m*n; 	
	for(int i=0;i<h-1;i++){
		for(int j=i+1;j<h;j++){
			if(a[i/n][i%n]<a[j/n][j%n]){
				int t= a[i/n][i%n];
				 a[i/n][i%n]=a[j/n][j%n];
				 a[j/n][j%n]=t; 
			} 
		} 
	} 
	printf("\nSap xep ma tran:\n") ;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]); 
		} printf("\n"); 
	} 
	
	
	
	
	
	
	
	
	
	
} 























