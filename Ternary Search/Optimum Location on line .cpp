#include <bits/stdc++.h>
using namespace std;

double calculateDistanceSum(int a, int b, int c, double x,  vector<vector<int>>  &points) {
    double y = (-c - a * x) / (double)b;
    double sum = 0;
    for (const auto &point : points) {
        double dx = point[0] - x;
        double dy = point[1] - y;
        sum += sqrt(dx * dx + dy * dy);
    }
    return sum;
}

double optimumDistance(int a, int b, int c,  vector<vector<int>>&points) {
    double left = -1e6;
    double right = 1e6; // Given the constraints
    double epsilon = 1e-7; // Precision threshold

    while (right-left>epsilon) {
        double mid1 = left + (right - left) / 3;
        double mid2 = right - (right - left) / 3;

        double dist1 = calculateDistanceSum(a, b, c, mid1, points);
        double dist2 = calculateDistanceSum(a, b, c, mid2, points);

        if (dist1 < dist2)
            right = mid2;
        else if(dist1>dist2)
            left = mid1;

			else{
            right=mid2;
            left=mid1;
			}
    }

    double minimumDistanceSum = calculateDistanceSum(a, b, c, left, points);

    return minimumDistanceSum;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        int n;
        cin >> n;
        vector<vector<int>>points(n);

        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            points[i] = {x, y};
        }

        double result = optimumDistance(a, b, c, points);
        cout << fixed << setprecision(7) << result << endl;
    }
    return 0;
}


