#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));

    int neg_count = 0;
    int mini = INT_MAX;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            sum += abs(arr[i][j]);
            mini = min(mini, abs(arr[i][j]));
            if (arr[i][j] < 0)
                neg_count++;
        }
    }

    if (neg_count % 2 == 0)
        cout << sum << "\n";
    else
        cout << sum - 2 * mini << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
