  #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int x;
     vector<int>v(4);// vector size 4 all element value 0
         vector<int>v2(3,5);    //vector size 3 all element      5  
         
 for(auto it:v){
    cout<<it<<" ";
  }
  
  cout<<endl;
  
  v.push_back(5);
  
  for(auto it:v){
    cout<<it<<" ";
  }
  
  v.pop_back(); // delete element from end
  cout<<endl;
    for(auto it:v){
    cout<<it<<" ";
  }
  
  cout<<endl;
  
   for(auto it:v2){
    cout<<it<<" ";
  }
  
  return 0;
    }