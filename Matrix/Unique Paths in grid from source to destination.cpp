#include<bits/stdc++.h>
using namespace std;

 int uniquePaths(int m, int n) {

        long long int sum1=m+n-2;
        long long int ans=1;
        long long int p=1;
        m=m-1;
        n=n-1;
        int gcd1;

        while(sum1){
        ans*=sum1;

      if(m>0 && n>0){
        p*=(m*n);
            m--;
            n--;
            
         
    }

    else if(m>0){
        p*=m;
        m--;
    }

    else if(n>0){
        p*=n;
        n--;
    }

    gcd1=__gcd(ans,p);
    ans/=gcd1;
    p/=gcd1;
    sum1--;
    
          
        }

return ans;
        
    }

 
int main()
{

int row,col;
cout<<"enter number of rows";
cin>>row;
cout<<"enter number of columns";
cin>>col;

cout<<uniquePaths(row,col);

    return 0;
}