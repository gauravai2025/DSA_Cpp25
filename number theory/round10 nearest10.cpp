#include<bits/stdc++.h>
using namespace std;

string roundToNearest(string str){
       
        int size=str.size();
        
        if(str[size-1]>='0' && str[size-1]<='5'){
            
        str[size-1]='0';
        return str;
        }
        
        if(str[size-1]!='9'){
            int idx=size-2;
            
            while(idx>=0 && str[idx]=='9'){
                idx--;
            }
             
             if(idx!=-1){
            int dgt=str[idx]-'0';
            dgt++;
            char dgtc='0'+dgt;
            
            str[idx]=dgtc;
            
            for(int i=idx+1;i<size;i++){
                 str[i]='0';
            }
            return str;
        }
        
        else{
        str="1"+str;  
         for(int i=1;i<=size;i++){
          str[i]='0';
          }
          
          return str;
        }
        
        }
        
        int idx=size-1;
        
        while(idx>=0 && str[idx]=='9'){
            idx--;
        }
        
        if(idx==-1){
          str="1"+str;
          for(int i=1;i<=size;i++){
              str[i]='0';
          }
          
          return str;
        }
        
        else{
         int dgt=str[idx]-'0';
        dgt++;
        char dgtc='0'+dgt;
        
        str[idx]=dgtc;
        
        for(int i=idx+1;i<size;i++){
            str[i]='0';
        }
        
        return str;
        }
        
    }
 
int main()
{
    string str;
    cout<<"enter the number\n"<<endl;
    cin>>str;

cout<<roundToNearest(str);
    return 0;
}