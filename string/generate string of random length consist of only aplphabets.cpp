#include<bits/stdc++.h>
using namespace std;

// Function to generate a random string of given length
string generateRandomString(int length) {
    static const char alphanum[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    string randomString;
    srand(time(0)); // Seed the random number generator

    for (int i = 0; i < length; ++i) {
        randomString += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return randomString;
}

int main()
{
   // Generate random string with length less than 500
    int length = rand() %101; // Random length less than 101
    cout << generateRandomString(length) << endl;
    return 0;
}