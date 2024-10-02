#include<bits/stdc++.h>
using namespace std;

// You are given an array nums consisting of non-negative integers. You are also given a queries array, where queries[i] = [xi, mi].

// The answer to the ith query is the maximum bitwise XOR value of xi and any element of nums that does not exceed mi. In other words, the answer is max(nums[j] XOR xi) for all j such that nums[j] <= mi. If all elements in nums are larger than mi, then the answer is -1.

// Return an integer array answer where answer.length == queries.length and answer[i] is the answer to the ith query.

// offline query

  class TrieNode{
    public:
    int data;
    TrieNode* children[2];
    bool isterminal;

    //constructor
     TrieNode(int val){
        data=val;
        for(int i=0;i<2;i++){
            children[i]=NULL;
        }
        isterminal=0;
     }

};


class Trie{ 
    public:
    TrieNode* root;
    //constructor
    Trie(){
        root=new TrieNode('\0');
    }


        // Insert the integer bits directly into the Trie
        void insert(int num) {
            TrieNode* node = root;

            for (int i = 31; i >= 0; i--) {

                int bit = (num >> i) & 1;  // Extract the ith bit

                if (!node->children[bit]) {
                    node->children[bit] = new TrieNode(bit);
                }
                
                node = node->children[bit];
            }
        }

      
int  xorcalculate(int num,int maxor){

    TrieNode* curr=root;
    for(int i=31;i>=0;i--){

      int bitnum=(num&(1<<i))!=0;
      int opsidx=1-bitnum;

      if(curr->children[opsidx]){
        maxor|=(1<<i);
        curr=curr->children[opsidx];
      }

     else
      curr=curr->children[bitnum];
    }

return maxor;
}

};
  

 void maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        
    int size=nums.size();
    Trie* t=new Trie();
    sort(nums.begin(),nums.end());

    vector<pair<int,pair<int,int>>>offlinequery;

    int q=queries.size();
    vector<int>ans(q,0);

    for(int i=0;i<q;i++){
     offlinequery.push_back({queries[i][1],{queries[i][0],i}});
    }

    sort(offlinequery.begin(),offlinequery.end());

     int j=0;

  for(int i=0;i<q;i++){

        while(j<size && nums[j]<=offlinequery[i].first){
        // insert all number in trie les than equal query element
        t->insert(nums[j]);
        j++;
        }
        
    // no element in trie
     if(j==0){
      ans[offlinequery[i].second.second]=-1;
     }

     else{
      ans[offlinequery[i].second.second]=t->xorcalculate(offlinequery[i].second.first,0);
     }
  
    
    }

    for(auto it:ans){
        cout<<it<<" ";
    }
     
    }
 
int main()
{

int size;
cout<<"enter size of array\n";
cin>>size;

vector<int>nums(size);

for(int i=0;i<size;i++){
    cin>>nums[i];
}

int q;
cout<<"enter number of query\n";
cin>>q;

vector<vector<int>>queries;

while(q--){
    int xi,mi;
    cin>>xi>>mi;
    queries.push_back({xi,mi});
}

maximizeXor(nums,queries);
 
    return 0;
}