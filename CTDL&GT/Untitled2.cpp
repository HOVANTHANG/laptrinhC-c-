//Cai ??t vector
#include<bits/stdc++.h>
using namespace std;

template<class T>

class VECTOR{
    int n, cap;
    T *buf;
    void expand(int new_cap){ //M? r?ng b? nh?
        if(new_cap < cap) return;
        T *tem = buf;
        cap = new_cap;
        buf = new T[cap];
        for(int i=0; i<n; i++){
            buf[i] = tem[i];
        }
        if(tem) delete []tem;
    }
    public:
        
        VECTOR(){
            n = cap = 0; 
            buf = NULL;
        }

        ~VECTOR(){
            if(buf) delete[]buf;
        }
        int size(){
            return n;
        }

        bool empty(){
            return n==0;
        }

        void push_back(T x){
            if(n==cap){
                expand(cap*2+1);
                buf[n++] = x;
            }
        }

        T &back(){
            return buf[n-1];
        }

        void pop_back(){
            n--;
        }

        T &front(){
            return buf[0];
        }

        T &operator[] (int k){
            return buf[k];
        }

        void resize(int new_size, T x=0){
            
            if(cap < new_size) expand(new_size);
            for(int i=n; i<new_size; i++) buf[i] = x;
            n = new_size;
        }
        typedef T* iterator;
        iterator begin(){
            return buf;
        }

        iterator end(){
            return buf+n;
        }
};

int main(){
    VECTOR<int> V;
    V.resize(5,6);
    for(int i=0; i<V.size(); i++){
        V[i] = i + V[i]*2;
    }
    cout << "\nV: ";
    for(auto v:V) cout << v << " ";
    // for(VECTOR<int>::iterator it = V.begin(); it!=V.end(); it++) cout << *it << " ";
    // int x;
    // cin >> x;
    V.pop_back();
    // V.push_back(x);
    
    cout << "\nV: ";
    for(auto v:V) cout << v << " ";
}

