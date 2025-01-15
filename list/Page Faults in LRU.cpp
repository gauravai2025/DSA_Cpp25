#include<bits/stdc++.h>
using namespace std;

// In operating systems that use paging for memory management, page replacement algorithm is needed to decide which page needs to be replaced when the new page comes in. Whenever a new page is referred and is not present in memory, the page fault occurs and Operating System replaces one of the existing pages with a newly needed page.

// Given a sequence of pages in an array pages[] of length N and memory capacity C, find the number of page faults using Least Recently Used (LRU) Algorithm. 

  int pageFaults(int N, int C, int pages[]){
      
      unordered_set<int>st;
      list<int>lst;
      
      int pagefault=0;
      
      for(int i=0;i<N;i++){
         
        if(st.count(pages[i])==0){
          pagefault++;
            
        if(st.size()==C){
         st.erase(lst.front());
         lst.pop_front();
        }
        
         st.insert(pages[i]);
         lst.push_back(pages[i]);
            
        } 
        
        else{
        
     int findele=pages[i];
     auto it=lst.begin();
     
     for(;it!=lst.end();it++){
         
      if(*it==findele){
          lst.erase(it);
          break;
      }
      
    }
    
    lst.push_back(pages[i]);

        }
        
      }
      
      return pagefault;
        
    }
 
int main()
{

 int N,C;
 cout<<"Enter the number of pages\n";
    cin>>N;
    cout<<"Enter the number of cache\n";
    cin>>C;
    int pages[N];
    cout<<"Enter the pages\n";
    for(int i=0;i<N;i++){
        cin>>pages[i];
    }
    cout<<"Number of page faults are\n";
    cout<<pageFaults(N,C,pages);
 
 
    return 0;
}