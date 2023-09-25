#include<stdio.h>
#include<math.h>

/*int snt(int n){
	int res;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			res=i;
			n/=i; 
		} 
	}
	if(n!=1){
		res=n; 
	} 
	return res; 
	
}
main(){
	int n;
	scanf("%d",&n);
	printf("Ket qua:%d",snt(n)) ;	
} 
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
	     int cnt=0;
		 while(n%i==0){
		 	++cnt;
			 n/=i; 
		 } 
	
	if(cnt>=2) {
		return 1; 
	}
    return 0; 
}
}
int sodep(int n){
	int ok=0; 
	for(int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(n%i==0){
			++cnt;
			n/=i; 
		}
		if(cnt==1){
			return 0; 
		} 
		if(cnt>=2){
			ok=1; 
		} 
	}
	
	if(n!=1){
		return 0; 
	} 
	return ok; 
} 
main(){
       int a,b;
	   scanf("%d%d",&a,&b);
	      	printf("\n"); 
	   for(int i=a;i<=b;i++){
	   	    if(snt(i)) {
	   	    	printf("%d\t",i) ;
			   }
	   } 
	   printf("\n"); 
	   for(int i=a;i<=b;i++){
	   	    if(sodep(i)) {
	   	    	printf("%d\t",i) ;
			   }
	   } 
} 
int sothuannghich(long long n){
	int res; 
	long long m=n; 
	while(n!=0){
	   int a=n%10; 
	    res = res*10+a ;
	   n/=10;  
	}

	if(res==m){
		printf("YES"); 
	} else 
	printf("NO"); 
} 
main(){
	long long n;
	scanf("%d",&n); 
	sothuannghich(n);
} 
int sochinhphuong(long long n){
	int  m = sqrt(n);
	if(m*m==n){
	   return 1; 
	}else 
	return 0; 
	 
} 

main(){
	long long a,b;
	scanf("%d%d",&a,&b);
	printf("\n"); 
	for(int i=a;i<=b;i++){
		if(sochinhphuong(i)){
			printf("%d\t",i); 
		} 
	} 
} 
int usn(int n){
	int count=0; 
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i!=n/i) {
			count+=2; 
			}else 
			  count++; 
		} 
	} 
	return count; 
} 
 main(){
 	long long  n;
	 scanf("%d",&n);
	printf("result:%d",usn(n)); 
 } 
int sohoanhao(int n){
	int sum=1; 
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(i!=n/i){
				sum+=(i+(int)n/i); 
			} else sum+=i ;
		} 
	}
	if(sum==n)
		return 1; 
	return 0; 
} 
 
 
 
main(){
	int  n;
	scanf("%d",&n) ;
	if(sohoanhao(n)==1){
		printf("Yes"); 
	} 
}  
int tong(long long n){
	int  sum=0; 
	while(n!=0){
		int a = n%10;
		sum+=a; 
		n/=10; 
	} 
	return sum; 
	
} 
main(){
  long long n;
  scanf("%d",&n); 
  printf("Result :%d",tong(n)) ;
} 
int fibo(int n){
	if(n==1 || n==2)
		return 1; 
	 return fibo(n-1)+fibo(n-2); 
} 

main(){
	int n; 
	scanf("%d",&n);
	for(int i=1;i<=n;i++) 
	printf("%d\t",fibo(i)) ;
} 
int checkfibo(int n){
	if(n==0||n==1){
		return 1; 
	} 
	long long fn1=1,fn2 =0;
	for(int i=3;i<=93;i++){
		long long fn = fn1+fn2;
		if(n==fn)
		return 1; 
		fn2= fn1;  
		fn1 = fn;
		
	} return 0; 
	 
} 
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0; 
		} return n>1; 
	} 	
} 
int tongcacso(int n){
	int sum=0; 
	while(n!=0){
		sum = sum+ n%10 ;
		n/=10; 
	} 
	return checkfibo(sum); 
} 
main(){
	int a,b; 
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(snt(i) && tongcacso(i)){
			printf("%d\t",i) ;
		} 
	} 
} 
int sothuannghich(long long n){
	long long m=n; 
	long long res; 
       while(n!=0){
       	  int a = n%10; 
       	  res = res*10 + a;
			 n/=10; 
	   }	
	   if(res==m){
	   	  return 1; 
	   }else return 0; 
	  
} 
int songuyento(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0; 
		} return n>1; 
	} 
} 
int timso(int n){
	int count=0;
	for(int i=1;i<=sqrt(n);i++){
	   if(n%i==0 && songuyento(i)) 
	   count++;    
		 } 
	return count>=3; 
}

main(){
	 long long a,b;
	 scanf("%lld%lld",&a,&b);
	 for(int i=a;i<=b;i++) {
	 	if(timso(i) && sothuannghich(i)){
	 		printf("%d\t",i); 
		 } 
	 }
	 
	
} 
main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("*"); 
		} printf("\n"); 
	} 
	printf("  \n           .* * * * .   . * * * *.            ");
	printf("  \n        .*            .            *.         ") ;
	printf("  \n      .*                              *.      ");
	printf("  \n      .                                 .      ") ;
	printf("  \n      .                                 .      ") ;
	printf("  \n       *                                *      ") ;
	printf("  \n        *.                            .*       ");
	printf("  \n          *.                        .*         ") ;
	printf("  \n            *.                    .*           ") ;
	printf("  \n              *.                .*             ") ;
	printf("  \n                *.            .*               ") ;
	printf("  \n                  *.        .*                 ") ;
	printf("  \n                     *.   .*                   ") ;
	printf("  \n                       .*.                     ") ;
} 
*/
main(){
	int n,m,p;
	int a[n][m],b[m][p],c[n][p]; 
	scanf("%d%d%d",&n,&m,&p); 
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("a[%d][%d]=",i,j); 
			scanf("%d",&a[i][j]); 
		} 
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			printf("b[%d][%d]=",i,j); 
			scanf("%d",&b[i][j]); 
		} 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			for(int k=0;k<m;k++){
				c[i][j] += a[k][j] * b[i][k]; 
			} 
		} 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			printf("%d\t",c[i][j]); 
		}printf("\n"); 
	} 
} 




