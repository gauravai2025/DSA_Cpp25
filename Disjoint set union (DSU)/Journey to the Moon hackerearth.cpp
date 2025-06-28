#include<bits/stdc++.h>
using namespace std;

// The member states of the UN are planning to send  people to the moon. They want them to be from different countries. You will be given a list of pairs of astronaut ID's. Each pair is made of astronauts from the same country. Determine how many pairs of astronauts from different countries they can choose from

int par[100001];
int size[100001];

void make(int node){
    par[node]=node;
    size[node]=1;
}

int findparent(int node){
    
    if(par[node]==node)
    return node;
    
    return par[node]= findparent(par[node]);
    
}

void unionbysize(int node1,int node2){
    
    int par1=findparent(node1);
     int par2=findparent(node2);
     
     if(par1!=par2){
    if(size[par1]<size[par2])
    swap(par1,par2); 

     par[par2]=par1;
     
     size[par1]+=size[par2];  
}

}

long long int journeyToMoon(int n, vector<vector<int>> astronaut) {
    
    for(int i=0;i<n;i++){
        make(i);
    }
    
    long long int ans=0;
    
    for(auto pr: astronaut){
        int a=pr[0];
        int b=pr[1];
        
        unionbysize(a,b);
    }
    
    int remnode=n;
    
    for(int i=0;i<n;i++){
       if(par[i]==i ) {// leader of group 
       
       ans+=1ll*(remnode-size[i])*size[i];
       remnode-=size[i];
       }
    }
    return ans;
   
   
}

int main(){
    int n,p;
    cin>>n>>p;
    vector<vector<int>> astronaut;

    for (int i = 0; i < p; i++) {
      int p1,p2;
      cin>>p1>>p2;
      astronaut.push_back({p1,p2});
    }

   long long  int result = journeyToMoon(n, astronaut);

    cout<< result << "\n";
    return 0;
}





