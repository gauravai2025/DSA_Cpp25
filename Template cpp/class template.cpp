#include<bits/stdc++.h>
using namespace std;

template<typename T>

class unkonwn{
    public:

    T b;
};
 
int main()
{
unkonwn<int> ob1; // data type of b is int creating object of class unkonwn
//unkonwn ob2; // error have mention data type of b
ob1.b=5;
cout<<ob1.b<<endl;
unkonwn<char> ob2; // data type of b is char creating object of class unkonwn
ob2.b='a';
cout<<ob2.b<<endl;
unkonwn<float> ob3; // data type of b is float creating object of class unkonwn
ob3.b=5.7;
cout<<ob3.b<<endl;
    return 0;
    // all object are of same class but data type of b is different
 //   property of class is same but data type of property is different
}