#include<bits/stdc++.h>
using namespace std;


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

      
void xorcalculate(int num,int &maxor){
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

}
    
int max_xor(vector<int>& nums){

    int size=nums.size();
    int rslt=0;
    int maxor=0;

    for(int i=0;i<size;i++){
        maxor=0;
        xorcalculate(nums[i],maxor);
        rslt=max(maxor,rslt);
    }

    return rslt;

}



};


int findMaximumXOR(vector<int>& nums) {

    int size=nums.size();

    Trie* t=new Trie();

    for(int i=0;i<size;i++){
     // insert all number in trie
    t->insert(nums[i]);
    }

    return t->max_xor(nums);

        
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
 
 cout<<"maximum xor value pair: "<<findMaximumXOR(nums);
 
 
    return 0;
}