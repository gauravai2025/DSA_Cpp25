#include <iostream>
#include <vector>
#include <set>

using namespace std;

long long sumOfMaxAndMin(const vector<int>& nums, int n, int k) {
    long long ans = 0;

    multiset<int> st;

    for (int i = 0; i < k; i++) {
        st.insert(nums[i]);
    }

    auto itmax = st.end();
    --itmax;
    ans += (*itmax);

    auto itmin = st.begin();
    ans += (*itmin);
    cout<<(*itmax)<<" "<<(*itmin)<<endl;

    int rem = 0;

    for (int i = k; i < n; i++) {
        st.erase(st.find(nums[rem]));
        st.insert(nums[i]);

        auto itmax1 = st.end();
        --itmax1;
        ans += (*itmax1);

        auto itmin1 = st.begin();
        ans += (*itmin1);
        rem++;
            cout<<(*itmax1)<<" "<<(*itmin1)<<endl;

    }

    return ans;
}

int main() {
    cout << "Enter the size of array" << endl;
    int size;
    cin >> size;
    vector<int> a(size);
    int k;
    cout << "Enter the size window of k" << endl;
    cin >> k;
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    cout << "The sum of minimum and maximum elements of all subarrays of size 'k'" << endl;
    cout << sumOfMaxAndMin(a, size, k) << endl;

    return 0;
}
