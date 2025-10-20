#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a_i(n), b_i(n);

    for (int i = 0; i < n; i++)
        cin >> a_i[i];
    for (int i = 0; i < n; i++)
        cin >> b_i[i];

    vector<int> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + a_i[i - 1];

    int idx_to_work = min(k, n);
    int b_i_max = INT_MIN;
    long long ans_sum = 0;

    for (int i = 1; i <= idx_to_work; i++)
    {
        b_i_max = max(b_i_max, b_i[i - 1]);
        long long trial_ans = pre[i] + 1LL * (idx_to_work - i) * b_i_max;
        ans_sum = max(ans_sum, trial_ans);
    }

    if (k > idx_to_work)
        ans_sum += 1LL * (k - idx_to_work) * b_i_max;

    cout << ans_sum << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
