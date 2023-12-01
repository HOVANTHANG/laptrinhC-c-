#include<bits/stdc++.h>
using namespace std;

struct Node {
  Node * links[2];

  bool containsKey(int ind) {
    return (links[ind] != NULL);
  }
  Node * get(int ind) {
    return links[ind];
  }
  void put(int ind, Node * node) {
    links[ind] = node;
  }
};
class Trie {
  private: Node * root;
  public:
    Trie() {
      root = new Node();
    }

  public:
    void insert(int num) {
      Node * node = root;
      for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (!node -> containsKey(bit)) {
          node->put(bit, new Node());
        }
        node = node->get(bit);
      }
    }
  public:
    int findMax(int num) {
      Node * node = root;
      int maxNum = 0;
      for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (node->containsKey(!bit)) {
          maxNum = maxNum | (1 << i);
          node = node->get(!bit);
        } else {
          node = node->get(bit);
        }
      }
      return maxNum;
    }
};
void maxXor(int n,int *a,int m,int *b){
	Trie trie;
	cout<<"Nhap so phan tu mang 1:";cin>>n; 
	a = new int[n+5]; 
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		trie.insert(a[i]); 
	} 
	cout<<"\nNhap so phan tu mang 2:";cin>>m;b= new int [m+5]; 
	for(int i=1;i<=m;i++){
		cin>>b[i]; 
	} 
	int maxor=0; 
	for(int i=1;i<=m;i++){
		maxor=max(maxor,trie.findMax(b[i])); 
	} 
	cout<<"\nMax=";cout<<maxor; 
} 
int main() {
  int n,m,*a,*b;
  maxXor(n,a,m,b); 
}
