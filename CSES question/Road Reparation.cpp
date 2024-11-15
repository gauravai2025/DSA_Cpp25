#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
// declare parent array

int parent[N];

// store size of each group
int Rank[N];

void make(int node)
{
    // single node self parent
    parent[node] = node;

    // intial each group of size 1
    Rank[node] = 0;
}

int findpathcompression(int node)
{
    if (parent[node] == node)
        return node;
    // path compression
    return parent[node] = findpathcompression(parent[node]);
}

void Unionbyrank(int node1, int node2)
{
    int par1 = findpathcompression(node1);
    int par2 = findpathcompression(node2);

    // parent of both node not same then merge group else lies in same group

    if (par1 != par2)
    {

        // find size of group
        if (Rank[par2] > Rank[par1])
            // ensure always link small group to large group
            swap(par1, par2);

        parent[par2] = par1;

        if (Rank[par1] == Rank[par2])
            Rank[par1]++;
    }
}

void roadrepair(vector<pair<int,pair<int, int>>>&edge,int n){

  sort(edge.begin(), edge.end());

    long long int costmst = 0;
     int numedge=0;

    for (int i = 0; i < edge.size(); i++)
    {
        int u = edge[i].second.first;
        int v = edge[i].second.second;

        if (findpathcompression(u) != findpathcompression(v))
        {
            costmst += edge[i].first;
            Unionbyrank(u, v);
            numedge++;
            
        }
    }

     if(numedge<n-1){
    cout<<"IMPOSSIBLE"<<endl;
    return ;
    }

    cout << costmst << endl;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<pair<int, pair<int, int>>>edge;

    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
     
    while (m--)
    {
    int a, b, c;
    cin >> a >> b >> c;

    edge.push_back({c, {a, b}});
    }

    roadrepair(edge,n);

    return 0;
}