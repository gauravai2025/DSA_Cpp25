
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

// perform the following queries on empty set
// 1. insert an element x in the set
// 2. erase an element x from the set
// 3. find the number of elements less than x in current set
// 4. find the kth element in the current set (0-based indexing)

int main() {
	pbds A; // declaration
   
//    int q;
//     cout<<"Enter number of queries"<<endl;
//     cin>>q;
//     int type;

//     while(q--){
//         cout<<"Enter type of query"<<endl;
//         cin>>type;
//         if(type==1){
//             int x;
//             cout<<"Enter element to insert"<<endl;
//             cin>>x;
//             A.insert(x);
//         }

//         else if(type==2){
//             int x;
//             cout<<"Enter element to erase"<<endl;
//             cin>>x;
//             A.erase(x);
//         }

//         else if(type==3){
//             int x;
//             cout<<"Enter element to find number of elements less than x"<<endl;
//             cin>>x;
//             cout<<A.order_of_key(x)<<endl;
//         }

//         else{
//             int x;
//             cout<<"Enter k to find kth element"<<endl;
//             cin>>x;
//             cout<<*A.find_by_order(x)<<endl;
//         }
//     }

	// Inserting elements - 1st query
		cout<<"output of 1st query\n";

	A.insert(1);
	A.insert(10);
	A.insert(2);
	A.insert(7);
	A.insert(2);  // ordered set only contains unique values

	// A contains
	cout << "A = ";
	for (auto i : A)
		cout << i << " ";
	cout << endl;
	cout << endl;

	// finding kth element - 4th query
	cout<<"output of 4th query\n";
	cout << "0th element: " << *A.find_by_order(0) << endl;
	cout << "1st element: " << *A.find_by_order(1) << endl;
	cout << "2nd element: " << *A.find_by_order(2) << endl;
	cout << "3rd element: " << *A.find_by_order(3) << endl;
	cout << endl;

	// finding number of elements smaller than X - 3rd query
		cout<<"output of 3rd query\n";
	cout << "No. of elems smaller than 6: " << A.order_of_key(6) << endl; // 2
	cout << "No. of elems smaller than 11: " << A.order_of_key(11) << endl; // 4
	cout << "No. of elems smaller than 1: " << A.order_of_key(1) << endl; // 0
	cout << endl;
	
	cout<<"use of lower and upper bound\n";

	// lower bound -> Lower Bound of X = first element >= X in the set
	cout << "Lower Bound of 6: " << *A.lower_bound(6) << endl;
	cout << "Lower Bound of 2: " << *A.lower_bound(2) << endl;
	cout << endl;

	// Upper bound -> Upper Bound of X = first element > X in the set
	cout << "Upper Bound of 6: " << *A.upper_bound(6) << endl;
	cout << "Upper Bound of 1: " << *A.upper_bound(1) << endl;
	cout << endl;

	// // Remove elements - 2nd query
		cout<<"output of 2nd query\n";

	A.erase(1);
	A.erase(11); // element that is not present is not affected

	// A contains
	cout << "A = ";

	for (auto i : A)
	cout << i << " ";

	cout << endl;

}