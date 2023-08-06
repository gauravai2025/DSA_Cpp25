#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isterminal;

    //constructor
     TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isterminal=0;
     }

};


class Trie{ 
    public:
    TrieNode*root;
    //constructor
    Trie(){
        root=new TrieNode('\0');
    }


    void insertutil(TrieNode* root,string str){
        // base case
        if(str.length()==0){
            root->isterminal=1;
            return ;
        }
        // assumption character is only capital letter
        int index=str[0]-'A';
        TrieNode* child;
        // character is present
        if(root->children[index]!=NULL){
            child=root->children[index];

        }
        // character is not present
        else{
            child=new TrieNode(str[0]);
            root->children[index]=child;
        }
        insertutil(child,str.substr(1));


    }
   void insert(string word){
         insertutil(root,word);
    }


 
    
    bool searchutil(TrieNode* root,string str){
        // base case
        if(str.length()==0){
            return root->isterminal;
        }
        // assumption character is only capital letter
        int index=str[0]-'A';
        TrieNode* child;
        // present
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        // absent
        else{   
            return false;
        }
        return searchutil(child,str.substr(1));


    }


    bool search(string str){
       return  searchutil(root,str);

    }


};


 
int main()
{
Trie *  t=new Trie();    ;             
t->insert("HELLO");
 //t->insert("abcd");
 //t->insert("gaurav");
// t.insert("trie");
 cout<<"HELLO is present or not\n"<<t->search("HELLO")<<"\n";
 
 
    return 0;
}