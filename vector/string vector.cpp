 #include <bits/stdc++.h>
    using namespace std;

    int main() {
        vector<string>v;
        vector<string>v2;
        v.push_back("ab");
          v.push_back("ad");
            v.push_back("yb");
            for(auto it:v){
                cout<<it<<" ";
            }

            string str;
            for(int i=0;i<5;i++){
              cin>>str;
              v2.push_back(str);
            }
            return 0;
    }