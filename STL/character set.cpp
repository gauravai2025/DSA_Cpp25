#include<bits/stdc++.h>
using namespace std;
int main()  
{  
    char n;  
    set<char> example = {'a','b','c','d','e'};  
      
    cout<<"Enter the element which you want to search: ";  
    cin>>n;  
   
    auto search = example.find(n);  
    if (search != example.end()) {  
        cout << n<<" found and the value is " << *search << '\n';  
    } else {  
        cout << n<<" not found\n";  
    }  
}  