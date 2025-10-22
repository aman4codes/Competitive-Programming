#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<long long, int>> a(n), b(n), c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i].first;
        c[i].second = i;
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());

    long long ans = 0;

    for (int i = 0; i < min(3, n); i++)
    {
        for (int j = 0; j < min(3, n); j++)
        {
            for (int k = 0; k < min(3, n); k++)
            {
                int x = a[i].second;
                int y = b[j].second;
                int z = c[k].second;
                if (x != y && y != z && x != z)
                {
                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
    }

    cout << ans << "\n";
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
