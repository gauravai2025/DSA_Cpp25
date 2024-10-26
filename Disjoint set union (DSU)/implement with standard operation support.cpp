#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
// declare parent array

int parent[N];

void make(int node)
{
    // single node self parent
    parent[node] = node;
}

int findpathcompression(int node)
{
    if (parent[node] == node)
        return node;
    // path compression
    return parent[node] = findpathcompression(parent[node]);
}

void setleader(int node)
{

    int par = findpathcompression(node);

    parent[par] = node;
    parent[node] = node;
}

void Union(int node1, int node2)
{
    int par1 = findpathcompression(node1);
    int par2 = findpathcompression(node2);

    // parent of both nodes not the same then merge group else lies in the same group
    if (par1 != par2)
    {
        parent[par1] = par2;
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
    
    int q;
    cin >>q;

    int u, v, a, b;
    int type;

    while (q--)
    {
        cin >> type;

        if (type == 1)
        {

            cin >> u >> v;
            Union(u, v);
        }

        else if (type == 2)
        {
            cin >> a;
            setleader(a);
        }

        else
        {
            cin >> a;
            cout << findpathcompression(a) << endl;
        }
    }

    return 0;
}