#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;

    int ans = INT_MAX;

    int start_inc = (b == 1) ? 1 : 0;

    for (int inc = start_inc; inc <= 30; inc++)
    {
        long long curr_b = b + inc;
        long long temp = a;
        int div_moves = 0;

        while (temp > 0)
        {
            temp /= curr_b;
            div_moves++;
        }

        ans = min(ans, div_moves + inc);
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
        solve();
    return 0;
}
