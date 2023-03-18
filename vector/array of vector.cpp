#include<bits/stdc++.h>
using namespace std;
void print(int n, vector<int>v[]){
    for(int i=0;i<n;i++){
        for(auto it:v[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
 
int main()
{
    cout<<"enter number of vector\n";
     int num;
     cin>>num;
     int n,x;
    vector<int>v[num];
     for(int i=0;i<num;i++){
         cout<<"enter size of "<<i+1<<" vector : ";
           cin>>n;
           cout<<"enter element of vector : ";
        for(int j=0;j<n;j++){
            cin>>x;
            v[i].push_back(x); // input of element in vector
        }
     }
     print(num,v);


     cout<<v[0][0]<<endl;  // first vector first element
 
 
    return 0;
}