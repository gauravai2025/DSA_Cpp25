#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int size;
cout<<"Enter the size of array: ";
cin>>size;
vector<int> arr(size,0);

cout<<"enter element of array\n";

for(int i=0;i<size;i++){
    cin>>arr[i];
}

vector<int>prexor(size,0);
prexor[0]=arr[0];

for(int i=1;i<size;i++){
    prexor[i]^=prexor[i-1]^arr[i];
}


int qe;
cout<<"Enter the number of queries: ";
cin>>qe;
vector<int>ans;
cout<<"Enter the value of l,r \n";

while(qe--){
    int l,r;
    cin>>l>>r;
    l--;
    r--;

    if(l==0)
    ans.push_back(prexor[r]);
   else
   ans.push_back(prexor[l-1]^prexor[r]);
}

cout<<"xor of each query\n";

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

    return 0;
}