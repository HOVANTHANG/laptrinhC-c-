#include<stdio.h>
#include<math.h>
int ucln(int a,int b){
	if(b==0){
		return a; 
	} 
	return ucln(b,a%b) ;
} 
int bcnn(int a,int b){
	return a*b/ucln(a,b); 
} 
int checkPalindrome(int n){
	int tmp=n; 
	int sum; 
	while(n!=0){
		 sum = sum*10 +n%10;
		n/=10; 
	} return sum==tmp; 
}  
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%2==0){
			return 0; 
		} 
	} return checkPalindrome(n); 
} 
int snt2(int n){
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			printf("%d\t",i);
			n/=i; 
		} 
	} if(n!=1){
		printf("%d",n); 
	} 
} 

main(){
//	printf("check:%d",ucln(25,15)); 
//	printf("\ncheck:%d",bcnn(25,15)); 
///	printf("\ncheck:%d",checkPalindrome(2222)); 
	
//	int n;
//	scanf("%d",&n);
///	for(int i=0;i<=n;i++){
//		if(snt(i)){
//			printf("%d\t",i) ;
//		} 
//	}
 //    int n;
//	 scanf("%d",&n);
//	 snt2(n); 
	 
	 
	 
	  	
} 
