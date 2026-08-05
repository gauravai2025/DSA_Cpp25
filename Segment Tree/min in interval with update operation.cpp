#include<bits/stdc++.h>
using namespace std;


// ### Range Minimum with Swaps

// You are given an array **A** of **N** integers, indexed from **1** to **N**.

// Your task is to process **Q** operations on the array. Each operation is one of the following:

// * **Type 1:** `1 i j`
//   Swap the values at indices **i** and **j**, i.e., exchange `A[i]` and `A[j]`.

// * **Type 2:** `2 L R`
//   Determine and print the **minimum value** present in the subarray `A[L...R]` (inclusive).

// The array is updated after every swap operation, so all future operations are performed on the modified array.

// For each query of **Type 2**, output the minimum element in the specified range.


void build_segment_tree( vector<int> &arr,int idx,int l,int r,vector<long long int>&seg_tree){
    // base case single element

    if(l==r){
       seg_tree[idx]=arr[l]; 
       return;
    }

    int mid=(l+r)/2;

     build_segment_tree(arr,2*idx+1,l,mid,seg_tree);
     build_segment_tree(arr,2*idx+2,mid+1,r,seg_tree);

     seg_tree[idx]=min(seg_tree[2*idx+1],seg_tree[2*idx+2]);
}

void update_segment_tree(int i,int idx,int val,int l,int r,vector<long long int>&seg_tree){
    // reach the leaf node to update the value

    if(l==r){
    seg_tree[i]=val; 
    return;
    }

    int mid=(l+r)/2;

    if(idx<=mid)
     update_segment_tree(2*i+1,idx,val,l,mid,seg_tree);
     else
     update_segment_tree(2*i+2,idx,val,mid+1,r,seg_tree);

     seg_tree[i]=min(seg_tree[2*i+1],seg_tree[2*i+2]);
}


long long int query_segment_tree( int x,int y,int idx,int l,int r,vector<long long int>&seg_tree){

// no overlap
    if(l>y || r<x){
      
    return LLONG_MAX;
    }
      
      // complete overlap
      
    if(l>=x && r<=y){
     return seg_tree[idx];
    }

    // partial overlap

    else{ 
  int mid=(l+r)/2;
 return min(query_segment_tree(x,y,2*idx+1,l,mid,seg_tree),query_segment_tree(x,y,2*idx+2,mid+1,r,seg_tree));

    }   
}
 
int main()
{

 int size;
 cout<<"Enter the size of the array: ";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the elements of the array: ";

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    vector<long long int> seg_tree(4*size,0);

    build_segment_tree(arr,0,0,size-1,seg_tree);
    vector<long long int>ans;
    
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;

    cout<<"enter query in  format 1 for update and 2 for query:";
    int type,l,r;
      
      while(q--){

        cin>>type>>l>>r;
        l--;r--;

        if(type==1){
        update_segment_tree(0,l,arr[r],0,size-1,seg_tree); 
        update_segment_tree(0,r,arr[l],0,size-1,seg_tree); 
        swap(arr[l],arr[r]);
        }

        else
        ans.push_back(query_segment_tree(l,r,0,0,size-1,seg_tree));
      }

      cout<<endl;
      cout<<"The minimum in  given range after query processed is: \n";

        for(auto i:ans){
            cout<<i<<" ";
        }
    

    return 0;
}