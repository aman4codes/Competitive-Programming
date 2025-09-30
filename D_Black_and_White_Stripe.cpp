#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string st;
    cin >> st;

    int w_cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if (st[i] == 'W')
            w_cnt++;
    }

    int ans = w_cnt;
    for (int i = k; i < n; i++)
    {
        if (st[i - k] == 'W')
            w_cnt--;
        if (st[i] == 'W')
            w_cnt++;
        ans = min(ans, w_cnt);
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
}
