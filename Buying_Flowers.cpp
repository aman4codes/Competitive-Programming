#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int n;
    cin >> n;
    int div = n / 3;
    int cost = div * 5;
    int rem = n % 3;
    if (rem == 2)
    {
        cost += 4;
    }
    else if (rem == 1)
    {
        cost -= 5;
        cost += 8;
    }
    cout << cost << endl;
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