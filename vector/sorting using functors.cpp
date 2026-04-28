#include<bits/stdc++.h>
using namespace std;

class cmp{
    public:
 // sort revrse order
   bool operator()(int a,int b){
     return a>b;
    }
};
 
int main()
{
    int num;
    cout<<"enter number of element: \n";
    cin>>num;

    vector<int>arr(num);

    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end(),cmp());
    
    for(int ele:arr){
    cout<<ele<<" ";
    }

    return 0;
}