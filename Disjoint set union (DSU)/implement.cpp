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

int Find(int node)
{

    if (parent[node] == node) // parent of root node itself
        return node;

    return Find(parent[node]);
}

void Union(int node1, int node2)
{
    int par1 = Find(node1);
    int par2 = Find(node2);

    // parent of both node not same then merge group else lies in same group

    if (par1 != par2)
    parent[par2] = par1;  // merging group2 into group1
}

int main()
{
    int n;
    cout <<"enter number of nodes\n";
    cin >>n;

    for (int i = 1; i <= n; i++)
    {
        make(i);
    }

    int k;
    cout << "enter number of queries to connect nodes ";
    cin >> k;

    cout << "enter node value to connect\n";
    int u, v;

    while (k--)
    {
        cin >> u >> v;
        Union(u, v);
    }

    // number of connected components/ number of distincts group  in undirected graph
    int connected_ct = 0;

    for (int i = 1; i <= n; i++)
    {
        if (Find(i) == i)  // number of group number of root node
            connected_ct++;
    }

    cout << "number of distinct groups after connecting nodes \n"
         << connected_ct << endl;

    return 0;
}