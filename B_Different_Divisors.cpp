#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void solve()
{
    int d;
    cin >> d;
    int ans = 1;
    int idx = 0;
    for (idx = (1 + d); idx < (1 + d + 60); idx++)
    {
        if (isPrime(idx))
        {
            ans *= idx;
            break;
        }
    }

    for (idx = idx + d; idx < (idx + d + 60); idx++)
    {
        if (isPrime(idx))
        {
            ans *= idx;
            break;
        }
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
    {
        solve();
    }
    return 0;
}