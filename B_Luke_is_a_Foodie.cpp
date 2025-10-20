#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    long long l = a[0] - x, r = a[0] + x;

    for (int i = 1; i < n; i++)
    {
        long long nl = a[i] - x, nr = a[i] + x;

        l = max(l, nl);
        r = min(r, nr);

        if (l > r)
        {
            ans++;
            l = nl;
            r = nr;
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
