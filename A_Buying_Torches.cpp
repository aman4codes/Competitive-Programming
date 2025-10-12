#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    long long x, y, k;
    cin >> x >> y >> k;
    long long need = k * (y + 1) - 1;
    long long no_of_trade = (need + (x - 1) - 1) / (x - 1); //ceil division
    long long ans = no_of_trade + k;

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