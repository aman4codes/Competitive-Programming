#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long N;
    cin >> N;
    long long div = N / 4;
    int r = N % 4;
    long long ans = 0;
    if (r == 0)
    {
        ans = div * 400;
    }
    else if (r == 1)
    {
        if (div >= 1)
            ans = (div - 1) * 400 + 500;
        else
            ans = 200;
    }
    else if (r == 2)
    {
        ans = div * 400 + 200;
    }
    else
    {
        ans = div * 400 + 300;
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
