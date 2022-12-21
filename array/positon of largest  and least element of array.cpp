#include<bits/stdc++.h>
using namespace std;


int arrmin(int a[],int size1){
int  min=INT_MAX;
int index=1;
for(int i=0;i<size1;i++){
    if a[i]<min;{
        min =a[i];
        index=i;}
    }
    cout<<"min element: "<<min;
    cout<<"at position";
    return index;

}
int arrmax(int b[],int size2){
for(int i=0;i<size2;i++){
    int max=INT_MIN;
    if b[i]>max;{
        max=b[i];
        index=i;}
    }
    cout<<"max element: "<<max;
    cout<<"at position";
    return index;


int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int g[n];
    for(int i=0;i<n;i++){
        cin>>g[i];

    }
    arrmax(g,n);
    arrmin(g,n);
    return 0;

}