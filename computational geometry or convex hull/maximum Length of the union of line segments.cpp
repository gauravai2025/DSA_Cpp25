#include<bits/stdc++.h>
using namespace std;

   // Given segments on a line, each described by a pair of coordinates (ai,bi) We have to find the maximum length of their union.
     // Klee's algorithm to find the maximum length of the union of segments on a line.
        // The time complexity of the algorithm is O(n log n), where n is the number of segments.
        // The algorithm is based on the following simple observation: if we sort all the endpoints of the segments, then the maximum length of the union of the segments is the sum of the lengths of the gaps between the endpoints.

int length_union(const vector<pair<int, int>> &a) {
    int n = a.size();
    vector<pair<int, bool>> x(n*2);
    for (int i = 0; i < n; i++) {
        x[i*2] = {a[i].first, false};
        x[i*2+1] = {a[i].second, true};
    }

    sort(x.begin(), x.end());

    int result = 0;
    int c = 0;
    for (int i = 0; i < n * 2; i++) {
        if (i > 0 && x[i].first > x[i-1].first && c > 0)
            result += x[i].first - x[i-1].first;
        if (x[i].second)
            c--;
        else
            c++;
    }
    return result;
}
 
int main()
{

    int n;
    cout<<"enter number of segments:\n";
    cin>>n;
    vector<pair<int, int>> a(n);
    cout<<"enter segments:\n";

    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }

    cout<<"maximum length of the union of segments: "<<length_union(a)<<endl;

    return 0;
}