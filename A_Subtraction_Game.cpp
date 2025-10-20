#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int a, b;
    cin >> a >> b;
    if ((a == 1 && b == 2) || (a == 2 && b == 1))
    {
        cout << 3 << endl;
    }
    else if (a == 1 || b == 1)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << min(a, b) - 1 << endl;
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