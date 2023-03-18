#include<bits/stdc++.h>
using namespace std;
void print( vector<int>v){
    for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    
}
 
int main()
{
    cout<<"enter number of vector\n";
     int num;
     cin>>num;
     int n,x;
    vector<vector<int>>v;
     for(int i=0;i<num;i++){
         cout<<"enter size of "<<i+1<<" vector : ";
           cin>>n;
           cout<<"enter element of vector : ";
           vector<int>temp;
        for(int j=0;j<n;j++){
            cin>>x;
            temp.push_back(x); // input of element in vector
        }
        v.push_back(temp); // input of vector in vector
     }
     for(int  i=0;i<v.size();i++){
     print(v[i]);
     }

     cout<<"value at first vector first element: "<<v[0][0]<<endl;  // first vector first element
 v[0].push_back(327); // add element a last position in first vector
  for(int  i=0;i<v.size();i++){
     print(v[i]);
     }
     v.push_back(vector<int>());// input empty vector in v 
  for(int  i=0;i<v.size();i++){
     print(v[i]);
     }
    return 0;
}