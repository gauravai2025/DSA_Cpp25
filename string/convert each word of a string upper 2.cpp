#include<bits/stdc++.h>
using namespace std;
 
int main()
{

while(true){
    string str;
    cin>>str;
    if(str.size()==0)
    break;
    for(int i=0;i<str.size();i++){
    str[i]=str[i]-32;

}
cout<<str<<endl;

}

    return 0;
}