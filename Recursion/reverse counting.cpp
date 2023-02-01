#include<iostream> 
using namespace std;

void  counting(int n) {
   if(n==0)
   return;
   else
   cout<<n<<" ";

    counting(n-1);   


}

int main() {
cout<<"enter number\n";
    int n;
    cin >> n;
     counting(n);
    return 0;
}