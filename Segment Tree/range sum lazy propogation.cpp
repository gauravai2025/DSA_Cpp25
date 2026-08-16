#include<bits/stdc++.h>
using namespace std;


void build_segment_tree( vector<int> &arr,int idx,int l,int r,vector<long long int>&seg_tree){
    // base case single element

    if(l==r){
       seg_tree[idx]=arr[l]; 
       return;
    }

    int mid=(l+r)/2;

     build_segment_tree(arr,2*idx+1,l,mid,seg_tree);
     build_segment_tree(arr,2*idx+2,mid+1,r,seg_tree);

     seg_tree[idx]=seg_tree[2*idx+1]+seg_tree[2*idx+2];
}

void update_segment_tree(long long int val,int st,int end,int idx,int l,int r,vector<long long int>&seg_tree,vector<long long int>&lazy){
    
    // update earlier lazy array

    if(lazy[idx]){
    seg_tree[idx]+=(r-l+1)*lazy[idx];
    
    // non leaf node
    if(l!=r){
    lazy[2*idx+1]+=lazy[idx];
    lazy[2*idx+2]+=lazy[idx];
    }

    lazy[idx]=0;
    }

    if(l>end || r<st || l>r){ // no overlap
    return;
    }

    if(l>=st && r<=end){ // overlap
    seg_tree[idx]+=(r-l+1)*val;
     // non leaf node
    if(l!=r){
    lazy[2*idx+1]+=val;
    lazy[2*idx+2]+=val;
    }
   return ;
    }

    int mid=(l+r)/2;

     update_segment_tree(val,st,end,2*idx+1,l,mid,seg_tree,lazy);
     update_segment_tree(val,st,end,2*idx+2,mid+1,r,seg_tree,lazy);

     seg_tree[idx]=seg_tree[2*idx+1]+seg_tree[2*idx+2];
}


long long int query_segment_tree( int x,int y,int idx,int l,int r,vector<long long int>&seg_tree,vector<long long int>&lazy){


     // update earlier lazy array

    if(lazy[idx]){
    seg_tree[idx]+=(r-l+1)*lazy[idx];
    
    // non leaf node
    if(l!=r){
    lazy[2*idx+1]+=lazy[idx];
    lazy[2*idx+2]+=lazy[idx];
    }

    lazy[idx]=0;
    }

// no overlap
    if(l>y || r<x){
    return 0;
    }
      
    // complete overlap
      
    if(l>=x && r<=y){
     return seg_tree[idx];
    }

    // partial overlap

    else{ 
  int mid=(l+r)/2;
 return query_segment_tree(x,y,2*idx+1,l,mid,seg_tree,lazy)+query_segment_tree(x,y,2*idx+2,mid+1,r,seg_tree,lazy);

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
    vector<long long int>lazy(4*size,0);

    build_segment_tree(arr,0,0,size-1,seg_tree);
    vector<long long int>ans;
    
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;

    cout<<"enter query in  format 1 for update and 2 for query:";
    int type,val,i,l,r;
      
      while(q--){
        cin>>type;
         cin>>l>>r;
          l--;r--;
        if(type==1){
          cin>>val; 
          update_segment_tree(val,l,r,0,0,size-1,seg_tree,lazy); 
        }
        else{
        ans.push_back(query_segment_tree(l,r,0,0,size-1,seg_tree,lazy));

        }
      }

       cout<<endl;
      cout<<"The sum of the given range after query processed is: \n";

        for(auto i:ans){
            cout<<i<<" ";
        }
    return 0;
}