#include<iostream>
#include<list>  // include library
using namespace std;
int main(){
   list<int>l; // defining of list
  list<int>l1(4); // size 4 all element zero
  for (int i:l1){
  cout<<i<<" ";
 }
 cout<<endl;
 list<int>l3(4,5);  //size 4 all element 5
 for (int i:l3){
  cout<<i<<" ";
 }
 cout<<endl;
 list<int>ln(l3);
 for (int i:l3){
  cout<<i<<" ";
 }
 cout<<endl;
  l.push_front(3);
  l.push_back(5);
  l.push_front(7);
 for (int i:l){
  cout<<i<<" ";
 }
 cout<<endl;
 l.pop_back();
 for (int i:l){
  cout<<i<<" ";
 }
 cout<<endl;
 l.pop_front();
 for (int i:l){
  cout<<i<<" ";
 }
cout<<endl;
cout<<l.empty()<<endl;  
 l.push_front(3);
l.push_back(5);
l.push_front(7);
for (int i:l){
  cout<<i<<" ";
 }
 cout<<endl;
cout<<l.back()<<endl;  //last element 
cout<<l.front()<<endl;  // first element
cout<<"size before erase\n";
l.erase(l.begin());
cout<<l.size()<<endl;
for (int i:l){
  cout<<i<<" ";
 }
 cout<<endl;
 cout<<"size after  erase\n";

 l.erase(l.begin());
cout<<l.size()<<endl;
 for (int i:l){
  cout<<i<<" ";
 }
 cout<<endl;
 
    
    return 0;

}