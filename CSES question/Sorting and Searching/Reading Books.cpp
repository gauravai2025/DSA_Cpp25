#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long int> books(n);

    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }

    long long int maxtimebook=*max_element(books.begin(),books.end());
    long long int indivudaltime=accumulate(books.begin(),books.end(),0ll);
    long long int remtie=indivudaltime-maxtimebook;

    if(maxtimebook>=remtie)  // time elepsed wiating time for the other reader
    {
        cout << 2*maxtimebook << endl;
    }

    else
    {
        cout <<indivudaltime<< endl;

    }
    return 0;
}
