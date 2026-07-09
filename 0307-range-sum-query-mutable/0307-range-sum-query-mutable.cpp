class NumArray {
public:
    vector<int> seg;
    int n;

    void build(int index, int low, int high, vector<int>& nums) {
        if (low == high) {
            seg[index] = nums[low];
            return;
        }

        int mid = (low + high) / 2;

        build(2 * index + 1, low, mid, nums);
        build(2 * index + 2, mid + 1, high, nums);

        seg[index] = seg[2 * index + 1] + seg[2 * index + 2];
    }

    void updateTree(int index, int low, int high, int i, int val) {
        if (low == high) {
            seg[index] = val;
            return;
        }

        int mid = (low + high) / 2;

        if (i <= mid)
            updateTree(2 * index + 1, low, mid, i, val);
        else
            updateTree(2 * index + 2, mid + 1, high, i, val);

        seg[index] = seg[2 * index + 1] + seg[2 * index + 2];
    }

    int query(int index, int low, int high, int l, int r) {
        // No overlap
        if (high < l || low > r)
            return 0;

        // Complete overlap
        if (low >= l && high <= r)
            return seg[index];

        // Partial overlap
        int mid = (low + high) / 2;

        return query(2 * index + 1, low, mid, l, r) +
               query(2 * index + 2, mid + 1, high, l, r);
    }

    NumArray(vector<int>& nums) {
        n = nums.size();
        seg.resize(4 * n);
        build(0, 0, n - 1, nums);
    }

    void update(int index, int val) {
        updateTree(0, 0, n - 1, index, val);
    }

    int sumRange(int left, int right) {
        return query(0, 0, n - 1, left, right);
    }
};