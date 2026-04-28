#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int feq[26] = {0};

    int size = s.size();

    for (int i = 0; i < size; i++)
    {
        feq[s[i] - 'A']++;
    }

    int cnt = 0;
    int cntnonzero = 0;
    for (int i = 0; i < 26; i++)
    {
        if (feq[i] & 1)
            cnt++;
        if (feq[i] > 0)
            cntnonzero++;
    }
    int val = 0;
    int oddpos = -1;
    int oddcnt = 0;
    if (cntnonzero == 1)
        cout << s << endl;

    else if (cnt >= 2)
        cout << "NO SOLUTION" << endl;
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (feq[i] % 2 == 0 && feq[i] > 0)
            {
                val = feq[i] / 2;
                while (val--)
                {
                    cout << char(i + 'A');
                }
            }
            else
            {
                if ((feq[i] & 1) && feq[i] > 0)
                {
                    oddpos = i;
                    oddcnt = feq[i];
                }
            }
        }
        if (oddpos != -1)
        {
            while (oddcnt--)
            {
                cout << char(oddpos + 'A');
            }
        }

        for (int i = 25; i >= 0; i--)
        {
            if (feq[i] % 2 == 0 && feq[i] > 0)
            {
                val = feq[i] / 2;
                while (val--)
                {
                    cout << char(i + 'A');
                }
            }
        }
    }

    return 0;
}