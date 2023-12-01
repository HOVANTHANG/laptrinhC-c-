#include<bits/stdc++.h>
#include<vector>
using namespace std;
//Nhan hai so lon
/*int main(){
	string x,y;
	cin>>x>>y;
	vector<int> A,B,C;
	reverse(x.begin(),x.end()); for(char c:x) A.push_back(c-'0'); 
	reverse(y.begin(),y.end()); for(char c:y) B.push_back(c-'0'); 
	C.resize(A.size()+B.size()-1,0);
	for(int i=0;i<A.size();i++)
	for(int j=0;j<B.size();j++) C[i+j]+=A[i]*B[j];
	long long M=0;
	for(auto &c:C){
		M+=c;
		c=M%10;
		M/=10;
	}
	for(;M>0;M/=10){
        C.push_back(M%10);
	}
	for(auto it=C.rbegin();it!=C.rend();it++) cout<<*it;
}
*/
//cho 1 so can xoa K chu so sao cho duoc so lon nhat
int main(){
    string x;
    int k;
    cin>>x>>k;
    string V ;//vector<char> V;
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
}










