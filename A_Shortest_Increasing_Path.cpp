#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int x, y;
    cin >> x >> y;

    if (x == y)
    {
        cout << -1 << endl;
    }
    else
    {
        if ((x - 1) > y && y != 1)
        {
            cout << 3 << endl;
        }
        else if (y > x)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
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