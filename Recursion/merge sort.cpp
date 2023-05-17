#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s , int e){

    int mid=s+(e-s)/2;
    int len1=mid+1-s; // length of left array
    int len2=e-mid;  // length of right array

    int *frst=new int[len1]; // dynamic memory allocation 
int *scnd=new int[len2]; 

int mainidx=s;

for(int i=0;i<len1;i++){
  frst[i]=arr[mainidx++];    // copy values from original array to left array
}

for(int i=0;i<len2;i++){
  scnd[i]=arr[mainidx++];  // copy values from original array to right array

}
// merge two sorted array
int mnidx=s;
int idx1=0, idx2=0;
while(idx1<len1 && idx2<len2){
    if(frst[idx1]>scnd[idx2])
    arr[mnidx++]=scnd[idx2++];  // comapre element of both left and right and insert smaller element int origunal array
    else
     arr[mnidx++]=frst[idx1++];

}

while(idx1<len1){  // copy remaining element of first/ left array 
   arr[mnidx++]=frst[idx1++];
}

while(idx2<len2){   // copy remaining element of right / second array 
   arr[mnidx++]=scnd[idx2++];
}

// free memory 

 delete[] frst;
  delete[] scnd; 
}
 
 void merge_sort(int *arr,int s,int e){
    //base condition
if(s>=e)
return ;

int mid=s+(e-s)/2; //mid position for divide arrray in equal halves

merge_sort(arr,s,mid); // left array sort
merge_sort(arr,mid+1,e) ;// right array sort

merge(arr,s,e);
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

merge_sort(arr,0,size-1);
cout<<"sorted array\n";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}