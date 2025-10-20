#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    long long a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
    }
    else
    {
        long long diff = abs(a - b);
        long long rem = a % diff;
        long long rem_2 = diff - rem;
        cout << diff << " " << min(rem, rem_2) << endl;
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