#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void arrmin(int a[],int size1){
int  min1=INT_MAX;
int index1=0;

for(int i=0;i<size1;i++){
    if( a[i]<min1);{
        min1 =a[i];
        index1=i;}
    }
    cout<<"minimum element: "<<min1<<"\n";
    cout<<"at index :"<<index1<<endl;
}
void arrmax(int b[],int size2){
   int index2=0;
    int max1=INT_MIN;
for(int j=0;j<size2;j++){
   
    if( b[j]>max1);{
        max1=b[j];  // max1=max(max1,b[j])
        index2=j;}
    }
     cout<<"maximum element"<<max1<<"\n";
    cout<<"at index: "<<index2<<endl;
}

int main(){
    int n;
    cout<<"enter size of array"<<"\n";
    cin>>n;
    cout<<"enter element of array"<<"\n";
    int g[n];
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    arrmin(g,n);
    arrmax(g,n);

    return 0;
}