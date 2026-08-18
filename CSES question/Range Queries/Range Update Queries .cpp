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


long long int query_segment_tree( int i,int idx,int l,int r,vector<long long int>&seg_tree,vector<long long int>&lazy){


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
    if(l==r){
    return seg_tree[idx];
    }
      
  int mid=(l+r)/2;

  if(i<=mid)
  return query_segment_tree(i,2*idx+1,l,mid,seg_tree,lazy);
  else
  return query_segment_tree(i,2*idx+2,mid+1,r,seg_tree,lazy);
}
 
int main()
{

   int size,q;
    cin>>size>>q;
    vector<int> arr(size);

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    vector<long long int> seg_tree(4*size,0);
    vector<long long int>lazy(4*size,0);

    build_segment_tree(arr,0,0,size-1,seg_tree);
    vector<long long int>ans;
    
    int type,val,i,l,r;
      
      while(q--){
        cin>>type;
        
        if(type==1){
        cin>>l>>r;
          l--;r--;
          cin>>val; 
          update_segment_tree(val,l,r,0,0,size-1,seg_tree,lazy); 
        }
        else{
        int pos;
        cin>>pos;    
        ans.push_back(query_segment_tree(pos-1,0,0,size-1,seg_tree,lazy));
        }
      }
        for(auto i:ans){
        cout<<i<<endl;
        }

    return 0;
}