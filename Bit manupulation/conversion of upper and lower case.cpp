#include<bits/stdc++.h>
using namespace std;
void lower_to_upper(char ch){
    char ch1=(ch & (~(1<<5)));
  cout<<ch1<<endl;
}

void upper_to_lower(char ch){
    char ch1 =(ch |(1<<5));
     cout                                                         <<ch1<<endl;
}

int main(){
   cout<<"enter lower case to convert\n";
   char ch;
   cin>>ch;
    lower_to_upper(ch);

    cout<<"enter upper case to convert\n";
   char ch1;
   cin>>ch1;
   upper_to_lower(ch1);

  return 0;
    
}