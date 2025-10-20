#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        vector<int> b(k);
        for (int i = 0; i < k; ++i)
            cin >> b[i];

        sort(a.begin(), a.end(), greater<ll>());
        sort(b.begin(), b.end());

        ll total = 0;
        for (ll v : a)
            total += v;

        ll freed = 0;
        int pos = 0;
        for (int x : b)
        {
            if (x > n)
                continue;
            if (pos + x - 1 < n)
            {
                freed += a[pos + x - 1];
                pos += x;
                if (pos >= n)
                    break;
            }
            else
            {
                break;
            }
        }

        cout << (total - freed) << '\n';
    }

    return 0;
}
