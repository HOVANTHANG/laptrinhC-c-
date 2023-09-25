/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

main(){
	int n;cin>>n;
	int x,y;

	while(n--){
		ll k=0; 
		cin>>x>>y;
		for(int i=x;i<=y;i++){
		   for(int j=1;j<=i;j++){
		   	      if(i%j==0 && j%2==1){
		   	         	k+=j; 
					 } 
		   } 
		   cout<<k<<endl; 
		} 
		
	} 	
} 
*/
/*#include<stdio.h>
#include<math.h>
main(){
	int n,k;
	scanf("%d",&n);
    if(n%9==0){
    	k=n/9; 
	} else 
	k = n/9 +1; 
	printf("%d",k); 	
} */
/*#include<stdio.h>
#include<math.h>
main(){
    int r;
	scanf("%d",&r);
	float x = 3.14*pow(r,2);
	int k = sqrt(x);
	if(x-pow(k,2)>x-pow(k+1,2)){
		printf("%d",k+1); 
	} else 
	printf("%d",k); 
	
	 
} */
/*#include<stdio.h>
#include<math.h>
main(){
	int a[8];
	for(int i=1;i<=8;i++){
		scanf("%d",&a[i]); 
	} 
	int cnt=0;
	for(int i=2;i<=8;i++){
		if(a[i-1]<a[i]){
			cnt++; 
		} 
	}
	if(cnt==7){
		printf("TANG"); 
	} else if(cnt==0){
		printf("GIAM"); 
	} else{
	   printf("KHONGBIET"); 
  } 
}
*/
#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	int m= s.length()/2;
     int cnt=0; 
		for(int i=0;i<m;i++){
			if(s[i]==s[m+i]){
				cnt++; 
			} 
		}
		if(s.length()%2==1){
			cout<<"NO" ;
		} else  
		    if(cnt==m){
			cout<<"YES"; 
		} else 
		cout<<"NO"; 
} 





