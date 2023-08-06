#include<bits/stdc++.h>
using namespace std;
 
 class TrieNode{
    public:
    char data;
    bool isterminal;
    int childcnt;
    TrieNode* children[26];
    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isterminal=0;
        childcnt=0;
    }

};


class Trie {
    public:
    TrieNode* root;
    Trie(char ch){
        root=  new TrieNode(ch);
    }
    
    void insertutil(TrieNode* root,string str){
        // base case
        if(str.length()==0){
            root->isterminal=1;
            return ;
        }
        // assumption character is only small letter
        int index=str[0]-'a';
        TrieNode* child;
        // character is present
        if(root->children[index]!=NULL){
            child=root->children[index];

        }
        // character is not present
        else{
            child=new TrieNode(str[0]);
            root->children[index]=child;
            root->childcnt++;
        }
        insertutil(child,str.substr(1));


    }

   void insert(string word){
         insertutil(root,word);
    }


void LCP(string first,string &ans){
    for(int i=0;i<first.size();i++){
        char ch=first[i];
        if(root->childcnt==1){
            ans+=ch;
            int idx=ch-'a';
            root=root->children[idx];
        }
        else 
        return ;
        if(root->isterminal)
        return ;
    }

}
};



 string longestCommonPrefix(vector<string>& strs,int size) {
        Trie *t=new Trie('\0');
        // insert all string into trie
        bool flag=0;
        for(int i=0;i<size;i++){
            if(strs[i].size()==0){
            flag=1;
            break;
            }
            t->insert(strs[i]);
        }
         string ans="";
        if(flag)
        return ans;
        string first=strs[0];
       t->LCP(first,ans);
        return ans;

 }


int main()
{
cout<<"enter number of string: \n";
int size;
cin>>size;
vector<string>strs(size);
cout<<"enter string:\n";
for(int i=0;i<size;i++){
    cin>>strs[i];
}
 cout<<"longest common prefix: "<<longestCommonPrefix(strs,size)<<"\n";
 
 
 
    return 0;
}