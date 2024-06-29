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

void update_segment_tree(vector<long long>& seg_tree, int idx, int l, int r, int st, int end, int val) {
    if (l > end || r < st) {
        return;
    }

    if (l == r) {
        seg_tree[idx] += val;
        return;
    }

    int mid = (l + r) / 2;
    update_segment_tree(seg_tree, 2 * idx + 1, l, mid, st, end, val);
    update_segment_tree(seg_tree, 2 * idx + 2, mid + 1, r, st, end, val);
    seg_tree[idx] = seg_tree[2 * idx + 1] + seg_tree[2 * idx + 2];
}

long long query_segment_tree(vector<long long>& seg_tree, int idx, int l, int r, int pos) {
    if (l == r) {
        return seg_tree[idx];
    }

    int mid = (l + r) / 2;
    
    if (pos <= mid) {
        return query_segment_tree(seg_tree, 2 * idx + 1, l, mid, pos);
    } else {
        return query_segment_tree(seg_tree, 2 * idx + 2, mid + 1, r, pos);
    }
}

void update_range(vector<long long>& seg_tree, int n, int l, int r, int val) {
    for (int i = l; i <= r; i++) {
        update_segment_tree(seg_tree, 0, 0, n - 1, i, i, val);
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
    build_segment_tree(arr, 0, 0, n - 1, seg_tree);

    vector<long long> ans;
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r, val;
            cin >> l >> r >> val;
            l--; r--;
            update_range(seg_tree, n, l, r, val);
        } else {
            int i;
            cin >> i;
            i--;
            ans.push_back(query_segment_tree(seg_tree, 0, 0, n - 1, i));
        }
    }

    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
