/*#include<stdio.h>
#include<math.h>
#include<string.h> 
main(){
	char s[30]; 
	printf("Nhap chuoi ki tu vao:");
	gets(s);
	printf("chuoi dao nguoc:%s",strrev(s)); 
} 
#include<stdio.h>
#include<string.h> 
void  daochuoi(char *s1,char *s2){
      strcpy(s2,strrev(s1)); 
}
main(){
	char s1[30]; 
	char s2[30]; 
	printf("Nhap chuoi ki tu vao:");
	gets(s1);
	daochuoi(s1,s2); 
		printf("\n%s",s2); 
} 
#include<stdio.h>
#include<math.h>
#include<string.h> 
void daochuoi(char *s){
      if(*s=='\0'){
      	return ; 
	  } 
	  daochuoi(s+1);
	  printf("%c",*s); 
} 
main(){
	char s[30]; 
	printf("Nhap chuoi:");
	gets(s); 
	daochuoi(s); 

} 
#include<math.h>
#include<stdio.h>
main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int sum=0;
	while(n!=0){
		int r= n%10;
		sum+=r;
		n/=10 ;
	} 
	printf("%d",sum); 
} 
#include<stdio.h>
#include<math.h>
int tongcacchuso(char *s){
	if(*s=='\0'){
		return 0; 
	} 	
 int sum=tongcacchuso(s+1); 
	if(*s=='0'){
        sum=sum+0; 
	} else if(*s=='1') {
	 sum+=1; 
	} else if(*s=='2') {
		 sum+=2; 
	} else if(*s=='3') {
		sum+=3; 
	} else if(*s=='4') {
		sum+=4; 
	} else if(*s=='5') {
		sum+=5; 
	} else if(*s=='6') {
		sum+=6; 
	} else if(*s=='7') {
		sum+=7; 
	} else if(*s=='8') {
		sum+=8; 
	} else if(*s=='9') {
		sum+=9; 
	} 
	return sum; 	
} 
main(){
	char s[30];
	printf("Nhap chuoi ki tu:");
	gets(s); 
	printf("\nKet qua la:%d",tongcacchuso(s)); 
} */














