
#include <iostream>
using namespace std;

void print(int arr[],int size){
    cout<<"size of array:"<<size<<endl;
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}


bool  linearsearch(int arr[],int size,int key){
    print(arr,size);
    if(size==0)
    return 0;
    
    if(arr[0]==key)
    return 1;
    else
    return linearsearch(arr+1,size-1,key);
}
int main() {
    cout<<"enter size of array\n";
    int size ;
    cin>>size ;
    int *arr=new int[size ];
    cout<<"enter element of array\n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];
        
    }
    cout<<"enter key to search\n";
    int key;
    cin>>key;
    if(linearsearch(arr,size,key))
    cout<<"found\n";
    else
    cout<<"Not found\n";

    return 0;
}