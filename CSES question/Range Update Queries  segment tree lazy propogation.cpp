#include<bits/stdc++.h>
using namespace std;

void build_segment_tree(vector<int> &arr, int idx, int l, int r, vector<long long>& seg_tree) {
    if (l == r) {
        seg_tree[idx] = arr[l];
        return;
    }

    int mid = (l + r) / 2;
    build_segment_tree(arr, 2 * idx + 1, l, mid, seg_tree);
    build_segment_tree(arr, 2 * idx + 2, mid + 1, r, seg_tree);
    seg_tree[idx] = seg_tree[2 * idx + 1] + seg_tree[2 * idx + 2];
}

void update_range(vector<long long>& seg_tree, vector<long long>& lazy, int l, int r, int idx, int st, int end, int val) {
    if (lazy[idx] != 0) {
        seg_tree[idx] += (r - l + 1) * lazy[idx];
        if (l != r) {
            lazy[2 * idx + 1] += lazy[idx];
            lazy[2 * idx + 2] += lazy[idx];
        }
        lazy[idx] = 0;
    }

    if (l > end || r < st) {
        return;
    }

    if (l >= st && r <= end) {
        seg_tree[idx] += (r - l + 1) * val;
        if (l != r) {
            lazy[2 * idx + 1] += val;
            lazy[2 * idx + 2] += val;
        }
        return;
    }

    int mid = (l + r) / 2;
    update_range(seg_tree, lazy, l, mid, 2 * idx + 1, st, end, val);
    update_range(seg_tree, lazy, mid + 1, r, 2 * idx + 2, st, end, val);
    seg_tree[idx] = seg_tree[2 * idx + 1] + seg_tree[2 * idx + 2];
}

long long query_range(vector<long long>& seg_tree, vector<long long>& lazy, int l, int r, int idx, int pos) {
    if (lazy[idx] != 0) {
        seg_tree[idx] += (r - l + 1) * lazy[idx];
        if (l != r) {
            lazy[2 * idx + 1] += lazy[idx];
            lazy[2 * idx + 2] += lazy[idx];
        }
        lazy[idx] = 0;
    }

    if (l == r) {
        return seg_tree[idx];
    }

    int mid = (l + r) / 2;
    if (pos <= mid) {
        return query_range(seg_tree, lazy, l, mid, 2 * idx + 1, pos);
    } else {
        return query_range(seg_tree, lazy, mid + 1, r, 2 * idx + 2, pos);
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<long long> seg_tree(4 * n, 0);
    vector<long long> lazy(4 * n, 0);

    build_segment_tree(arr, 0, 0, n - 1, seg_tree);

    vector<long long> ans;
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r, val;
            cin >> l >> r >> val;
            l--; r--;
            update_range(seg_tree, lazy, 0, n - 1, 0, l, r, val);
        } else {
            int i;
            cin >> i;
            i--;
            ans.push_back(query_range(seg_tree, lazy, 0, n - 1, 0, i));
        }
    }

    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
