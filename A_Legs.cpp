#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int n;
    cin>>n;
    cout << n / 4 + (n % 4 == 2 ? 1 : 0) << endl;
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