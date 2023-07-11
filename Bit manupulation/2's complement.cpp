#include<bits/stdc++.h>
using namespace std;
 
int main()
{
cout<<"enter number\n";
int n;
cin>>n;
cout<<"1's complement of "<<n<<" is: "<<~n<<"\n";
cout<<"1's complement of "<<n<<" is: "<<-(n+1)<<"\n";

cout<<"2's complement of "<<n<<" is: "<<~n+1<<"\n";
cout<<"2's complement of "<<n<<" is: "<<-n<<"\n";

    return 0;
}