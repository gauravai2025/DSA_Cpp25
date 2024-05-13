#include<bits/stdc++.h>
using namespace std;
 
int main()
{

 vector<int> v={1,2,3,4,5};
    cout<<"elements of vector v\n";
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.insert(v.begin(),6); // inserting 6 at begining
cout<<"elements of vector v after inserting 6 at begining\n";
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
 
 
    return 0;
}