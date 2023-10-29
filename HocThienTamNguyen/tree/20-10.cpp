#include<bits/stdc++.h>
#include<fstream> 
using namespace std;

struct node{
	int data;
	node *pleft;
	node *pright; 
};
bool snt(int n) {
	if(n==1){
		return 0; 
	} else{
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			return 0; 
		}
	}
	return 1; 
}
}
void KhoiTao(node *&t) 
{
	t=NULL; 
}

void ThemMoi(node *&t,int x)  
{
	if(t==NULL) {
		
		node *newNode = new node();
		newNode->data = x;
		newNode->pleft=NULL;
		newNode->pright=NULL;
		t=newNode; 
	}else{
		if(t->data>x) {
			ThemMoi(t->pleft,x);
		}else if(t->data<x) 
		{
			ThemMoi(t->pright,x) ;
		}
		
	} 
}
void Duyet(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NRL 
	}
}
void Duyet1(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NLR 
	}
}
void Duyet2(node *t) {
	if(t!=NULL) {
			Duyet(t->pright);
		     cout<<t->data <<" ";
				Duyet(t->pleft);
	}
}
void Duyet3(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NRL 
	}
}
void Duyet4(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NRL 
	}
}
void Duyet5(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NRL 
	}
}
void Duyet6(node *t) {
	if(t!=NULL) {
		cout<<t->data <<" ";
			Duyet(t->pright);
				Duyet(t->pleft);//NRL 
	}
}


int count(node *t, int &dem){

		if(t!=NULL) {
	   if(snt(t->data)){
	      dem++;
		 }
			count(t->pright,dem);
	        count(t->pleft,dem);//NRL 
	}
	return dem; 
}

bool  TimKiem(node *t,int x){
	if(t==NULL){
		return false; 
	} else{
	
	if(t->data > x){
		TimKiem(t->pleft,x); 
	} else if(t->data<x){
		TimKiem(t->pright,x); 
	} else{
		return true; 
	} 
	
	}
} 
void Timnode2con(node *t){
	if(t!=NULL){
		if(t->pleft!=NULL && t->pright!=NULL){
			cout<<t->data<<" "; 
		} 
		Timnode2con(t->pleft);
		Timnode2con(t->pright); 
	} 
} 
void Timnode1con(node *t){
	if(t!=NULL){
		if((t->pleft!=NULL && t->pright==NULL) ||(t->pleft==NULL && t->pright!=NULL)){
			cout<<t->data<<" "; 
		} 
		Timnode1con(t->pleft);
		Timnode1con(t->pright); 
	} 
} 
void Timnodela(node *t){
	if(t!=NULL){
		if(t->pleft==NULL && t->pright==NULL){
			cout<<t->data<<" "; 
		} 
		Timnodela(t->pleft);
		Timnodela(t->pright); 
	} 
} 
int sum(node *t, int &s){
	if(t==NULL){
		
	}else{

		s+=t->data;
		sum(t->pleft,s);
		sum(t->pright,s); 
     }
	return s; 
} 
/*int TimnodeMax(node *t,int &max) {
	if(t!=NULL){
		if(t->data > max){
			max=t->data; 
		} 
		TimnodeMax(t->pleft,max);
		TimnodeMax(t->pright,max); 
	} 
	return max; 
}*/
/*int TimNodeMax(node *t,int &max){
	if(t==NULL){
		
	} else{
	if(t->data > max){
		max= t->data; 
	} 
	TimNodeMax(t->pright,max);
   }
   	 return max; 
} */
int TimNodeMax(node *t){
	if(t->pleft==NULL&&t->pright==NULL){
		return t->data; 
	} else{
		return TimNodeMax(t->pright); 
	} 
} 
int TimNodeMin(node *t){
	if(t->pleft==NULL&&t->pright==NULL){
		return t->data; 
	} else{
		return TimNodeMin(t->pleft); 
	} 
} 
void XoaNode2con(node *&x,node *&y){
	if(y->pleft!=NULL){ //Tim node trai cuoi cung cua cay con phai 
		XoaNode2con(x,y->pleft);
	} else{ //Tim duoc node trai cuoi cung cua cay con phai 
		x->data = y->data;  //Cap nhap du lieu cua node t->pRight; 
		x=y;  //De ti nua xoa di node trai nhat cua cay con phai 
		y=y->pright; // cho cai node trai cuoi cung noi voi node cha cua no		
	} 	
} 
void XoaNode2conCach2(node *&x,node *&y){
	if(y->pright!=NULL){ //Tim node phai nhat cua cay con trai 
		XoaNode2conCach2(x,y->pright) ;
	} else{//Tim duoc roi node phai nhat cua cay con trai 
		x->data = y->data;// cap nhat du lieu cua y cho x 
		x=y;// xoa node phai nhat cua cay con trai
		y=y->pleft;  //cho node cuoi cung noi voi node cha cua no 
	} 
	
	
} 
void XoaNode(node *&t,int data){
	if(t==NULL) {
		return; 
	}else{
		if(t->data <data){
			XoaNode(t->pright,data); 
		}else if(t->data > data) {
			XoaNode(t->pleft,data); 
		}else{
			node *x =t; 
			if(t->pleft ==NULL) {
				t=t->pright; 
			}else if(t->pright==NULL){
				t=t->pleft; 
			} else{
			//	XoaNode2con(x,t->pright); 
			XoaNode2conCach2(x,t->pleft); 
			}		
			delete x; 
		} 
	} 
} 
void Hamdocfile(node *&t,ifstream &filein){
	int n;
	filein>>n;
	for(int i=1;i<=n;i++) {
		int x;
		filein >> x;
		ThemMoi(t,x); 
	}
	
	
} 


int main(){
//	node *x;
//	 int n;
//	 int s=0; 
//	 int max=INT_MIN; 
//   int dem=0; 
//      for(int i=1;i<=7;i++) {
//      	int k;
//		  cin>>k; 
//      	ThemMoi(x,k);
//	  }
//	 Duyet2(x);
//	 cout<<"\nSo nguyen to co:"; 
//	 cout<<count(x,dem); 
//	
//	 cout<<"\nNhap phan tu ma ban can tim kiem:";cin>>n;
//	  if(TimKiem(x,n)==false){
//	 	cout<<"\nPhan tu "<<n<<" Khong ton tai!"; 
//	 }else{
//	 	cout<<"\nPhan tu "<<n<<" co ton tai!"; 
//	 } 
//	 cout<<"\nNode 2 con:";Timnode2con(x) ;
//	 cout<<"\nNode 1 con:";Timnode1con(x);
//	 cout<<"\nNode la:";Timnodela(x);
//	 cout<<"\nTong cac phan tu cua cay la:"<<sum(x,s); 
//	 cout<<"\nNode lon nhat:"<<TimNodeMax(x); 
////	 cout<<"\nNode nho nhat:"<<TimNodeMin(x); 
//     int  data;
//	 cout<<"\nNhap du lieu node can xoa:";cin>>data; 
//	 XoaNode(x,data); 
//     Duyet(x); 
     node *t;
      t=NULL; 
	 ifstream filein; 
	 filein.open("input.txt",ios::in) ;
	 Hamdocfile(t,filein) ;
	 Duyet(t); 
	 cout<<"\nNode la:";Timnodela(t);
	 cout<<"\nNode 1 con:";Timnode1con(t);
	 cout<<"\nNode 2 con:";Timnode2con(t) ;
	 cout<<"\nPhan tu max:"<<TimNodeMax(t); 
	 filein.close() ; 
}

