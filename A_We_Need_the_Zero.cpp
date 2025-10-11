#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int check = 0;
    for (int i = 0; i < n; i++)
    {
        check ^= arr[i];
    }

    if (n % 2 == 0)
    {
        if (check == 0)
        {
            cout << 5 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << check << endl;
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