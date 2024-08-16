#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;
cout<<"enter number of element\n";
cin>>n;

vector<int>arr(n,0);

for(int i=0;i<n;i++){
    cin>>arr[i];
}


auto lambda=[](int a,int b){     // []= capture closure take access of all defined variable data structure
    // sorting logic
    return a>b;

};


// descending order sort
sort(arr.begin(),arr.end(),lambda);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

cout<<endl;
// sort ascending order
sort(arr.begin(),arr.end(),[](int a,int b){
    // sorting logic
    return a<b;
});



for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}