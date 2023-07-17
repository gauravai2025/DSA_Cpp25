
#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
// Function that finds the count
// of substrings containing only
// character C in the string S
void countSubString(string S, char C)
{
	// To store total count
	// of substrings
	long long int ans = 0;

	// To store count of
	// consecutive C's
	int conCount = 0;

	// Loop through the string
	for (char ch : S) {

		// Increase the consecutive
		// count of C's
		if (ch == C)
			conCount++;

		else {

			// Add count of sub-strings
			// from consecutive strings
			ans += (conCount
					* (conCount + 1))
					/ 2;

			// Reset the consecutive
			// count of C's
			conCount = 0;
            ans=ans%mod;
		}
	}

	// Add count of sub-strings from
	// consecutive strings
	ans += (conCount)
			* (conCount + 1)
			/ 2;

	// Print the count of sub-strings
	// containing only C
	cout << ans;
}


int main()
{
	string S = "mahabharat";

	char C = 'a';

	countSubString(S, C);

	return 0;
}
