#include<iostream> 
using namespace std;

void sayDigit(int n, string arr[]) {

    //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;
    //recursive call
    
    cout << arr[digit] << " ";
    sayDigit(n, arr);


}

int main() {

    string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
     cout<<"enter number\n";
    int n;
    cin >> n;
    cout << endl ;
    sayDigit(n, arr);
    cout << endl ;


    return 0;
}