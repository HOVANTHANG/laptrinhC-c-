#include<bits/stdc++.h>
using namespace std;
/*main(){
	string s;int x;
	cin>>s>>x;
	int cnt=0; 
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='0'){
			cnt++; 
		} else {
		break;
		}
		if(cnt>=x){
			break; 
		} 
	} 
	
	if(cnt>=x){
		cout<<"YES"; 
	} else cout<<"NO"; 
}*/
/*main(){
	string s;
	cin>>s;
	int sum=0; 
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='0'){
			sum+=0; 
		} else {
			sum+=1*pow(2,s.length()-1-i); 
		} 
	} 
	if(sum%5==0){
		cout<<"YES"; 
	} else cout<<"NO"; */
/*main(){
	string s;
	int m;
	cin>>s>>m;
	int r=0; 
	for(int i=0;i<s.length();i++){
            r=r*10 +(s[i]-'0');
			 r%=m; 
	} 
	cout<<r;
}	*/
/*int gcd(int a,int b){
    if(a==0){
    	return b; 
	} else{
		if(a>b) 
		return gcd(b,a-b);
		if(b>a) 
		return gcd(b,b-a); 	
	} 
		
} */
/*int gcd(int a,int b){
	
	if(a%b==0){
		return b; 
	} else {
		if(a>b)
		  return gcd(b,a%b);
		  if(a<b)
		  return gcd(b%a,a); 
	}	
} 
*/
/*int gcd(int a,int b){
	int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r ;
	} 
	return a; 
} */
main(){
	int n;cin>>n;
	int a[100];
	int q;
	int l;
    
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	cin>>q;
	 while(q--){
	 		set<int> se; 
	     	cin>>l;
		 for(int i=l-1;i<n;i++){
		 	  se.insert(a[i]); 
		 } 
           cout<<se.size()<<endl; 
	  } 
} 
	
	

