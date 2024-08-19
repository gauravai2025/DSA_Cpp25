#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;

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

    // Internal node will store the bitwise OR of its children
    seg_tree[idx] = seg_tree[2 * idx + 1] | seg_tree[2 * idx + 2];
}

ll query_seg_tree(vl& seg_tree, int idx, int st, int end, int L, int R) {
    // Completely outside the query range
    if (st > R || end < L) {
        // Return 0 as this won't affect the OR operation
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

    return left_ans | right_ans;
}

void update_seg_tree(vl& seg_tree, int idx, int st, int end, int pos, ll new_val) {
    if (st == end) {
        seg_tree[idx] = new_val;
        return;
    }

    int mid = (st + end) / 2;

    if (pos <= mid) {
        update_seg_tree(seg_tree, 2 * idx + 1, st, mid, pos, new_val);
    } else {
        update_seg_tree(seg_tree, 2 * idx + 2, mid + 1, end, pos, new_val);
    }

    seg_tree[idx] = seg_tree[2 * idx + 1] | seg_tree[2 * idx + 2];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, q;
    cin >> n;

    vl arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> q;

    vl seg_tree(4 * n);
    build_seg_tree(arr, seg_tree, 0, 0, n - 1);

    int type;
    while (q--) {
        cin >> type;

        if (type == 1) {  // Update operation
            int pos, val;
            cin >> pos >> val;
            update_seg_tree(seg_tree, 0, 0, n - 1, pos - 1, val);
        }
        
         else {  // Query operation
            int l, r;
            cin >> l >> r;
            cout << query_seg_tree(seg_tree, 0, 0, n - 1, l - 1, r - 1) << "\n";
        }
    }

    return 0;
}
