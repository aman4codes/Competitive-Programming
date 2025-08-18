#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, C;
        cin >> N >> C;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < N; ++i) cin >> B[i];

        unordered_map<int, int> min_cost;
        for (int i = 0; i < N; ++i) {
            int vit = A[i];
            int cost = B[i];
            if (min_cost.find(vit) == min_cost.end())
                min_cost[vit] = cost;
            else
                min_cost[vit] = min(min_cost[vit], cost);
        }

        vector<int> costs;
        for (auto &p : min_cost)
            costs.push_back(p.second);

        int K = costs.size();
        const int INF = 1e9;
        vector<int> dp(K + 1, INF);
        dp[0] = 0;

        // Subset sum DP
        for (int c : costs) {
            for (int i = K; i >= 1; --i) {
                dp[i] = min(dp[i], dp[i - 1] + c);
            }
        }

        int ans = 0;
        for (int i = 1; i <= K; ++i) {
            ans = max(ans, C * i - dp[i]);
        }

        cout << ans << endl;
    }

    return 0;
}
