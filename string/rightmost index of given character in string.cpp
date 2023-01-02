#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter string\n";
    cin>>str;
    char ch;
    cout<<"enter character\n";
    cin>>ch;
    int temp,cnt=0;
    int ln=str.size();
    for(int i=0;i<ln;i++){
        if(str[i]==ch){
            cnt=1;
        temp=i+1;
    }
    }
    if(cnt==1)
    cout<<temp;
    else
    cout<<-1;
    return 0;
}