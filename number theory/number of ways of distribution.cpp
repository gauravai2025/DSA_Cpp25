// You are given two positive integers n and limit.

// Return the total number of ways to distribute n candies among 3 children such that
// no child gets more than limit candies.

#include <bits/stdc++.h>
using namespace std;

long long C(long long n, long long r)
{
    if (r < 0 || r > n)
        return 0;

    r = min(r, n - r);

    long long ans = 1;

    for (long long i = 1; i <= r; i++)
    {
        ans = ans * (n - i + 1) / i;
    }

    return ans;
}

long long countSolutions(int n, int m, int limit)
{

    // No variables
    if (m == 0)
        return (n == 0);

    // limit < 0 is invalid
    if (limit < 0)
        return 0;

    long long ans = 0;

    // Inclusion-Exclusion
    for (int k = 0; k <= m; k++)
    {

        long long remaining =
            n - 1LL * k * (limit + 1);

        if (remaining < 0)
            break;

        long long ways =
            C(m, k) * C(remaining + m - 1, m - 1);

        if (k % 2 == 0)
            ans += ways;
        else
            ans -= ways;
    }

    return ans;
}

int main()
{

    int numcandy, numchild, limit;
    cin >> numcandy >> numchild >> limit;

    cout << countSolutions(numcandy, numchild, limit) << '\n';

    return 0;
}