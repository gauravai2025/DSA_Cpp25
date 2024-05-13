#include<bits/stdc++.h>
using namespace std;


// Function to find the GCD (Greatest Common Divisor) of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the LCM (Least Common Multiple) of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to find the LCM of an array of numbers
int findLCM(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}
 
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
   int ans=findLCM(arr,n);

cout<<ans<<endl;

    return 0;
}