#include<bits/stdc++.h>
using namespace std;
 
int main()
{
map<pair<string ,string>,vector<int>>mp; // map key pair of string value is a vector
string 
fn,ln;
cout<<"enter number of  key\n";
int key;
cin>>key;

int num;
int a;
for(int i=1;i<=key;i++){
    cout<<"first name , last name and number of integer to insert\n";
    cin>>fn>>ln>>num;
    cout<<"enter number\n";
    for(int j=1;j<=num;j++){
        cin>>a;
        mp[{fn,ln}].push_back(a);
    }

    }
    for(auto &it:mp){
       auto ite=(it.first);
       auto ite2=it.second;
       cout<<ite.first<<" "<<ite.second<<" :";
       for(auto it3:ite2){
        cout<<it3<<" ";

       }
       cout<<endl;
    }

    return 0;
}