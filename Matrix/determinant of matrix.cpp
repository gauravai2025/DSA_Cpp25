#include <bits/stdc++.h>

using namespace std;

long long int countSetBits(int x)
{
    return __builtin_popcountll(x);
}

void gaurav()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        vector<long long int> arr(num, 0);

        for (int i = 0; i < num; ++i)
        {
            cin >> arr[i];
        }

        map<int, vector<long long int>> grp;

        for (int i = 0; i < num; ++i)
        {
            grp[countSetBits(arr[i])].push_back(arr[i]);
        }

        vector<int> sortedarr(arr.begin(), arr.end());

        sort(sortedarr.begin(), sortedarr.end());

        for (auto &ele : grp)
        {
            sort(ele.second.begin(), ele.second.end());
        }

        vector<int> narr;

        for (auto &ele : grp)
        {

            for (auto num : ele.second)
            {
                narr.push_back(num);
            }
        }

        if (sortedarr == narr)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    gaurav();

    return 0;
}
