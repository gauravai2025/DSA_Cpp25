
#include <iostream>
using namespace std;
int main()
{
 cout<<"enter size of array";
    int n;
    cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
      
  }
  // two pointer approach
  int left=0,rgt=n-1;

  while(left<=rgt){

    while( left<=rgt && a[left]==0){
  left++;
    }
    while(left<=rgt && a[rgt]==1){
    rgt--;
        }

        if(left<=rgt){
            // a[left]=0;
            // a[rgt]=1;
            swap(a[left],a[rgt]);
            left++;
            rgt--;
        }
  }
  for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
  }
  
    return 0;
}