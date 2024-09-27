#include<bits/stdc++.h>
using namespace std;

  // time complexity O(length of string) from insert , search, remove and check_prefix
    // space complexity O(26*length of string)
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
    TrieNode* root;
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

bool removeutil(TrieNode* root,string str){

    if(str.size()==0){

        bool flag=root->isterminal;
        root->isterminal=0;
        return flag;
    }

    int idx=str[0]-'A';

    TrieNode* child;
      
      // present
    if(root->children[idx]!=NULL){
        child=root->children[idx];
        removeutil(child,str.substr(1));
    }

    else{
        return false;
    }

}

void remove(string str){
    
    bool done = removeutil(root,str);

    if(done)
    cout<<"Removed\n";
    else
    cout<<"Not present\n";
}


bool check_prefix(TrieNode* root,string str){

    if(str.size()==0){
        return 1;
    }

    int idx=str[0]-'A';

    TrieNode* child;
      
      // present
    if(root->children[idx]!=NULL){
        child=root->children[idx];
       return  check_prefix(child,str.substr(1));
    }

    else{
     return false;
    }

}
   

 void startsWith(string prefix) {

        bool exist=check_prefix(root,prefix);

        if(exist)
        cout<<"Prefix exist\n";
        else
        cout<<"Prefix not exist\n";
    }

   void  getallstring(TrieNode* root,string str,vector<string>&dict){

        if(root->isterminal){
            dict.push_back(str);
        }

        for(int i=0;i<26;i++){
            if(root->children[i]!=NULL){
                getallstring(root->children[i],str+root->children[i]->data,dict);
            }
        }
    }

    void print_trie(vector<string>&dict){
        getallstring(root,"",dict);

    }

};


 
int main()
{
    
Trie * t=new Trie();   

t->insert("HELLO");
 t->insert("ABCD");
 t->insert("GAURAV");
 (*t).insert("TRIE");

 cout<<"HELLO is present or not\n"<<t->search("HELLO")<<"\n";
 cout<<"TREE is present or not\n"<<t->search("TREE")<<"\n";
 t->remove("ABCD");
 cout<<endl;
t->remove("shg");
cout<<endl;
cout<<"ABCD is present or not\n"<<t->search("ABCD")<<"\n";

cout<<"Prefix check:\n";
t->startsWith("HEL");
t->startsWith("TRE");

vector<string>dict;
t->print_trie(dict);


for(auto it:dict){
    cout<<it<<" ";
}
 
 
    return 0;
}