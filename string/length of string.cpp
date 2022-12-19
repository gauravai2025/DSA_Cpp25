#include<iostream>
using namespace std;
int getlength(char ch[]){
     int i=0;
    while(ch[i]!='\0'){  // for(int i=0;ch[i]!='\0')
        i++;
    }
    return i;
}

int main(){
    char ch[100];
    cout<<"enter string without space\n";
    cin>>ch;
     cout<<"size of string"<<getlength(ch);
     return 0;
}