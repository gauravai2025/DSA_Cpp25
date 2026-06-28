#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    cout<<"enter string: ";
    cin>>str;

    int size=str.size();
    vector<vector<int>>precnt(26,vector<int>(size+1,0));

        for(int j=1;j<=size;j++){
            for(int i=0;i<26;i++){
            precnt[i][j]=precnt[i][j-1];
        }
        precnt[str[j-1]-'a'][j]++;

    }

    int q;
    cout<<"enter number of query:";
    cin>>q;
  
    cout<<"enter range to count duplicate character:\n";
    while(q--){
    int l,r;
    cin>>l>>r;
    int cnt=0;
    for(int i=0;i<26;i++){
     int feq=precnt[i][r]-precnt[i][l-1];

     if(feq>1)
     cnt++;
    }
    cout<<cnt<<endl;
    }
return 0;
}