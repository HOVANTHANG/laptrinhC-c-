#include<stdio.h>
#include<math.h>

int timmax(int n){
	int res;
	for(int i=2;i<=sqrt(n);i++){
             while(n%i==0){
             	res=i;
             	n/=i;
			 }		
	}
	printf("n=%d",n);
	if(n!=1){
	   res=n;
	}
		return res;
      
}

 main(){
 	int n;
 	printf("n=");
 	scanf("%d",&n);
 	printf("Ket qua:%d",timmax(n));
 }
