#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, int> P;

void generateSubarray(vector<ll> &nums, int n)
{

    priority_queue<P, vector<P>, greater<P>> pq;

    // pair<sum, i> -> (subarray sum, till index i)

    for (int i = 0; i < n; i++)
    {
        pq.push({nums[i], i});
    }

    while (!pq.empty())
    {

        auto p = pq.top();
        pq.pop();
        cout << p.first << " ";

        // If index is less than the last index, increment it and add its
        // value
        if (p.second < n - 1)
        {
            p.second++;
            p.first += nums[p.second];
            pq.push(p);
        }
    }
}

int main()
{

    int size;
    cout << "enter size of array\n";
    cin >> size;

    vector<ll> arr(size, 0);
    cout << "enter element of array\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    cout<<"subarray sum in sorted order: \n";
    generateSubarray(arr, size);

    return 0;
}