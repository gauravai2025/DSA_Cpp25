#include<iostream>
using namespace std;


bool palindrome(string str){
    int st=0,end=str.size()-1;
    while(st<=end){
        if(str[st]!=str[end])
        return 0;
        else{
        st++; 
        end--;
        }
    }
     return 1;
}

int main(){
    cout<<"enter string without space\n";
    string s;
    cin>>s;
    cout<<"is palindrome or not "<<palindrome(s);
    return 0;


}

