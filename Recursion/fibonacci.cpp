 #include<iostream> 
using namespace std;

     int fib(int n) {
        if(n <= 1)  //base case
            return n;
        return fib(n - 1) + fib(n - 2); // recurrence relation
    }

int main() {
   cout<<"cout number\n";
    int n;
    cin >> n;
    cout<<n<<"th  "<<"fibonacci term: "<<fib(n);
return 0;
}