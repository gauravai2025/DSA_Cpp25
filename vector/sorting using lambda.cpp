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

    // sort(arr.begin(),arr.end(),[](int a,int b){
    //     return a>b;
    // });

    // writing clean lambda function

    auto lambda=[](int a,int b){
        return a>b;
    };
    
    sort(arr.begin(),arr.end(),lambda);
    for(int ele:arr){
    cout<<ele<<" ";
    }
    return 0;
}