#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int n, c;
    cin >> n >> c;
    vector<int> arr(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int ans = 0;

    for (auto &p : freq)
    {
        if (p.second <= c)
            ans += p.second;
        else
            ans += c;
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}