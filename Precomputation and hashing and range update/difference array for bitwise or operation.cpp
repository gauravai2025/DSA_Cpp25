#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int size;
// cout<<"Enter the size of array: ";
cin>>size;
vector<int>arr(size,0);

int q;
// cout<<"Enter the number of queries: ";
cin>>q;

vector<vector<int>>pre(size+1,vector<int>(32,0));

while(q--){

int l,r,x;
cin>>l>>r>>x;

for(int i=0;i<32;i++){

    if(x&(1<<i)){
    pre[l][i]++;
      
    if(r+1<=size)
     pre[r+1][i]--;
}

}

}

for(int i=1;i<=size;i++){
    int val=0;
    for(int j=0;j<32;j++){
        pre[i][j]+=pre[i-1][j];
        if(pre[i][j]>0)
        val|=(1<<j);
    }
    arr[i-1]=val;

}

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
 
    return 0;
}