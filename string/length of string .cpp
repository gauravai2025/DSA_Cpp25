#include<iostream>
using namespace std;
int getlength(char ch[]){
     int i=0;
    while(ch[i]!=NULL){  // for(int i=0;ch[i]!='\0')
        i++;
    }
    return i;

}
int main(){
    char ch[100];
    cout<<"enter your name\n";
    cin>>ch;
    cout<<"length of string "<<getlength(ch); //i is length of string
    return 0;

}