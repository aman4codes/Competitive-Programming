#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // group indices by value
    unordered_map<int, vector<int>> groups;
    groups.reserve(n * 2);
    for (int i = 0; i < n; ++i)
        groups[arr[i]].push_back(i);

    // if any group has size 1, impossible
    for (auto &p : groups)
    {
        if (p.second.size() == 1)
        {
            cout << -1 << '\n';
            return;
        }
    }

    // perm[i] = 1-based index where element at i moves
    vector<int> perm(n);
    for (auto &p : groups)
    {
        auto &idx = p.second;
        int m = (int)idx.size();
        for (int j = 0; j < m; ++j)
        {
            perm[idx[j]] = idx[(j + 1) % m] + 1; // cyclic shift, +1 for 1-based
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (i)
            cout << ' ';
        cout << perm[i];
    }
    cout << '\n';
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
