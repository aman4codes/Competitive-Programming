#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

int get_basis_dimension(const std::vector<int>& a) {
    std::vector<int> basis;
    for (int x : a) {
        for (int b : basis) {
            x = std::min(x, x ^ b);
        }
        if (x > 0) {
            basis.push_back(x);
            std::sort(basis.rbegin(), basis.rend());
        }
    }
    return basis.size();
}

void solve() {
    int n;
    long long k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    int total_xor_sum = 0;
    int non_zero_count = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        total_xor_sum ^= a[i];
        if (a[i] != 0) {
            non_zero_count++;
        }
    }

    int d = get_basis_dimension(a);
    int db;

    if (d < n) {
        if (k == n) {
            db = (total_xor_sum != 0);
        } else if (d == 1) {
            int c1 = non_zero_count;
            int c0 = n - c1;
            long long L = std::max(0LL, k - c0);
            long long R = std::min((long long)k, (long long)c1);

            if (L > R) {
                db = 0;
            } else if (L == R) {
                db = (L % 2 != 0);
            } else {
                db = 1;
            }
        } else {
            db = d;
        }
    } else {
        if (k == 0) {
            db = 0;
        } else if (k % 2 != 0) {
            db = d;
        } else {
            if (k == d) {
                db = 1;
            } else {
                db = d - 1;
            }
        }
    }

    long long result = 1LL << db;
    std::cout << result << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

