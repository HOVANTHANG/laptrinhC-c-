#include<bits/stdc++.h>
#include<queue>
using namespace std;
//Hang doi
//kn quene ,la cau truc du lieu tuyen tinh,truu tuong,vao dau nay ra dau kia theo kieu first in first out(FIFO)
//push()
//pop()
//top()
//front()
//back()
//size
//empty
//Bai 1
/*int main(){
	queue<int> q;
	for(int x:{4,7,8,3}) q.push(x);
	cout<<"\nFirst :"<<q.front();
	cout<<"\nLast :"<<q.back();
	cout<<"\nSize:"<<q.size()<<endl;
	q.back()=10;
	q.front()=6;
	while(!q.empty()){
		cout<<q.front()<<" ";q.pop();
	}
}*/
int main(){
	queue<int> q;
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++) q.push(i);
	while(!q.size()>1){
		for(int i=1;i<=k-1;i++) q.push(q.front()),q.pop();
		 q.pop();
	}
	cout<<q.front();
}

