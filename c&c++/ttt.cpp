#include<bits/stdc++.h>
using namespace std;
main(){
	int q;
	cin>>q;
	while(q--){
		int n;int a[n]; 
		cin>>n;	int cnt=0; 
		int ans=0; 
		for(int i=0;i<n;i++){
			cin>>a[i]; 
			if(a[i]<0){
				cnt+=abs(a[i])-1;
				ans++; 
			} else {
				cnt+=abs(a[i]-1); 
            }
		} 
		if(ans%2==1){
			cnt+=2; 
		}
		cout<<cnt<<endl;		 
	} 
} 
