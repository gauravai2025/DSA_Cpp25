#include <bits/stdc++.h>
using namespace std;

int main() {
cout<<"Enter the number of test cases"<<endl;
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
    string str;
    getline(cin,str);
    int size=str.size();
    
    string words="";
    
    for(int i=0;i<size;i++){
        if(str[i]!=' ')
        words+=str[i];
        else{
      cout<<words<<endl;
        words="";
        
        }
        
    }
    cout<<words<<endl;
    cout<<endl;
      
      
    }
       
   
	   
	

}