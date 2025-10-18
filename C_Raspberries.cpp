#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (k != 4)
    {
        int rem = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % k == 0)
            {
                cout << 0 << "\n";
                return;
            }
            rem = min(rem, k - (arr[i] % k));
        }
        cout << rem << "\n";
        return;
    }

    int min_add = INT_MAX;
    int even_count = 0;

    for (int i = 0; i < n; i++)
    {
        int mod4 = arr[i] % 4;
        if (mod4 == 0)
        {
            cout << 0 << "\n";
            return;
        }
        if (arr[i] % 2 == 0)
            even_count++;
        min_add = min(min_add, 4 - mod4);
    }


    if (even_count >= 2)
        cout << 0 << "\n";
    else
        cout << min(min_add, 2 - even_count) << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
