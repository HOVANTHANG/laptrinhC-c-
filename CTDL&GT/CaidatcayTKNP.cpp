#include<bits/stdc++.h>
using namespace std;

template<class T>

struct node{
    T elem;
    node *left, *right;
    node(T e, node<T>*L = 0, node<T>*R = 0){
        elem = e;
        left = L;
        right = R;
    }

};

template<class T, class K>
void add(node<T>*&H, T x, K cmp){
    if(H == 0) H = new node<int>(x);
    else if(H->elem == x) return; //V?i set (kh?ng ch?p nh?n b?ng)
    else add(cmp(x, H->elem)?H->left:H->right,x, cmp);
}

template<class T, class K>
node<T> *find(node<T>*H, T x, K cmp){
    if(!H or H->elem == x) return H;
    return find(cmp(x, H->elem)?H->left:H->right, x, cmp);
}

template<class T>
T Max(node<T> *H){
    // return H->right ? Max(H->right) : H->elem;

    while(H->right){
        H = H->right;
    }
    return H->elem;
}

template<class T, class K>
void remove(node<T>*&H, T x, K cmp){
    if(!H) return;
    if(H->elem == x){
        node<T>*p=H;
        if(!H->left){ 
            H = H->right;
            delete p;
        }
        else if(!H->right) { 
            H = H->left;
            delete p;
        }
        else{
            H->elem = Max(H->left);
            remove(H->left, H->elem, cmp);
        }
        
    }
    else {
            remove(cmp(x,H->elem)?H->left:H->right,x);
        }
}

template<class T>
void PRINT(node<T>*H, string p = "\n"){ //D?ng khi ch?a c? b? l?p
    if(!H) return;
    PRINT(H->left, p+"\t");
    cout << p << H->elem;
    PRINT(H->right, p+"\t");
}

template<class T, class K>
void inorder(node<T>*H, list<T>&L, K cmp){
    if(H){
        inorder(H->left, L, cmp);
        L.push_back(H->elem);
        inorder(H->right, L, cmp);
    }
}

template<class T, class K>
struct SET{
    node<T> *root = 0;
    int n;
    K cmp;
    SET(){
        root = 0;
        n = 0;
    }
    int size(){
        return n;
    }
    bool empty(){return n==0;}
    void insert(T x){
        if(!find(root, x, cmp)){
            n++;
            add(root, x, cmp);
        }
    }
    void erase(T x){
        if(find(root, x)){
            n--;
            remove(root, x, cmp);
        }
    }
    list<T> L;
    typedef typename list<T>::iterator iterator;
    iterator begin(){
        L.clear();
        inorder(root, L, cmp);
        return L.begin();
    }
    iterator end(){
        return L.end();
    }
};

int main(){
     node<int> *root = 0;
     for(int x:{25,46,425, 20, 86,155}) add(root, x);
     PRINT(root);

    /*SET<int, less<int>> S;
    for(int x:{542,54,356,23,64,23,3,54,61,2,54,326,423}) S.insert(x);
    for(auto s:S) cout << s <<" ";*/
}


