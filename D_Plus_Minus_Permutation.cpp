#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define endl '\n'

int sum_first_k(int k)
{
    return k * (k + 1) / 2;
}

int sum_last_k(int n, int k)
{
    return k * (2 * n - k + 1) / 2;
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    int no_of_X = n / x;
    int no_of_Y = n / y;
    int no_of_common = n / lcm(x, y);

    no_of_X -= no_of_common;
    no_of_Y -= no_of_common;

    int sum = sum_last_k(n, no_of_X);

    sum -= sum_first_k(no_of_Y);

    cout << sum << endl;
}

int32_t main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
