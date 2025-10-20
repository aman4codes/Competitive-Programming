#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> time_visit(n);
    vector<int> ans(n + 1, 0);

    for (int i = 0; i < n; i++)
        cin >> time_visit[i];

    vector<int> trial_visit = time_visit;
    sort(trial_visit.rbegin(), trial_visit.rend());

    unordered_map<int, queue<int>> idx_map;
    for (int i = 0; i < n; i++)
    {
        idx_map[time_visit[i]].push(i);
    }

    int value = -1, cnt = 1;

    for (int k = 0; k < n; k++)
    {
        int val = trial_visit[k];
        int j = idx_map[val].front();
        idx_map[val].pop();           

        if (cnt == 1)
        {
            ans[j + 1] = value;
            cnt++;
        }
        else
        {
            value *= -1;
            ans[j + 1] = value;
            value++;
            value *= -1;
            cnt = 1;
        }
    }

    long long sum = 0;
    for (int l = 1; l <= n; l++)
    {
        sum += (2LL * abs(ans[l]) * time_visit[l - 1]);
    }

    cout << sum << "\n";
    for (int y : ans)
        cout << y << " ";
    cout << "\n";
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
