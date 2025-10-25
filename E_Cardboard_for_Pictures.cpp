#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    ll l = 1, r = c, ans = -1;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll sum_all = 0;
        bool overflow = false;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] + 2 * mid > 2e9)
            {
                overflow = true;
                break;
            }
            sum_all += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if (sum_all > c)
            {
                overflow = true;
                break;
            }
        }

        if (!overflow)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
