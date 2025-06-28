#include<bits/stdc++.h>
using namespace std;
 
class human{

    public:
    int hgt;
    int wgt;

    //parameterised constructor
    human(int hgt, int wgt){
        this->hgt = hgt;
        this->wgt = wgt;
    }
    
    human(human &temp){ // copy constructor
        cout << "Copy constructor 1 called" << endl;
        this->hgt = temp.hgt;
        this->wgt = temp.wgt;
    }

    human(human *temp){ // copy constructor
        cout << "Copy constructor 2 called" << endl;
        this->hgt = temp->hgt;
        this->wgt = temp->wgt;
    }
};

int main()
{

    human h1(5,6); // parameterised constructor called
    human h2(h1); // copy constructor 1 called
    human h3(&h1); // copy constructor 2 called
 
 
    return 0;
}