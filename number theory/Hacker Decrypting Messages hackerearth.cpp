#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> feq(1e6 + 1, 0);

    int x;

    while (n--)
    {
        cin >> x;
        feq[x]++;
    }

    while (q--)
    {
        int p;
        cin >> p;

        bool flag = true;

        for (int i = 1; i * i <= p; i++)
        {
            if (p % i == 0)
            {
                if (feq[i] != 0 && !isPrime(p / i))
                {
                    cout << "YES\n";
                    flag = false;
                    break;
                }

                if (feq[p / i] != 0 && !isPrime(i))
                {
                    cout << "YES\n";
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
            cout << "NO\n";
    }

    return 0;
}
