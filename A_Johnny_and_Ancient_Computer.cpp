#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    if (a % b != 0 && b % a != 0)
    {
        cout << -1 << endl;
        return;
    }

    if (a > b)
        swap(a, b);

    long long x = b / a;
    long long cnt = 0;

    while (x > 1)
    {
        if (x % 8 == 0)
            x /= 8;
        else if (x % 4 == 0)
            x /= 4;
        else if (x % 2 == 0)
            x /= 2;
        else
        {
            cout << -1 << endl;
            return;
        }
        cnt++;
    }

    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
        solve();
}
