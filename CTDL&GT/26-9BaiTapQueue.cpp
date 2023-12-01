#include<bits/stdc++.h>
#include "QUEUEmangdong.cpp"
using namespace std;
/*int main(){
	int n;
	queue<string> q;
	for(auto x:{"dangdungcntt","tienquanutc","quang123","maianh","nguyenminhduc2820"})
	q.push(x);
	cin>>n;
	while(--n){
		q.push(q.front());
		q.push(q.front());
		q.pop();
	}
	cout<<q.front();
}*/
void sol(){
	int n;
	cin>>n;
    QUEUE<pair<string,int>> q;
    for(auto x:{"dangdungcntt","tienquanutc","quang123","maianh","nguyenminhduc2820"})
    q.push({x,1});//q.push(pair(x,1));
    while(n>q.front().second){
    	q.push(q.front());
    	q.back().second*=2;
    	n-=q.front().second;
    	q.pop();
	}
	cout<<q.front().first<<"\n";
}

int main(){
	int test;
	cin>>test;
	while(test--) sol();
}
