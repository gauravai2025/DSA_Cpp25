#include<bits/stdc++.h>
using namespace std;
#include<stack>

void insertatBottom(string str,stack<string>&st){

    // base case

    if(st.empty()){
        st.push(str);
        return ;
    }

    string s=st.top();
    st.pop();

    insertatBottom(str,st);

    st.push(s);
}

int main(){

    stack<string>st;
    
    cout<<"empty or not: "<<st.empty()<<endl;
    st.push("gaurav");
    st.push("rohit");              // input of element 
    st.push("adarrsh");
    cout<<"first elemnt "<<st.top()<<endl;
    st.pop();    // remove first element
    cout<<"first element "<<st.top()<<endl;
    cout<<"size :"<<st.size()<<endl;
    cout<<"empty or not: "<<st.empty()<<endl;

    insertatBottom("arambh",st);

    // // print all element
    // for(auto i:st){
    //     cout<<i<<endl;  // not work in stack
    // }

// cout<<st[0]<<endl; // not work in stack

    // print all element    
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
 
    return 0;
}
