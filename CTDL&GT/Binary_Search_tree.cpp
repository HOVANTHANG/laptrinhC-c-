#include<bits/stdc++.h>
using namespace std;

//Binary search tree
//Dinh nghia : la 1 cay nhi phan duoc dinh nghia de quy nhu sau:
//1 Cay rong la TKNP
//2 cay nhi phan co
//moi gia tri cay con trai nho hon goc nho hon moi gia tri cay con phai
//3.Ca 2 cay con trai va phai deu la TKNP
//Thao tac them
//+ cay rong tao cay
//+Nguoc lai di tu goc neu x lon hon thi sang phai ,neu be hon sang cay con trai,neu x bang thi dung
//-Tim kiem x
//+Neu cay rong tra ve rong ,neu x bang goc tra ve node do,neu x lon hon tim ben phai,neu x be hon tim cay con trai
//-Xoa
//+Neu cay rong thi dung
//+Neu x lon hon goc xoa ben phai
//+Neu x nho hon goc xoa ben trai
//+Neu x==goc + neu no khong co con trai -> No la con phai
//            +Neu khong co con phai ->no la con trai
//             + Nguoc lai: + goc bang max con trai
//                          + De quy xoa Max con trai tren cay trai

int main(){
     set<int,greater<int>> S;
     for(int x:{542,56,7,545,34,56,78,345}) S.insert(x);
     for(auto s:S) cout<<s<<" ";



}


