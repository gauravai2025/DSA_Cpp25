#include<bits/stdc++.h>
using namespace std;

 
int main()
{
 int num;
    cout<<"enter number of element: \n";
    cin>>num;

    vector<int>arr(num);

    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    // lambda expression
    sort(arr.begin(),arr.end(),[](int a,int b){
        return a>b;
    });
    
    for(int ele:arr){
    cout<<ele<<" ";
    }
    return 0;
}