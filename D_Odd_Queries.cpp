#include <bits/stdc++.h>
using namespace std;

// Function to check answer using prefix sums
void final_ans(int total_sum, int subarray_sum, int new_sum) {
    int final_sum = total_sum - subarray_sum + new_sum;
    cout << (final_sum % 2 == 0 ? "NO" : "YES") << endl;
}

int main() {
    ios::sync_with_stdio(false);  // ✅ Speeds up input/output
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> arr_a(n);
        for (int i = 0; i < n; i++) {
            cin >> arr_a[i];
        }

        // ✅ Step 1: Prefix sum array
        vector<long long> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + arr_a[i - 1];
        }

        // ✅ Total initial sum
        long long total_sum = prefix[n];

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            // ✅ Fast subarray sum using prefix
            long long sum_to_remove = prefix[r] - prefix[l - 1];
            long long sum_to_add = 1LL * (r - l + 1) * k;

            final_ans(total_sum, sum_to_remove, sum_to_add);
        }
    }
    return 0;
}
