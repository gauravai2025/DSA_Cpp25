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
l.erase(l.begin()); // erase element from begining
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
 
    list<int>mylist={1,2,3,4,5};
    list<int>::iterator it;
    it=mylist.begin();
    cout<<"elements of list by iterator method\n";
    for(;it!=mylist.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
     list<int>::iterator it1 = find(mylist.begin(), mylist.end(), 3);
    cout << *it1 << endl;
    cout<<"erase element by iterator method\n";
    mylist.erase(it1);

  foart(auto it:mylist){
    cout<<it<<" ";


  }
  cout<<endl;
  cout<<"erase element by position from begining\n";
  mylist.erase(mylist.begin()+1); // erase element by 2nd position from begining
  cout<<"elements of list after erasing 2nd element\n";
  for(auto it:mylist){
    cout<<it<<" ";
  }
  cout<<endl;
    return 0;
    cout<<"insert element by iterator method at random position\n";
    mylist.insert(it1,3);
    cout<<"elements of list after inserting 3 at random position\n";
    for(auto it:mylist){
        cout<<it<<" ";
    }
    cout<<endl;
      // Clear the list erase all element list empty
    mylist.clear();
    cout<<"size of list after clear function\n";
    cout<<mylist.size();

}