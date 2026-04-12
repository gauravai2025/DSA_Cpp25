#include<bits/stdc++.h>
using namespace std;


// You are given an array A of size N consisting of integers. Your task is to find the maximum length of a subarray such that the elements in the subarray have alternating parity.
// A subarray has alternating parity if:
// A[i] is odd and A[i+1] is even (for valid i) or
// A[i] is even and A[i+1] is odd (for valid i)
 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int ans = 0;
    int cnt = 1;
    
    for(int i = 1; i < n; i++){
        if(arr[i] % 2 != arr[i - 1] % 2)
            cnt++;
        else{
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    
   
    ans = max(ans, cnt);
    
    cout << ans;
}