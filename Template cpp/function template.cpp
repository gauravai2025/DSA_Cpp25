#include<bits/stdc++.h>
using namespace std;

// int square(int x){
//     return x*x;
// }
//  // for each data type we have to write function again and again
//  // to avoid this we use function template
// double square(double x){
//     return x*x;
// }
 template<typename T>   // template<typename T,typename U>  // for multiple data types
    T square(T x){
        return x*x;  // data type of T is decided at compile timeb by compiler based on the argument passed in main function
    }

int main()
{
cout<<square(5)<<endl;
cout<<square<int>(5)<<endl;

cout<<square(5.5);
    return 0;
}