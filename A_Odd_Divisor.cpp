#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPowerOfTwo(ll n)
{
    if (n <= 0)
        return false;
    while (n % 2 == 0)
    {
        n /= 2;
    }
    return (n == 1);
}

void solve()
{
    ll n;
    cin >> n;
    if (!isPowerOfTwo(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
