
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
    seg_tree[idx] = seg_tree[2 * idx +1] & seg_tree[2 *idx +2];
}



ll query_seg_tree(vl& seg_tree, int idx, int st, int end, int L, int R){
    // Completely outside the query range
    if (st > R || end < L) {
        // Return maximum possible value as this won't affect the AND operation
        return LLONG_MAX;
    }

    // Completely inside the query range
    if (st >= L && end <= R) {
        return seg_tree[idx];
    }

    // Partially inside and partially outside the query range
    ll mid = (st + end) / 2;
    ll left_ans = query_seg_tree(seg_tree, 2 * idx + 1, st, mid, L, R);
    ll right_ans = query_seg_tree(seg_tree, 2 * idx + 2, mid + 1, end, L, R);

    return left_ans & right_ans;
}

ll binary_search(ll r,ll n,ll k,vl &seg_tree){

    long long st=0,end=r;
    long long mid=0;
    long long int ans=-1;

    while(st<=end){
     mid=(st+end)/2;

    if(query_seg_tree(seg_tree,0,0,n-1,mid,r)<=k){
        ans=mid;
        end=mid-1;
    }

    else
    st=mid+1;
}

return ans;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);  //   cin.tie(NULL);
    cout.tie(0); //  cout.tie(NULL);

    ll n;
    // cout<<"enter number of elements: \n";
    cin >>n;

    vl arr(n);

    // cout<<"enter elements: \n";

for(int i=0;i<n;i++){
    cin>>arr[i];
}

ll k;
cin>>k;

    // cout<<"enter number of queries: \n";

    vl seg_tree(4 * n);

    build_seg_tree(arr, seg_tree, 0, 0, n - 1);

     ll ans=0;

     for(int i=n-1;i>=0;i--){
     int l=binary_search(i,n,k,seg_tree);

    if(l!=-1)
    ans+=(i-l);

     }

    cout<<ans<<endl;

 return 0;
}





