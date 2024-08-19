
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define mod 1000000007
#define MOD1 998244353
const int N = 1e6 + 5;
const long double epsilon = 1e-9;
const ll infm = LLONG_MIN;
#define inf 1e18
#define nline << "\n"
#define pf push_front
#define ppf pop_front

typedef vector<ll> vl;
#define vvl vector<vector<ll>>
#define vvp vector<pair<ll, ll>>


void build_seg_tree(vl& arr, vl& seg_tree, int idx, int st, int end) {
    // Leaf node
    if (st == end) {
        seg_tree[idx] = arr[st];
        return;
    }

    ll mid = (st + end) / 2;

    // Recursively build the left and right subtrees
    build_seg_tree(arr, seg_tree, 2 * idx + 1, st, mid);
    build_seg_tree(arr, seg_tree, 2 * idx + 2, mid + 1, end);

    // Internal node will store the bitwise AND of its children
    seg_tree[idx] = seg_tree[2 * idx +1] ^ seg_tree[2 *idx +2];
}



ll query_seg_tree(vl& seg_tree, int idx, int st, int end, int L, int R){
    // Completely outside the query range
    if (st > R || end < L) {
        // Return maximum possible value as this won't affect the AND operation
        return 0;
    }

    // Completely inside the query range
    if (st >= L && end <= R) {
        return seg_tree[idx];
    }

    // Partially inside and partially outside the query range
    ll mid = (st + end) / 2;

    ll left_ans = query_seg_tree(seg_tree, 2 * idx + 1, st, mid, L, R);
    ll right_ans = query_seg_tree(seg_tree, 2 * idx + 2, mid + 1, end, L, R);

    return left_ans ^ right_ans;
}


void update_seg_tree(vector<ll>& seg_tree, int idx, int st, int end, int pos, ll new_val) {

    if (st == end) {
        seg_tree[idx] = new_val;
        return;
    }

    int mid = (st + end) / 2;

    if (pos <= mid) {
        update_seg_tree(seg_tree, 2 * idx + 1, st, mid, pos, new_val);
    } 
    
    else {
        update_seg_tree(seg_tree, 2 * idx + 2, mid + 1, end, pos, new_val);
    }

    seg_tree[idx] = seg_tree[2 * idx + 1] ^ seg_tree[2 * idx + 2];

}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);  //   cin.tie(NULL);
    cout.tie(0); //  cout.tie(NULL);

    ll n, q;
    // cout<<"enter number of elements: \n";
    cin >>n;

    vl arr(n);

    // cout<<"enter elements: \n";

for(int i=0;i<n;i++){
    cin>>arr[i];
}

    // cout<<"enter number of queries: \n";
    cin >>q;

    vl seg_tree(4 * n);

    build_seg_tree(arr, seg_tree, 0, 0, n - 1);

    int type;
    // cout<<"enter in form of 1 pos val to update  or 2 l r to find bitwise Xor value in range: \n";


 while (q--) {

    cin>>type;

    if(type==1){
        int pos, val;
        cin >>pos>>val;

        update_seg_tree(seg_tree, 0, 0, n - 1, pos-1, val);
    }

    else{
    int l, r;
    cin >>l>>r;

  cout<<query_seg_tree(seg_tree, 0, 0, n - 1, l-1, r-1)<<" ";

    }

 }


    return 0;
}


