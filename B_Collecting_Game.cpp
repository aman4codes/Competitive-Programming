#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll>> arr(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr[i] = {x, i};
    }


    sort(arr.begin(), arr.end());

    // Prefix sum
    vector<ll> pre(n);
    pre[0] = arr[0].first;
    for (ll i = 1; i < n; i++)
        pre[i] = pre[i - 1] + arr[i].first;

        
    vector<ll> ans(n);

    for (ll i = 0; i < n; i++)
    {
        ll j = i;
        ll found = i;


        while (j < n)
        {
            pair<ll, ll> temp = {pre[j] + 1, LLONG_MIN};
            ll idx = lower_bound(arr.begin(), arr.end(), temp) - arr.begin();
            idx--;

            if (idx == j) break;

            found += idx - j;
            j = idx;
        }

        ans[arr[i].second] = found;
    }

    for (ll i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
