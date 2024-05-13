#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline character after reading the value of t

while (t--) {
    string str;
    getline(cin, str);

    istringstream iss(str);
    string word;

    bool fancy = false;
    while (iss >> word) {
        cout<<word<<endl;

}
cout<<endl;
    }

 return 0;
}