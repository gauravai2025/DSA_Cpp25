#include<bits/stdc++.h>
using namespace std;

long long int generatesubsequence(string &str1){
  
    int size=str1.size();
    set<string>st;
    
    for(int i=0;i<(1<<size);i++){
        string str="";
        for(int j=0;j<size;j++){
            if(i&1<<j)
            str.push_back(str1[j]);
        }
        
        st.insert(str);
    }
    
    return st.size();
    
}
 
int main()
{
    string str;
    cout<<"enter string\n";
    cin>>str;

    cout<<"number of distinct subsequence: "<<generatesubsequence(str);

    return 0;
}