#include <bits/stdc++.h>
using namespace std;

void generateBinaryStrings(int num, vector<string> &ans)
{

    for (int i = 0; i < (1 << num); i++)
    {
        string str = "";

        for (int j = 0; j < num; j++)
        {

            if (i & (1 << j))
            {
                str += '1';
            }
            else
                str += '0';
        }

        ans.push_back(str);
    }
}

int main()
{
    int size;
    cout << "Enter the size of the string: \n";
    cin >> size;
    vector<string> ans;

    generateBinaryStrings(size, ans);

    for (auto x : ans)
    {
        cout << x << endl;
    }

    return 0;
}