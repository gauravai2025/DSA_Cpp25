#include <bits/stdc++.h>
using namespace std;


void  count_greater_right(vector<int>&arr,int size){

     int hash[1000001]={0};

    for(int i=0;i<size;i++){
	     
	    hash[arr[i]]++;
	    }
	    
	    int cnt=0;
	    
      for(int i=0;i<size;i++){
        cnt+=hash[arr[i]];
        hash[arr[i]]=0;
        cout<<size-cnt<<" ";
      }
    

}
 
int main()
{
int size;
cout<<"enter number of element in vector\n";
cin>>size;
vector<int>arr(size);
cout<<"enter  element of vector in sorted order\n";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
 count_greater_right(arr,size);
 
    return 0;
}





