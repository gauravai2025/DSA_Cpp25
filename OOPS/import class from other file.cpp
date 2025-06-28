#include<bits/stdc++.h>
using namespace std;
#include<hero.cpp>

int main()
{

    // creating an object of the Hero class
    Hero h1; // object created on stack
    h1.level = 'A';
    h1.health = 70;
    cout << "Level: " << h1.level << endl;
    cout << "Health: " << h1.health << endl;
 
 
return 0;
}