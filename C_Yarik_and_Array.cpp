#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 0)
    {
        cout << 0 << "\n";
        return;
    }

    long long max_so_far = arr[0];
    long long current_max = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (abs(arr[i]) % 2 != abs(arr[i - 1]) % 2)
        {
            current_max = max((long long)arr[i], current_max + arr[i]);
        }
        else
        {
            current_max = arr[i];
        }

        max_so_far = max(max_so_far, current_max);
    }

    cout << max_so_far << "\n";
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