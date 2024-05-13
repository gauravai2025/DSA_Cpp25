#include<bits/stdc++.h>
using namespace std;


void subset(vector<int>&arr,int size){
   
  cout<<"The subset are:\n";
    for(int i=1;i<(1<<size);i++){
       vector<int>ans;
        for(int j=0;j<size;j++){
         if(i&(1<<j))
         ans.push_back(arr[j]);
        }
        
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }

}
 
int main()
{
int size;
cout<<"Enter the size of array"<<endl;

cin>>size;
vector<int> arr(size);

for(int i=0;i<size;i++){
    cin>>arr[i];
}

 subset(arr,size);
    return 0;
}