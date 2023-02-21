
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int>s;
    s.insert(5);
     s.insert(2);
      s.insert(9);
      for(auto it:s){
          cout<<it<<endl;
      }
      s.erase(5);
       for(auto it:s){
          cout<<it<<endl;
      }

    return 0;
}