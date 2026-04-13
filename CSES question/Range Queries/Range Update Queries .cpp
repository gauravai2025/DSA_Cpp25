#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int size, qe;
    cin >> size >> qe;
    vector<long long int> arr(size, 0);
    vector<long long int> prefix(size, 0);
 
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int l, r, val, type, k;
 
    while (qe--)
    {
 
        cin >> type;
 
        if (type == 1)
        {
            cin >> l >> r >> val;
            l--;
            r--;
            prefix[l] += val;
            if (r + 1 < size)
                prefix[r + 1] += -val;
        }
 
        else
        {
            cin >> k;
            long long int currsum = 0;
            for (int i = 0; i < k; i++)
            {
                currsum += prefix[i];
            }
            cout << currsum + arr[k - 1] << "\n";
        }
    }
 
    return 0;
}