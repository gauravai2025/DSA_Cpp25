#include <bits/stdc++.h>
#include <list>
using namespace std;

int main() {
    std::list<int> list1 = {1, 2, 3, 4};
    std::list<int> list2 = {5, 6, 7};

    // Transfer the entire contents of list2 to the beginning of list1
    list1.splice(list1.begin(), list2);

    // Display the contents of list1 after splicing
    for (const auto& elem : list1) {
        std::cout << elem << " ";
    }
    cout<<endl;
    
        // Display the contents of list2 after splicing
    for (const auto& elem : list2) {
        std::cout << elem << " ";
    }
    cout<<endl;
cout<<"second list is empty because all its element is transferred to list1";

list<int>list3={10,11,12,13};
int val1=11;
int val2=13;

list<int>::iterator it1=find(list3.begin(),list3.end(),val1);
auto it2=find(list3.begin(),list3.end(),val2);
auto pos=find(list1.begin(),list3.end(),7);

// transfer element from position 2 to 3 of list3 to the  list1 after position 1
list1.splice(pos,list3,it1,it2);
cout<<"list1 after splicing"<<endl;

for (const auto& elem : list1) {
        std::cout << elem << " ";
    }
    cout<<endl;
    cout<<"list3 after splicing"<<endl;
    for (const auto& elem : list3) {
        std::cout << elem << " ";
    }
    return 0;
}
