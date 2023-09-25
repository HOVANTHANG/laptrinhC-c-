#include<bits/stdc++.h>
#include<string.h> 
using namespace std;
void upper(string &s){
	for(int i=0;i<s.length();i++) {
		s[i] = toupper(s[i]); 
	}
} 
void chuanhoa(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]); 
	} 
} 

main(){
//	int n;
//	cin>>n;
//	cin.ignore(); 
//	string s;
//	getline(cin,s);
//	
//	stringstream ss(s);
//	string word;
//	while(ss>>word){
//		cout<<word<<"\n"; 
//	} 	
//     string s;
//     string k; 
//	 getline(cin,s);
//	 getline(cin,k); 
//	 stringstream ss(s);
//	 string x;
//	 while(ss>>x){
//	     if(x!=k){
//	     	cout<<x<<" "; 
//		 } 
//	 }
////tao email 
//     string s ;
//     getline(cin,s);
//     for(int i=0;i<s.size();i++){
//     	s[i]=tolower(s[i]); 
//	 } 
//	  stringstream ss(s);
//	  string word;
//	  vector<string> v; 
//	  while(ss>>word){
//	  	v.push_back(word); 
//	  } 
//	   cout<<v[v.size()-1]; 
//	   for(int i=0;i<v.size()-1;i++){
//	   	  cout<<v[i][0]; 
//	   } cout<<"@gmail.com"; 
//	 tao email 2  
//
//       int t;cin>>t;
//   cin.ignore(); 
//   	 map<string,int> mp; 
//   while(t--){
//	    string s ;
//     getline(cin,s);
//     for(int i=0;i<s.size();i++){
//     	s[i]=tolower(s[i]); 
//	 } 
//	  stringstream ss(s);
//	  string word;
//	  string res=""; 
//	  vector<string> v; 
//	  while(ss>>word){
//	  	v.push_back(word); 
//	  } 
//	    res+=v[v.size()-1]; 
//	   for(int i=0;i<v.size()-1;i++){
//	   	 res+=v[i][0]; 
//	   } 
//	   if(mp[res]==0){
//	   	     cout<<res<<"@gmail.com"; 
//	   } else{
//	      cout<<res<<mp[res]+1<<"@gmail.com";
//	     		   } mp[res]++; 
//	     		    cout<<endl; 
//     } 
//         string s;
//		 getline(cin,s);
//		 vector<string> v;
//		 stringstream ss(s);
//		 string word; 
//		 while(ss>>word){
//		 	v.push_back(word); 
//		 }  
//		 upper(v[v.size()-1]);
//		for(int i=0;i<v.size()-1;i++){
//			chuanhoa(v[i]) ;
//			cout<<v[i];
//			if(i==v.size()-2){
//				cout<<","; 
//			} else
//			   cout<<" "; 
//		} 
//		cout<<v[v.size()-1]<<endl;   
//
//      string s;
//	  getline(cin,s);
//	    set<char> se;
//		for(char x : s){
//			se.insert(x); 
//		} 
//	    if(se.size()==26){
//	    	cout<<"YES" ;
//		} else cout<<"NO"; 
//      string s;
//	  getline(cin,s) ;
//	  stringstream ss(s);
//	  string word;
//	  int ans=0; 
//	  while(ss>>word){
//	  	ans++ ;
//	  } 
//	  cout<<ans<<endl; 
//  c1   string s;
//	 getline(cin,s);
//	 int a[256]={0};
//	 for(char x:s){
//		 a[x]++; 
//	 }
//	 for(char x:s){
//	   if(a[x]==1){
//	   	cout<<x; 
//	   }	
//	 } 
//	 }  
//	 string s;
//	 getline(cin,s);
//	 map<char,int> mp;
//	 for(char x : s){
//	 	mp[x]++; 
//	 } 
//	 for(char it : s){
//	 	if(mp[it]==1){
//	 		cout<<it; 
//		 } 
//	 }
//	 } 
//	int m,s;
//	cin>>m>>s;
//	int lon[m]={0},be[m]={0}; 
//	int tmp=s;
//	if(s>9*m||(s==0&&m>1)){
//		cout<<"-1"<<" -1"; 
//	} else {
//	for(int i=0;i<m;i++){
//		if(s>=9){
//			lon[i]=9;
//			s-=9; 
//		} else if(s!=0){
//			lon[i]=s;
//			s=0; 
//		}else 
//		  break; 
//	} 
//	 --tmp;
//	 for(int i=m-1;i>0;i--){
//	 	if(tmp>=9){
//	 		be[i]=9;
//			 tmp-=9; 
//		 } else if(tmp!=0){
//		 	be[i]=tmp;
//			 tmp=0; 
//		 }else 
//		 break; 
//	 } 
//	   be[0]=tmp+1;	    
//	    for(int i=0;i<m;i++){
//	    	cout<<be[i]; 
//		} 
//		cout<<" "; 
//	 for(int i=0;i<m;i++){
//	 	cout<<lon[i]; 
//	 } } }
//      int n;cin>>n ;
//	   set<string> se;
//	   cin.ignore(); 
//	    for(int i=0;i<n;i++){
//	    	string s;
//			getline(cin,s);
//			se.insert(s); 
//		} 
//	   cout<<se.size()<<endl; 
//     cin.ignore();
//	 map<string,int> mp;
//	  for(int i=0;i<n;i++){
//	  	  string s;
//			getline(cin,s);
//			mp[s]++; 
//	  } 
//	  cout<<mp.size()<<endl; 
//}

























}






















