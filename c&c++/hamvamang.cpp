#include<math.h>
#include<stdio.h>
/*bai1 int checksort(int a[],int &n) {
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	     scanf("%d",&a[i]);	
	} 
	int cnt=0; 
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			++cnt; 
		} 
	}
	if(cnt==0){
		return 1; 
	} else if(cnt==n-1){
		return -1; 
	} 	
	for(int i=0;i<n-2;i++){
		if((a[i]<a[i+1]&&a[i+1]>a[i+2])||(a[i]>a[i+1]&&a[i+1]<a[i+2])){
			return 0; 
		} 
	} 
}
/*main(){
	//int b[100];
	//int n;
   //	printf("%d",checksort(b,n)); 
	int n;
	int a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]) ;
	} 
   int result = xoavitritrung(a,n); 
   if(result){
   	   printf("trong mang co it nhat 1 vi tri trung") ;
   } else 
   printf("Trong mang khong co vi tri trung"); 
   
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]); 
	} 
} bai2 
int xoamangtaivitri(int x[],int &n,int vitri){
	for(int i=vitri;i<n-1;i++){
	     x[i]=x[i+1]; 
	} n--; 
} 
int xoamangvitritrung(int x[],int &n){
	int dem=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			while(x[i]==x[j]){
				xoamangtaivitri(x,n,j); 
			} 
		} 
	} 
} 
main(){
	int n;
	int a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); 
	} 
	xoamangvitritrung(a,n);
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]); 
	} 	
} */

void nhapmatran(int *x,int *m,int *n){
	printf("m,n=");
	scanf("%d%d",m,n);
	for(int i=0;i<*m;i++){
		for(int j=0;j<*n;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",x+100*i+j);
		}
	}
}
void nhapmatran1(int *y,int *n,int *p){
	printf("n,p=");
	scanf("%d%d",n,p);
	for(int i=0;i<*n;i++){
		for(int j=0;j<*p;j++){
			printf("b[%d][%d]=",i,j);
			scanf("%d",y+100*i+j);
		}
	}
}
void xuatmatran(int *y,int *n,int *p){
	for(int i=0;i<*n;i++){
		for(int j=0;j<*p;j++){
			printf("%d\t",*(y+100*i+j));
		}printf("\n");
	}
}
void xuatmatran1(int *x,int *m,int *n){
	for(int i=0;i<*m;i++){
		for(int j=0;j<*n;j++){
			printf("%d\t",*(x+100*i+j));
		}printf("\n");
	}
}
void matrantich(int *x,int *y,int *z,int *m,int*n,int*p){
	int sum=0; 
	int i,j,k;
       	for (i = 0; i < m; i++)
    {
        for (k = 0; k < p; k++)
        {
            sum = 0;
            for (j = 0; j < n; j++)
            {
                sum += Arra[i][j] * Arrb[j][k];
            }
            Arrc[i][k] = sum;
        }
    }
		printf("\nMa tran tich :\n");
		for(int i=0;i<*m;i++){
        	for(int j=0;j<*p;j++){
        	  printf("%d\t",*(z+100*i+j));
			}printf("\n");
		}	
}
main(){
	int a[100][100],b[100][100],c[100][100],m,n,p;
	nhapmatran((int*)a,&m,&n);
	nhapmatran1((int*)b,&n,&p);
	xuatmatran1((int*)a,&m,&n);
	xuatmatran((int*)b,&m,&n);
	matrantich((int*)a,(int*)b,(int*)c,&m,&n,&p);
}























