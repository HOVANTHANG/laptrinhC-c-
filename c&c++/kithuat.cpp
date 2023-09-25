#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100 
/*main(){
    int i,j,n,m,k;
	int a[MAX_SIZE],b[MAX_SIZE],c[MAX_SIZE];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); 
	} 
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]); 
	} 
	i=0;j=0;k=0;
	while(i<n&&j<m){
		c[k++]=a[i++];
		c[k++]=b[j++]; 
	} 
	while(i<n){
		c[k++]= a[i++]; 
	} 
	while(j<m){
		c[k++] = b[j++]; 
	} 
	for(int i=0;i<k;i++){
		printf("%d\t",c[i]); 
	} 
}
main(){
	int n,m,i,j,k,l;
	int a[MAX_SIZE],b[MAX_SIZE],c[MAX_SIZE];
	 scanf("%d%d",&n,&m);
	 for(int i=0;i<n;i++){
	 	scanf("%d",&a[i]); 
	 } 
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]); 
	} 
	i=0;j=0, k=0;
	while(i<n&&j<m){
		if(a[i]>b[j]){
			c[k++]=b[j++];
		} else
		   c[k++]=a[i++];
      	} 
	while(i<n){
		c[k++]=a[i++]; 
	} 
	while(j<m){
		c[k++]=b[j++]; 
	} 
	for(int i=0;i<k;i++){
		printf("%d",c[i]); 
	} 
} */
main(){
	int n,m;
	int a[MAX_SIZE] ,b[MAX_SIZE] ;
	
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); 
	} 
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]); 
	} 
	int cnt; 
   if(n==m){
   	  for(int i=0;i<n;i++){
   	  		if(a[i]!=b[n-i-1]){
   	  			cnt++; 
				 } 
				  }
    }else {
     printf("-1"); 
     }
	if(cnt==0){
	    printf("1") ;
	} else printf("0"); 
	
	
	
}
 
