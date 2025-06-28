#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// define policy based data structure
typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// find_by_order, order_of_key
// store the element in sorted order and also provide the index of element in sorted order like 0 based indexing also provide the number of element greater than that element

// store element like set only unique element

// implemented using red black ~ balanced binary search  tree

int main()
{

  // initialize
  pbds arr;

  // define size
  int size;
  cout << "Enter the size : ";
  cin >> size;

  // insert elements

  cout << "Enter the elements :\n ";

  for (int i = 0; i < size; i++)
  {
    int x;
    cin >> x;
    arr.insert(x); // time complexity O(logn)
  }

  // find_by_order takes input as index position and return the element and iterator at that index

  // time complexity O(logn)

  cout << *arr.find_by_order(1) << endl;        // 1st largest element
  cout << *arr.find_by_order(0) << endl;        // 0th largest element
  cout << *arr.find_by_order(size + 2) << endl; // print always 0 if position exceed number of element

  // order_of_key takes input as element and return the index position of that element or number of element greater than that element

  // time complexity O(logn)

  cout << arr.order_of_key(3) << endl;        // number of element greater than 3
  cout << arr.order_of_key(2) << endl; // number of element greater than 4

  // print ordered set
  cout<<"ordered set is : ";
  
  for(auto ele:arr){
    cout<<ele<<" ";
  }

  return 0;
}