#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    unordered_set<int>s={1,2,3,4,5};
    auto it=s.find(3);
 //   *it=12;  // give error because it is const iterator
    cout<<*it<<endl;

    unordered_map<int,int>mp={{1,2},{2,3},{3,4}};
    auto it1=mp.find(2);
    cout<<it1->first<<" "<<it1->second<<endl;
    it1->second=12;
  //  it1->first=15; give error because it is const iterator read only
  cout<<"key remain same value changed\n";
      cout<<it1->first<<" "<<it1->second<<endl;

      cout<<"value at key 3\n";
        cout<<mp[3]<<endl;
        cout<<"value at key 3\n";
        cout<<mp.at(3)<<endl;

        cout<<"value at key 43\n";
        cout<<mp[43]<<endl;
        //cout<<mp.at(43); error because 43 is not present in map
    return 0;
}