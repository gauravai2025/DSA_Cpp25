#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    unordered_set<int>s={1,2,3,4,5};
    cout<<"load factor: "<<s.load_factor()<<endl;
    cout<<"total bucket count: #"<<s.bucket_count()<<endl;
    int val=4;
    cout<<val<<" is in bucket # "<<s.bucket(val)<<endl;
 
 
 
    return 0;
}