#include<bits/stdc++.h>
#include<vector> 
using namespace std;
/*int main() {
	long long n;
	cin>>n;
	 long long result =1;
	int dem=0;
	while(result<n) {
		result+=result;
		dem++; 
	}
	cout<<dem; 
	 
}*/

/*int main() {
	int n; 
	int dem=0; 
	vector<int> V; 
	while(cin>>n) {
		V.push_back(n);
	}
	int result=0; 
	int k=10e9; 
	for(int i=1;i<V.size();i++) {
		if(V[i]-V[i-1]<k) k=V[i]-V[i-1]; 
	}
	if(V.front()<V.back()) {
		result = ceil((float)V.back()/k)- V.size() ; 
	}else {
			result = ceil((float)V.front()/k)- V.size() ; 
	} 
	cout<<result; 
	 
}*/
/*int main() {
	int n;
	int mod = 1000000007; 
	cin>>n;
	int result=1; 
	for(int i=1;i<=n;i++) {
		result=(result*i) % mod; 
	}
	int c[9] ={};
		int k=9; 
	while(result>0 && k>0){
		c[k]=result%10;
		result/=10; 
		k--; 
	}
	for(int i=1;i<=9;i++) {
		cout<<c[i];
	}

}*/
/*int main(){
    string x;
    int n;
    cin>>x>>n;
    while(n--){
    	string V; 
   	//vector<char> V;
	int k;
	cin>>k; 
    for(char c:x){
    	while(V.size()>0 && V.back()<c && k>0){
    		V.pop_back();
    		k--;
		}
		V.push_back(c);
	}
	while(k--) V.pop_back();
   // for(auto v:V) cout<<v;
     cout<<V;
     cout<<"\n" ;
}
}*/
int main() {
	int x,y,z;
	cin>>x>>y>>z;
	int result=0; 
	result=(abs((x+y+z)/3 - x)+abs((x+y+z)/3 - y) + abs((x+y+z)/3 - z)) ;
	cout<<result; 
}

