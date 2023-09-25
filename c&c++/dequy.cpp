#include<stdio.h>
#include<math.h>
double tinhgiaithua(int n){
	if(n==0){
		return 1; 
	} else 
	  return n*tinhgiaithua(n-1); 
} 

double tong(int n,int x){
   if(n==1){
   	return x; 
   } else 
    return pow(x,n)/tinhgiaithua(n) + tong(n-1,x) ;
} 
X0= 1
 Xn= X0+ X1+ 2X2+ ... + (n-1)Xn-1
double(int n){
	if(n==0){
		return 1 
	} else 
	  return n*x 
} 






main(){
	 int n,x; 
	 scanf("%d%d",&n,&x); 
	 printf("result:%.2f",tong(n,x)); 
} 
