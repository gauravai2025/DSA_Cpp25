#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x,y,z;
    cout << "enter dimension of cuboid: \n";

    cin >>x>>y>>z;
    vector<vector<vector<int>>>a(x, vector<vector<int>>(y, vector<int>(z, 0)));

    cout<<"enter element of cuboid: \n";

    for (int i = 0; i <x; ++i)
    {
        for (int j = 0; j <y; ++j)
        {
            for (int k = 0; k <z; ++k)
            {
                cin >> a[i][j][k];
            }
        }
    }

    vector<vector<vector<int>>> sum(x+ 1, vector<vector<int>>(y+ 1, vector<int>(z+ 1, 0)));

    for (int i = 1; i <=x; ++i)
    {
        for (int j = 1; j <=y; ++j)
        {
            for (int k = 1; k <=z; ++k)
            {
                sum[i][j][k] =
                    sum[i - 1][j][k] + sum[i][j - 1][k] +
                    sum[i][j][k - 1] - sum[i - 1][j - 1][k] - sum[i - 1][j][k - 1] -
                    sum[i][j - 1][k - 1] + sum[i - 1][j - 1][k - 1] + a[i - 1][j - 1][k - 1];
            }
        }
    }

    int q;

    cout<<"enter number of queries: \n";

    cin >> q;
    cout<<"enter query: \n";

   while(q--){
        int x1, x2, y1, y2, z1, z2;
        cin >>x1>>x2>>y1>>y2>>z1>>z2;

        long long rslt = sum[x2][y2][z2] - sum[x1 - 1][y2][z2] - sum[x2][y1 - 1][z2] -
                         sum[x2][y2][z1 - 1] + sum[x1 - 1][y1 - 1][z2] + sum[x1 - 1][y2][z1 - 1] +
                         sum[x2][y1 - 1][z1 - 1] - sum[x1 - 1][y1 - 1][z1 - 1];

        cout << rslt << endl;
    }
}
