#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
/*
    Time Complexity - O(Min(M, N))
    Space Complexity - O(Min(M, N))
*/

int recursiveProductHelper(long long int m, long long int n)
{
    if (n == 0)
    {
        // If the multiplier becomes zero, then the product also becomes zero.
        return 0;
    }

    // Recursively add 'M' to itself.
   return  (m + recursiveProductHelper(m, n - 1)) % mod;

    
}

int recursiveProduct(int m, int n)
{
    // Find the larger and smaller of the two numbers.
    int small = min(m, n);
    int large = max(m, n);

    // Recursively add the larger of the two numbers to itself.
    return recursiveProductHelper(large, small);
}

	

int main()
{
    cout<<"Enter the two numbers:\n";
    int a,b;
    cin>>a>>b;

 cout<<recursiveProduct(a,b);
 
 
    return 0;
}