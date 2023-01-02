#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
   // int d;
   // input by loop
    // for(int i =0;i<5;i++){
    //     cin>>a;
    //      v.push_back(a);

    // }
    v.push_back(2);
    v.push_back(5);
    v.push_back(28);
    v.push_back(45);
    cout<<"28 is present -> "<<binary_search(v.begin(),v.end(),28)<<endl;
    cout<<"29is present -> "<<binary_search(v.begin(),v.end(),29)<<endl;

int a=7,b=9;
cout<<"max of a b: "<<max(a,b)<<endl;
cout<<"min of a b: "<<min(a,b)<<endl;
swap(a,b);
cout<<"swap value a: "<<a<<"b: "<<b<<endl;
// reverse string

string str="abcd";
reverse(str.begin(),str.end());
cout<<"reverse string: "<<str<<endl;
// rotate array
   rotate(v.begin(),v.begin()+1,v.end());
   for(int i:v){
    cout<<i<<" ";
   }
   cout<<endl;
   rotate(v.begin(),v.begin()+2,v.end());
   for(int i:v){
    cout<<i<<" ";
   }
    return 0;

}
