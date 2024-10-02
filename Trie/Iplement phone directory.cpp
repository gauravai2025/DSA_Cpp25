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
        }
        insertutil(child,str.substr(1));


    }

   void insert(string word){
         insertutil(root,word);
    }
    
    
    void printsuggestion(TrieNode* curr,vector<string>&lst,string prefix){
        
        // base case
        
        if(curr->isterminal)
        lst.push_back(prefix);
        
        // check all pssibility
        
        for(char ch='a';ch<='z';ch++){
            TrieNode* nxt=curr->children[ch-'a'];
            
            if(nxt){
                prefix.push_back(ch);
                printsuggestion(nxt,lst,prefix);
                // backtrack
                prefix.pop_back();
                
            }
            
        }
        
    }
    
     void getSuggestion(string &querystr,vector<vector<string>>&output){
         
         string prefix="";
         char lastchar;
         TrieNode* prev=root;
        

         
         for(int i=0;i<querystr.size();i++){
             lastchar=querystr[i];
             prefix.push_back(querystr[i]);
             TrieNode* curr=prev->children[querystr[i]-'a'];
             
             if(curr){
             vector<string>lst;
             printsuggestion(curr,lst,prefix);
             output.push_back(lst);
             prev=curr;
             }
             
         else{
         int rem=querystr.size()-i;
         while(rem--){
          output.push_back({"0"}); 
             }
             
             break;
         }
         
         
         }
        
    }


};

    vector<vector<string>>displayContacts(int n,  vector<string>contacts, string &querystr)
    {
       
       Trie* t= new Trie();
       
       for(int i=0;i<n;i++){
        t->insert(contacts[i]);   
       }
       
       vector<vector<string>>output;
           
     t->getSuggestion(querystr,output);

     for(auto lst:output){

        for(auto name:lst){
            cout<<name<<" ";
        }

        cout<<endl;
     }

           
       
       
    }
 
int main()
{

    int num_contact;
    cout<<"enter number of contacts\n";
    cin>>num_contact;

    vector<string>contacts;
     string str;

    for(int i=0;i<num_contact;i++){
        cin>>str;
        contacts.push_back(str);
    }

    string querystr;
    cout<<"enter prefix string\n";
    cin>>querystr;

    displayContacts(num_contact,contacts,querystr);

    return 0;
}