#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m, i, j;
    cin >> n >> m >> i >> j;

    long long d1 = abs(i - 1) + abs(j - 1) + abs(1 - n) + abs(1 - m) + abs(i - n) + abs(j - m);

    long long d2 = abs(i - 1) + abs(j - m) + abs(1 - n) + abs(m - 1) + abs(i - n) + abs(j - 1);

    if (d1 >= d2)
        cout << 1 << " " << 1 << " " << n << " " << m << "\n";
    else
        cout << 1 << " " << m << " " << n << " " << 1 << "\n";
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
