#include<stdio.h>
#include<math.h>
/*int sohoanhao(int n){
	int sum=1; 
	for(int i=2;i<n;i++){
		if(n%i==0){
			sum+=i; 
		} 
	} 
	if(sum==n){
		return 1; 
	} return 0; 
}

int dem(int n){
	int count=0; 
	while(n!=0){
		count++;
		n/=10; 
	} return count; 
} 


int soarmstrong(int n){
	int x = dem(n);
	int tmp =n;
	int sum; 
	while(n!=0){
		int res = n%10;
		 sum = sum + pow(res,x);
		n/=10; 
	} 
	if(sum==tmp){
	   return 1; 
	   } return 0; 
} 
main(){ 
	 int a,b;
	 scanf("%d%d",&a,&b);
//	 for(int i=a;i<=b;i++){
//	 	if(sohoanhao(i))
//		 printf("%d\t",i); 
//	 } 
	 for(int i=a;i<=b;i++){
	 	if(soarmstrong(i)) 
	 	printf("%d\t",i); 
	 } 
} */
main(){
	int a[100];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("a[%d]=",i);
		printf("%d",&a[i]); 
	} 
	} 
	
	
	
	
	
	
	
	
	
	
	
	
	 



