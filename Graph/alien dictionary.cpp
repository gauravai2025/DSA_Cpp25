#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>adj,  vector<int>&toposrt,vector<int>&indegree
 ){
    queue<int>q;

    for(int i=0;i<indegree.size();i++){

    if(indegree[i]==0)
    q.push(i);
    }

    while(!q.empty()){

    int node=q.front();
    q.pop();
    toposrt.push_back(node);
        
         for (auto &ngbr : adj[node]) {

          indegree[ngbr]--;
          
          if(indegree[ngbr]==0){
            q.push(ngbr);
           
          }
        }
    }

 }
 
    string findOrder(vector<string> dict, int k) {
       
       vector<vector<int>>adj(k+1);
       
        vector<int>indegree(k,0);
        string ans="";

       for(int i=0;i<dict.size()-1;i++){
           string str1=dict[i];
           string str2=dict[i+1];
           int len1=str1.size();
           int len2=str2.size();
           int len=min(len1,len2);
           
           bool possible=0;

           for(int j=0;j<len;j++){
           
          if(str1[j]!=str2[j]){
              
          int u=str1[j]-'a';
          int v=str2[j]-'a';
          
          adj[u].push_back(v);
          indegree[v]++;
          possible=1;
          break;
          }
          
        }

       if(!possible && len1>len2)
       return ans;   // not posible  eg abdf
                                     // abd 

       }
       
       vector<int>toposrt;
       
      bfs(adj,toposrt,indegree);
             
      if(toposrt.size()!=k) // no order possible due to cycle present eg abs
                                                                      // bgf
                                                                      // agf 
       return ans;
      
      for(auto node:toposrt){
          ans.push_back(node+'a');
      }
       return ans;
    }

int main()
{
    int k;
    cout<<"enter number of distinct letter in dictionary\n";
    cin>>k;

    int size;
    cout<<"size of word in dictionary\n";
    cin>>size;

    vector<string>dict;

    for(int i=0;i<size;i++){
      string str;
      cin>>str;
      dict.push_back(str);
    }

cout<<"alien dictionary order of lettters: "<<findOrder(dict,k);
    return 0;
}