#include <bits/stdc++.h>
using namespace std;

bool isvalid(int *a, int n, long long int m, long long int mid) {

    long long int paratha = 0;
    int time = 0;
   
    for (int i = 0; i < n; i++) {
        time =a[i];
       int  j=2;

       while(time<=mid){
        paratha++;
        time+=a[i]*j;
        j++;

       }

       if(paratha>=m)
      return 1;
    }
    
        return 0;
}

int main() {

    int t;
    cin >> t;
    while (t--) {

        int parth;
        cin >> parth;
        int m;
        cin >> m;
        int a[m];

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        long long int st = 0;
        long long int end = 1000000000;
        long long int ans = 0;

        long long int mid;

        while (st <= end) {
            mid = (st + end) / 2;
            if (isvalid(a, m, parth, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
