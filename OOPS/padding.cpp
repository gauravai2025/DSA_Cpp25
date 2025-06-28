#include<bits/stdc++.h>
using namespace std;

class Hero1 {
    public:
    char health;
    char level;
};

class Hero2{
    public:
    int health;
    int level;
};


class Hero3{
    public:
    int health;
    char level;
};


class Hero4{

    public:
    int health;
    char level;
    long long int value;
};

class Hero6{
    public:
    char level;
    int health;
};
    
    

 
class Hero5 {
    public:
        long long int value;  // 8 bytes
        int health;           // 4 bytes
        char level;           // 1 byte
    };
    

    
 
int main()
{

cout<<"Size of int is " << sizeof(int) << endl;
cout<<"Size of char is " << sizeof(char) << endl;
cout<<"Size of Hero1 class is " << sizeof(Hero1) << endl;
cout<<"Size of Hero2 class is " << sizeof(Hero2) << endl;
cout<<"Size of Hero3 class is " << sizeof(Hero3) << endl;
cout<<"Size of Hero4 class is " << sizeof(Hero4) << endl;
cout<<"Size of Hero5 class is " << sizeof(Hero5) << endl;
cout<<"Size of Hero6 class is " << sizeof(Hero6) << endl;
 
 return 0;
}