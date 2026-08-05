#include<bits/stdc++.h>
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

 void xorQueries(vector<ll>&arr,vector<vector<int>>& queries,vl &seg_tree) {
      
        vector<int>ans;
        int x;

        build_seg_tree(arr,seg_tree,0,0,arr.size()-1);

        for(int i=0;i<queries.size();i++){
           int l=queries[i][0]-1;
           int r=queries[i][1]-1; 
            x=query_seg_tree(seg_tree,0,0,arr.size()-1,l,r);
            ans.push_back(x);

        }
        for(auto x:ans)
        cout<<x<<endl;
    }
 
int main()
{
    int n,q;
    cin>>n>>q;
    vector<ll>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vl seg_tree(4 * n);


    vector<vector<int>>queries(q,vector<int>(2));

    for(int i=0;i<q;i++){
        cin>>queries[i][0]>>queries[i][1];
    }

    xorQueries(arr,queries,seg_tree);

    return 0;
}