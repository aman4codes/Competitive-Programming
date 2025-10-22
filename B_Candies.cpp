#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << -1 << "\n";
        return;
    }

    vector<int> ans;
    while (n > 1)
    {
        if (((n + 1) / 2) % 2 == 1 || (n + 1) / 2 == 1)
        {
            ans.push_back(1);
            n = (n + 1) / 2;
        }
        else
        {
            ans.push_back(2);
            n = (n - 1) / 2;
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (int x : ans)
        cout << x << " ";
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
