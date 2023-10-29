#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n;
	cin>>n>>k;
	int a[n];
	  for(auto &x:a) cin>>x;
      sort(a,a+n,greater<int>());
      for(auto x:a) cout<<x<<" ";
      queue<int> q;
      int res=0;
      for(int i=0;i<n;i++){
	  q.push(a[i]);
	  if(q.front()>=a[i]+k) q.pop();else res+=a[i];
	  }
	  cout<<"\n"<<q.size()<<" "<<res<<endl;
      
}


