
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    cout<<"enter size of array";
    int n;
    cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
      
  }
int max=a[0];
for(int i=1;i<n;i++){
    if(max<a[i])
    max=a[i];
}
cout<<"largest element: "<<max;
    return 0;
}