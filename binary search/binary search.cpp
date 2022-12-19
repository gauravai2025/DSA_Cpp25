#include<iostream>
using namespace std;
int search(int a[],int y,int x){
for(int i=0;i<y;i++){
    int s=0,e=y-1;
  int   mid=(s+e)/2;
        if(a[mid]==x)
        return mid+1;
    else if(x>a[mid])
    s=mid;
    else if(x<a[mid])
    e=mid;
   

}
return 0;
}
int main(){
    int a[5]={2,4,6,8,10};
    cout<<"enter number"<<"\n";
    int n;
    cin>>n;
    search(a,5,n);
}