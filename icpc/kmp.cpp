
// Given two strings txt and pat, the task is to return all indices of occurrences of pat within txt. Search for a substring in a string Counting the number of occurrences of each prefix Counting the number of occurrences of each prefix The number of different substring in a string
vector<int> prefix_function(string s)
{
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

vector<int> search(string &pat, string &txt)
{
    int n = txt.length();
    int m = pat.length();
    vector<int> lps(m);
    vector<int> res;
    constructLps(pat, lps);

    // Pointers i and j, for traversing
    // the text and pattern
    int i = 0;
    int j = 0;
    while (i < n)
    {

    // If characters match, move both pointers forward
    if (txt[i] == pat[j])
    {
        i++;
        j++;
        // If the entire pattern is matched
        // store the start index in result
        if (j == m)
        {
            res.push_back(i - j);

            // Use LPS of previous index to
            // skip unnecessary comparisons
            j = lps[j - 1];
        }
    }
    // If there is a mismatch
    else
    {
    // Use lps value of previous index
    // to avoid redundant comparisons
    if (j != 0)
        j = lps[j - 1];
    else
        i++;
    }
    }
    return res;
}