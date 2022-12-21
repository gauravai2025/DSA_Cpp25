// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int index1=0;
bool found(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            index1=i;
            
            return 1;
        }
     
      
    }
    return 0;
}

int main() {
    // Write C++ code here
    int k;
    int a[5]={5,8,9,1,10};
    cout<<"enter number"<<"\n";
    cin>>k;
    
    
    if(found(a,5,k)){
    cout<<"present in  array at position"<<"\n";
    cout<<index1+1;}
    else
    cout<<"absent in array";

    return 0;
}