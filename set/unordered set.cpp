#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
 
int main()
{
unordered_set<int>s={1,2,3,4,5};
unordered_set<int>::iterator it=s.find(3); // it points to 3 
if(it!=s.end()){  // check 
    cout<<"3 is present"<<endl;
}
s.insert(6);
vector<int>v={7,8,9};
s.insert(v.begin(),v.end()); // insert vector element
for(auto i:s){
    cout<<i<<" ";
}
cout<<endl;

 s.insert(56);
 
 for(auto i:s){
    cout<<i<<" ";
}
cout<<endl;
 
    return 0;
}