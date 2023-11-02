#include<iostream>
using namespace std;

// int power(int a, int b) {  correct

int power(int num1, int num2) {
    
    //cout << c <<endl; // out of scope

    int ans = 1;

    for(int i = 1; i <= num2; i++) {
        ans = ans * num1;
    }

    return ans;
}
int main()
{
    int c , d;
    cout<<"enter number\n";
    cin>> c >> d;

    int answer = power(c,d);
    cout << " answer is " << answer << endl;

    return 0;
}