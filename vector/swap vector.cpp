#include<bits/stdc++.h>
using namespace std;
 
int main()
{
vector<int> v1={1,2,3,4,5};
vector<int> v2={6,7,8,9,10};
cout<<"elements of vector v1\n";
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<"\nelements of vector v2\n";
for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
}
cout<<endl;
v1.swap(v2); // swapping v1 and v2
cout<<"elements of vector v1 after swap\n";
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
cout<<"\nelements of vector v2 after swap\n";
for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
}
 
    return 0;
}