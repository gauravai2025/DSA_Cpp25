
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
   
   int q;
    cout<<"Enter number of queries"<<endl;
    cin>>q;
    int type;

    while(q--){
        cout<<"Enter type of query"<<endl;
        cin>>type;
        if(type==1){
            int x;
            cout<<"Enter element to insert"<<endl;
            cin>>x;
            A.insert(x);
        }

        else if(type==2){
            int x;
            cout<<"Enter element to erase"<<endl;
            cin>>x;
            A.erase(x);
        }

        else if(type==3){
            int x;
            cout<<"Enter element to find number of elements less than x"<<endl;
            cin>>x;
            cout<<A.order_of_key(x)<<endl;
        }

        else{
            int x;
            cout<<"Enter k to find kth element"<<endl;
            cin>>x;
            cout<<*A.find_by_order(x)<<endl;
        }
    }
  
    cout<<"final set is : ";
    for(auto ele:A){
        cout<<ele<<" ";
    }

}