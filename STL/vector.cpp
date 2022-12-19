#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;
    for(int i:v){
      cout<<i;
    }
    vector<int>v1(5);
    for(int i:v1){
      cout<<i;
    }
    cout<<endl;
    vector<int>v2(5,4);
    for(int j:v2){
      cout<<j;
    } 
    
    cout<<endl;
    vector<int>vn(v1);
    for(int j:vn){
      cout<<j;
    }
    cout<< v.size()<<endl;
   cout<<v.capacity()<<endl;
   v.push_back(1);
    cout<< v.size()<<endl;
   cout<<v.capacity()<<endl;
   v.push_back(6);
   cout<< v.size()<<endl;
   cout<<v.capacity()<<endl;
   v.push_back(9);
   cout<<"size ->"<< v.size()<<endl;
   cout<<"capacity->"<<v.capacity()<<endl;
   v.push_back(4);
  v.push_back(8);
  cout<<"size ->"<< v.size()<<endl;
   cout<<"capacity->"<<v.capacity()<<endl;
   for(int i:v){      // traversal of array
    cout<<i<<" ";
   }
   cout<<endl;
   v.pop_back();  // delete last element
   for(int i:v){      // traversal of array
    cout<<i<<" ";
   }
   cout<<endl;
   cout<<"size before clear \n"<<v.size()<<endl;
   cout<<"capacity before clear\n"<<v.capacity()<<endl;
   v.clear() ;// remove all elements  size 0 capacity same
    cout<<"size after clear \n"<<v.size()<<endl;
    cout<<"capacity after clear\n"<<v.capacity()<<endl;
    cout<<v2.empty();
    cout<<v.at(1);  // random access of element in vector 
    return 0;
}