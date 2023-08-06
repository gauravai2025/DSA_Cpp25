
#include <bits/stdc++.h>
using namespace std;

// d is the number of characters in the input alphabet
#define d 256
const int q= INT_MAX;

/* pat -> pattern
	txt -> text
	q -> A prime number
*/
void search(string pat, string txt,vector<int> &ans)
{
	int M = (pat).length();
	int N = (txt).length();
	int i, j;
	long long int p = 0; // hash value for pattern
long long	int t = 0; // hash value for txt
long long	int h = 1;

	// The value of h would be "pow(d, M-1)%q"
	for (i = 0; i < M - 1; i++){
		h = (h * d) % q;
    }
	// Calculate the hash value of pattern and first
	// window of text
    // we mod to avoid overflowing of value but we should
	// take as big q as possible to avoid the collison
	for (i = 0; i < M; i++) {
		p = (d * p + pat[i]) % q;
		t = (d * t + txt[i]) % q;
	}

	// Slide the pattern over text one by one
	for (i = 0; i <= N - M; i++) {

		// Check the hash values of current window of text
		// and pattern. If the hash values match then only
		// check for characters one by one
		if (p == t) {
			/* Check for characters one by one */
			for (j = 0; j < M; j++) {
				if (txt[i + j] != pat[j]) { // character not match
					break;
				}
			}

			if (j == M)
				ans.push_back(i);
		}

		// Calculate hash value for next window of text:
		// Remove leading digit, add trailing digit
		if (i < N - M) {
			t = (d * (t - txt[i] * h) + txt[i + M]) % q;

			// We might get negative value of t, converting
			// it to positive
			if (t < 0)
				t = (t + q);
		}
	}
}


int main()
{
   string  txt;
string pat;
cout<<"enter text\n";
  getline(cin, txt);
cout<<"enter pattern\n";
  getline(cin, pat);
vector<int> ans;
search(pat, txt,ans);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	return 0;
}


