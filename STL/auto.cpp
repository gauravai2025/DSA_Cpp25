#include <bits/stdc++.h>
using namespace std;

int main() {
    set<char>s;
    s.insert('a');
     s.insert('b');
      s.insert('t');
      for(auto it:s){
          cout<<it<<endl;
      }
      for(int  it:s){
          cout<<it<<endl;
      }
      for(char it:s){
          cout<<it<<endl;
      }
      return 0;
}