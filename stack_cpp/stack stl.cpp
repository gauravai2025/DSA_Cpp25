#include<iostream>
using namespace std;
#include<stack>
int main(){
    stack<string>str;
    cout<<"empty or not "<<str.empty();
    str.push("gaurav");
    str.push("rohit");              // input of element 
    str.push("adarrsh");
    cout<<"first elemnt "<<str.top()<<endl;
    str.pop();    // remove first element
    cout<<"first element "<<str.top()<<endl;
    cout<<"size :"<<str.size()<<endl;
    cout<<"empty or not "<<str.empty();
 
    
    return 0;
}
