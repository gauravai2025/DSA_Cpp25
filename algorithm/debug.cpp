#include<bits/stdc++.h>
using namespace std;
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename...Args>
void logger(string vars,Args&&... values){
    cout<<vars<<" ";
    string delim="";
    (...,(cout<<delim<<values,delim=""));
}

int main()
{
   
    int x=9,y=8;
    float f=9.5;
    string str ="ansjd";
    char ch='e';
    deb(x,y,f,str,ch);
    return 0;
}