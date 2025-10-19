#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, k;
    cin >> a >> b >> k;

    long long g = gcd(a, b);

    if (a / g <= k && b / g <= k)
        cout << 1 << "\n";
    else
        cout << 2 << "\n";
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
