#include<bits/stdc++.h>
using namespace std;


bool searchPattern(string& txt, string& pat) {
    int patlen = pat.size();
    int txtlen = txt.size();

    if (patlen > txtlen) return false; // Edge case: pattern longer than text

    // Step 1: Create the bad character table
    vector<int> hash(26, -1); // Initialize table for all ASCII characters

    for (int i = 0; i < patlen; i++) {
        hash[pat[i]-'a'] = i; // Store the last occurrence of each character in the pattern
    }

    // Step 2: Start matching
    int right = patlen - 1;

    while (right < txtlen) {
        bool flag = 1;
        int st = patlen - 1;
        int cnt = 0;

        // Match the pattern from right to left
        while (st >= 0) {
           
            if (txt[right - cnt] == pat[st]) {
                st--;
                cnt++;
            } 
            
            else {
                flag = 0;
                break;
            }
        }

        if (flag) return 1; // Pattern found

        // Calculate shift using the bad character heuristic
        right += max(1, st - hash[txt[right - cnt]-'a']);
    }

    return 0; // Pattern not found
}

 
int main()
{
    string txt,pat;
    cout<<"Enter the text: ";
    cin>>txt;
    cout<<"Enter the pattern: ";
    cin>>pat;

    if (searchPattern(txt, pat)) 
    cout<<"Pattern found\n";
    else
     cout<<"Pattern not found\n";
 
    return 0;
}