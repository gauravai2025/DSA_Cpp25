#include<bits/stdc++.h>
using namespace std;


class cmp {
public:
    bool operator()(string a, string b) {

        if(a.size()==b.size()){
         for(int i=0;i<a.size();i++){

            if(a[i]==b[i])
            continue;

            else{
           return a[i]>b[i];
            }
         }
        }

        return a.size()>b.size();
    }

};

    string kthLargestNumber(vector<string>& nums, int k) {

 priority_queue<string,vector<string>,cmp>pq;

        for(auto it:nums){
            pq.push(it);
            if(pq.size()>k)
            pq.pop();
        }
        
     return pq.top();
    }
 
int main()
{

 int size,k;
 cout<<"enter size of array\n";
 cin>>size;
 cout<<"enter value of k: \n";
 cin>>k;
    
 vector<string>arr;
  string str;

 for(int i=0;i<size;i++){
    cin>>str;
    arr.push_back(str);
 }

 cout<<kthLargestNumber(arr,k);
 
 
    return 0;
}