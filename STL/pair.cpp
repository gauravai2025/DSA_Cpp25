#include <bits/stdc++.h>
using namespace std;

int main() {
    // define pair
pair<int,string>p;
pair<int,char>p1;
pair<int,bool>p2;
cout<<p.first<<" "<<p.second<<endl;
pair<int,int >p4;
// copy pair 

// copy pair refrencing both to same pair
pair<int ,int >&p6=p4;
// pair input
int a=5;
bool b=0;

p=make_pair(2,"et");
p1={2,'a'};
p2={a,b};
cout<<"enter 1st number\n";
cin>>p4.first;
cout<<"enter 2nd number\n";
cin>>p4.second;
pair<int ,int>p5=p4;
 cout<<p4.first<<" "<<p5.first<<endl;

 return 0;
}