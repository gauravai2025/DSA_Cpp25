#include<bits/stdc++.h>
using namespace std;
 
int main()
{
vector<int> v1{1,2,3,4,5};
cout<<"elements of vector v1\n";
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
vector<int> v2(v1); // copy constructor copying v1 to v2
 
 cout<<"\nelements of vector v2\n";
for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
}

vector<int>v3(v1.begin(),v1.end()); // copy constructor copying v1 to v3 only elements from begin to end-1 memory address is different
cout<<"\nelements of vector v3\n";
for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" ";
}
cout<<endl;

v1.push_back(6);

cout<<"elements of vector v2 after push_back\n";

for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
}
cout<<endl;
cout<<"elements of vector v3 after push_back\n";

for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" ";
}

 
    return 0;
}