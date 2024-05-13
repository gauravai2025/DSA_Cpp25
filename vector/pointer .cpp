#include<bits/stdc++.h>
using namespace std;
 
int main()
{
vector<int>v={1,2,3,4,5};
int*p=&v[2]; // p points to 3
// insert element at begining
v.insert(v.begin(),6);
cout<<(*p);
cout<<endl;
cout<<"it should be"<<3;
    return 0;
}