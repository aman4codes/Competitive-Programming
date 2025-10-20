#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; ++i)
        cin >> r[i];

    for (int k = n; k >= 1; --k)
    {
        bool found = false;
        for (int start = 0; start + k - 1 < n; ++start)
        {
            bool ok = true;
            for (int j = start; j < start + k; ++j)
            {
                if (r[j] <= 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                for (int j = start; j < start + k; ++j)
                    r[j]--;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
