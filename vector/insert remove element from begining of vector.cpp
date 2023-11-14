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
 cout<<endl;
    v.insert(v.begin()+2,7); // inserting 7 at index 2

cout<<"elements of vector v after inserting 7 at index 2\n";
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

v.insert(v.end(),8); // inserting 8 at end
cout<<"elements of vector v after inserting 8 at end\n";
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

cout<<endl;
v.erase(v.begin()); // removing element from begining
cout<<"elements of vector v after removing element from begining\n";
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
 v.erase(v.begin()+2); // removing element from index 2
cout<<endl;
cout<<"elements of vector v after removing element from index 2\n";
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
    return 0;
}