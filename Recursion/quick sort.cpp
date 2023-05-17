#include<bits/stdc++.h>
using namespace std;
int partition( int*arr, int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
            
        }

    }

    return pivotIndex;

}

void quick_sort(int*arr, int s, int e) {

    //base case
    if(s >= e) 
        return ;

    //partitioon karenfe
    int p = partition(arr, s, e);

    //left part sort karo
    quick_sort(arr, s, p-1);

    //right wala part sort karo
    quick_sort(arr, p+1, e);

}
 
int main()
{
cout<<"enter array size\n";
int size;
cin>>size;
int *arr=new int[size ];
cout<<"enetr array\n";
for(int i=0;i<size;i++){
    cin>>arr[i];
}

quick_sort(arr,0,size-1);
cout<<"sorted array\n";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}