#include<stdio.h>
#include<math.h>
int tinhtong(int x[100],int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=x[i]; 
	} return sum; 
}
int main(){
	int a[6]={22,45,67,8,9,10};
	int n=6; 
	printf("Ket qua la:%d",tinhtong(a,n)); 
} 
