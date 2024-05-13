#include<bits/stdc++.h>
using namespace std;

double func(double x, int cost[], int size, int hgt[]) {
    double tlcost = 0;
    for (int i = 0; i < size; i++) {
        tlcost += abs(hgt[i] - x) * cost[i];
    }
    return tlcost;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int hgt[n];
        int cost[n];

        for (int i = 0; i < n; i++)
            cin >> hgt[i];

        for (int i = 0; i < n; i++)
            cin >> cost[i];

        double st = 0;
        double end = 10000;
          double eps = 1e-6;
        while (end-st>eps) {
            double mid1 = st + (end - st) / 3;
            double mid2 = end - (end - st) / 3;

            if (func(mid1, cost, n, hgt) > func(mid2, cost, n, hgt))
                st = mid1 ;
            else if (func(mid1, cost, n, hgt) < func(mid2, cost, n, hgt))
                end = mid2 ;
            else {
                st = mid1 ;
                end = mid2 ;
            }
        }

        long long int ans = func(st, cost, n, hgt);
        cout <<ans<< "\n";
    }
    return 0;
}
