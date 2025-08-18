#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int N, Q;
        cin >> N >> Q;
        vector<int> A(N);

        for (int i = 0; i < N; ++i)
            cin >> A[i];

        // Precompute f(A) = sum of min(A[i], A[i+1])
        int score = 0;
        for (int i = 0; i < N - 1; ++i)
            score += min(A[i], A[i + 1]);

        while (Q--) {
            int i, X;
            cin >> i >> X;
            --i; // 0-based indexing

            // Subtract affected pairs
            if (i > 0)
                score -= min(A[i - 1], A[i]);
            if (i < N - 1)
                score -= min(A[i], A[i + 1]);

            A[i] = X;

            // Add updated pairs
            if (i > 0)
                score += min(A[i - 1], A[i]);
            if (i < N - 1)
                score += min(A[i], A[i + 1]);

            cout << score << '\n';
        }
    }

    return 0;
}
