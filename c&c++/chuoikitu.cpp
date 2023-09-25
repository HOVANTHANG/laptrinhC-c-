/*#include<stdio.h>
#include<math.h>
#include<string.h> 

main(){
	int n;
	char a[100]; 
	gets(a);
	int sum=0; 
	for(int i=0;i<strlen(a);i++){
		sum+= a[i]-'0'; 
	} 
	
	printf("%d",sum); 
}
main(){
	int n;
	scanf("%d",&n);
	switch(n){
		case 1:
		   printf("Janary");
		   break;
		 case 2:
		 printf("February");
		 break;  
		  case 3:
		   printf("March");
		   break;
		 case 4:
		 printf("April");
		 break;
		   case 5:
		   printf("May");
		   break;
		 case 6:
		 printf("June");
		 break;
		   case 7:
		   printf("July");
		   break;
		 case 8:
		 printf("August");
		 break; 
		  case 9:
		 printf("September");
		 break; 
		  case 10:
		 printf("Octorber");
		 break; 
		  case 11:
		 printf("November");
		 break; 
		  case 12:
		 printf("December");
		 break; 
		  default:
		  printf("Sai nhap lai"); 
	};	
} 
#include <stdio.h>
#include <string.h>

char* number_to_words(int number) {
    char *ones[] = {"", "mot ", "hai ", "ba ", "bon ", "nam ", "sau ", "bay ", "tam ", "chin "};
    char *tens[] = {"", "muoi ", "hai muoi ", "ba muoi ", "bon muoi ", "nam muoi ", "sáu muoi ", "bay muoi ", "tam muoi ", "chin muoi "};
    char *result = "";

    if (number == 0) {
        return "khong ";
    }
    if (number < 0) {
        strcat(result, "am ");
        number = -number;
    }

    if (number >= 1000000000) {
        strcat(result, number_to_words(number / 1000000000));
        strcat(result, "t? ");
        number %= 1000000000;
    }

    if (number >= 1000000) {
        strcat(result, number_to_words(number / 1000000));
        strcat(result, "tri?u ");
        number %= 1000000;
    }

    if (number >= 1000) {
        strcat(result, number_to_words(number / 1000));
        strcat(result, "ngh?n ");
        number %= 1000;
    }

    if (number >= 100) {
        strcat(result, ones[number / 100]);
        strcat(result, "trãm ");
        number %= 100;
    }

    if (number >= 10) {
        if (number < 20) {
            strcat(result, tens[number % 10 + 1]);
            return result;
        } else {
            strcat(result, tens[number / 10]);
            number %= 10;
        }
    }

    if (number > 0) {
        strcat(result, ones[number]);
    }

    return result;
}

int main() {
    int number = 1234;
    printf("%s\n", number_to_words(number));
    return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
#include<string.h> 

void strrev2(char *c) {
	if(*c=='\0'){
		return ; 
	} 
	strrev2(c+1);
	printf("%c",*c); 	
}
main(){
	char c[50];
	gets(c); 
	strrev2(c); 
} 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int strcmp1(char c[],char d[]){
     int n1=strlen(c);
	 int n2=strlen(d);
	 for(int i=0;i<n1;i++){
	 	if(c[i]!=d[i]){
	 		if(c[i]>d[i]){
	 			return 1;
			 }else return -1;
		 }
	 }	
	if(n1==n2){
		return 0;
	} else if(n1<n2){
		return -1;
	}

}
main(){
	char c[50];
	gets(c);
	for(int i=0;i<strlen(c)-1;i++){
		for(int j=i+1;j<strlen(c);j++){
			strcmp1(c[i],c[j]);
			
		}
	}
}*/




















