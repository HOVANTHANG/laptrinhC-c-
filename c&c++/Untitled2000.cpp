#include<stdio.h>
#include<stdlib.h>
main(){
	FILE *f;
	int a[100];
	f=fopen("dayso2.txt","rt");
	
	if(f=NULL){
		perror("xay ra loi");
		return -1;
	}
	
	while(!feof(f)){
		    fscanf(f,"%d",a); 
	}
	
}
