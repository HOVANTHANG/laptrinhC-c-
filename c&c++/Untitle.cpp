#include<stdio.h>
#include<math.h>
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0; 
		} return 1; 
	} 
} 
main(){
	int n;
	scanf("%d",&n);
	if(snt(n)==1){
		printf("La so nguyen to"); 
	} else{
		printf("khong phai so nguyen to"); 
	} 
} 
