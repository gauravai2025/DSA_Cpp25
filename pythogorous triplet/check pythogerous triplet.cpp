// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

    // Write C++ code here
bool pytho_triplet(int x,int y,int z){
    if(x*x==y*y+z*z || y*y==x*x+z*z || z*z==x*x+y*y){
    return true;}
   else 
   return false;
    

}
int main() {
    int x,y,z;
    cout<<"enter number";
    cin>>x>>y>>z;
   if( pytho_triplet(x,y,z))
     cout<<"pthogorous triplet";
     else
     cout<<"not";
    return 0;
}